#include "nope.hpp"

SAMPFUNCS *SF = new SAMPFUNCS();

void pprintf(const char *format, ...)
{
	char buf[128];
	va_list args;

	va_start(args, format);

	sprintf_s(buf, 128, PROGRAM_NAME": ");
	vsnprintf(buf + strlen(buf), 128 - strlen(buf), format, args);

	va_end(args);

	SF->getSAMP()->getChat()->AddChatMessage(D3DCOLOR_XRGB(0xFF, 0xFF, 0xAFF), buf);
}

static void version()
{
	char buf[1024];

	sprintf_s(buf, 1024,
		PROGRAM_NAME " " PROGRAM_VERSION "\n\n"
		"Copyright (c) 2016 " PROGRAM_AUTHORS "\n"
		"\n"
		"This is free software: you are free to change and redistribute it.\n"
		"This project is released under the MIT license.\n"
		"\n"
		"Report bugs to: " PROGRAM_BUGREPORT_EMAIL "\n"
		"" PROGRAM_NAME " home page: <" PROGRAM_WEBSITE ">\n"
		);

	SF->getSAMP()->getDialog()->ShowDialog(1, 0, "nope", buf, "Hide", "");
	return;
}

static void usage()
{
	char buf[2048];

	sprintf_s(buf, 2048,
		PROGRAM_NAME " is a modification for San Andreas: Multiplayer that can reroute\n"
		"and block (NOP) incoming and outgoing netcode packets.\n\n"
		HELP_OPTION_DESCRIPTION
		VERSION_OPTION_DESCRIPTION
		);

	SF->getSAMP()->getDialog()->ShowDialog(1, 0, "nope", buf, "Hide", "");
	return;
}

void CALLBACK cmd_nope(std::string param)
{
	char *param_str = _strdup(param.c_str());
	char *tokens[3] = { NULL, NULL };
	int font_size = 0;

	tokens[0] = strtok(param_str, " ");

	if (param.empty() || !_strcmpi(param_str, "help"))
		usage();
	else if (!_strcmpi(param_str, "version"))
		version();
	else
		usage();
}

void CALLBACK mainloop()
{
	static bool init = false;
	if (!init)
	{
		if (GAME == nullptr)
			return;
		if (GAME->GetSystemState() != eSystemState::GS_PLAYING_GAME)
			return;
		if (!SF->getSAMP()->IsInitialized())
			return;

		pprintf("nope " PROGRAM_VERSION " has been loaded, use /nope for general help.");
		SF->getSAMP()->registerChatCommand("nope", cmd_nope);

		SF->getRakNet()->registerRakNetCallback(RakNetScriptHookType::RAKHOOK_TYPE_INCOMING_PACKET, nope_in);
		SF->getRakNet()->registerRakNetCallback(RakNetScriptHookType::RAKHOOK_TYPE_INCOMING_RPC, nope_in);
		SF->getRakNet()->registerRakNetCallback(RakNetScriptHookType::RAKHOOK_TYPE_OUTCOMING_PACKET, nope_out);
		SF->getRakNet()->registerRakNetCallback(RakNetScriptHookType::RAKHOOK_TYPE_OUTCOMING_RPC, nope_out);

		init = true;
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReasonForCall, LPVOID lpReserved)
{
	switch (dwReasonForCall)
	{
	case DLL_PROCESS_ATTACH:
		SF->initPlugin(mainloop, hModule);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
