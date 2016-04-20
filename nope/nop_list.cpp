#include "nope.hpp"

nop_list nop_raknet[189] = {
	{ "ClickPlayer", RPCEnumeration::RPC_ClickPlayer, true },
	{ "ClientJoin", RPCEnumeration::RPC_ClientJoin, true },
	{ "EnterVehicle", RPCEnumeration::RPC_EnterVehicle, true },
	{ "EnterEditObject", RPCEnumeration::RPC_EnterEditObject, true },
	{ "ScriptCash", RPCEnumeration::RPC_ScriptCash, true },
	{ "ServerCommand", RPCEnumeration::RPC_ServerCommand, true },
	{ "Spawn", RPCEnumeration::RPC_Spawn, true },
	{ "Death", RPCEnumeration::RPC_Death, true },
	{ "NPCJoin", RPCEnumeration::RPC_NPCJoin, true },
	{ "DialogResponse", RPCEnumeration::RPC_DialogResponse, true },
	{ "ClickTextDraw", RPCEnumeration::RPC_ClickTextDraw, true },
	{ "ScmEvent", RPCEnumeration::RPC_ScmEvent, true },
	{ "WeaponPickupDestroy", RPCEnumeration::RPC_WeaponPickupDestroy, true },
	{ "Chat", RPCEnumeration::RPC_Chat, true },
	{ "SrvNetStats", RPCEnumeration::RPC_SrvNetStats, true },
	{ "ClientCheck", RPCEnumeration::RPC_ClientCheck, true },
	{ "DamageVehicle", RPCEnumeration::RPC_DamageVehicle, true },
	{ "GiveTakeDamage", RPCEnumeration::RPC_GiveTakeDamage, true },
	{ "EditAttachedObject", RPCEnumeration::RPC_EditAttachedObject, true },
	{ "EditObject", RPCEnumeration::RPC_EditObject, true },
	{ "SetInteriorId", RPCEnumeration::RPC_SetInteriorId, true },
	{ "MapMarker", RPCEnumeration::RPC_MapMarker, true },
	{ "RequestClass", RPCEnumeration::RPC_RequestClass, true },
	{ "RequestSpawn", RPCEnumeration::RPC_RequestSpawn, true },
	{ "PickedUpPickup", RPCEnumeration::RPC_PickedUpPickup, true },
	{ "MenuSelect", RPCEnumeration::RPC_MenuSelect, true },
	{ "VehicleDestroyed", RPCEnumeration::RPC_VehicleDestroyed, true },
	{ "MenuQuit", RPCEnumeration::RPC_MenuQuit, true },
	{ "ExitVehicle", RPCEnumeration::RPC_ExitVehicle, true },
	{ "UpdateScoresPingsIPs", RPCEnumeration::RPC_UpdateScoresPingsIPs, true },
	{ "ScrSetPlayerName", ScriptRPCEnumeration::RPC_ScrSetPlayerName, true },
	{ "ScrSetPlayerPos", ScriptRPCEnumeration::RPC_ScrSetPlayerPos, true },
	{ "ScrSetPlayerPosFindZ", ScriptRPCEnumeration::RPC_ScrSetPlayerPosFindZ, true },
	{ "ScrSetPlayerHealth", ScriptRPCEnumeration::RPC_ScrSetPlayerHealth, true },
	{ "ScrTogglePlayerControllable", ScriptRPCEnumeration::RPC_ScrTogglePlayerControllable, true },
	{ "ScrPlaySound", ScriptRPCEnumeration::RPC_ScrPlaySound, true },
	{ "ScrSetPlayerWorldBounds", ScriptRPCEnumeration::RPC_ScrSetPlayerWorldBounds, true },
	{ "ScrGivePlayerMoney", ScriptRPCEnumeration::RPC_ScrGivePlayerMoney, true },
	{ "ScrSetPlayerFacingAngle", ScriptRPCEnumeration::RPC_ScrSetPlayerFacingAngle, true },
	{ "ScrResetPlayerMoney", ScriptRPCEnumeration::RPC_ScrResetPlayerMoney, true },
	{ "ScrResetPlayerWeapons", ScriptRPCEnumeration::RPC_ScrResetPlayerWeapons, true },
	{ "ScrGivePlayerWeapon", ScriptRPCEnumeration::RPC_ScrGivePlayerWeapon, true },
	{ "ScrSetVehicleParamsEx", ScriptRPCEnumeration::RPC_ScrSetVehicleParamsEx, true },
	{ "ScrCancelEdit", ScriptRPCEnumeration::RPC_ScrCancelEdit, true },
	{ "ScrSetPlayerTime", ScriptRPCEnumeration::RPC_ScrSetPlayerTime, true },
	{ "ScrToggleClock", ScriptRPCEnumeration::RPC_ScrToggleClock, true },
	{ "ScrWorldPlayerAdd", ScriptRPCEnumeration::RPC_ScrWorldPlayerAdd, true },
	{ "ScrSetPlayerShopName", ScriptRPCEnumeration::RPC_ScrSetPlayerShopName, true },
	{ "ScrSetPlayerSkillLevel", ScriptRPCEnumeration::RPC_ScrSetPlayerSkillLevel, true },
	{ "ScrSetPlayerDrunkLevel", ScriptRPCEnumeration::RPC_ScrSetPlayerDrunkLevel, true },
	{ "ScrCreate3DTextLabel", ScriptRPCEnumeration::RPC_ScrCreate3DTextLabel, true },
	{ "ScrDisableCheckpoint", ScriptRPCEnumeration::RPC_ScrDisableCheckpoint, true },
	{ "ScrSetRaceCheckpoint", ScriptRPCEnumeration::RPC_ScrSetRaceCheckpoint, true },
	{ "ScrDisableRaceCheckpoint", ScriptRPCEnumeration::RPC_ScrDisableRaceCheckpoint, true },
	{ "ScrGameModeRestart", ScriptRPCEnumeration::RPC_ScrGameModeRestart, true },
	{ "ScrPlayAudioStream", ScriptRPCEnumeration::RPC_ScrPlayAudioStream, true },
	{ "ScrStopAudioStream", ScriptRPCEnumeration::RPC_ScrStopAudioStream, true },
	{ "ScrRemoveBuildingForPlayer", ScriptRPCEnumeration::RPC_ScrRemoveBuildingForPlayer, true },
	{ "ScrCreateObject", ScriptRPCEnumeration::RPC_ScrCreateObject, true },
	{ "ScrSetObjectPos", ScriptRPCEnumeration::RPC_ScrSetObjectPos, true },
	{ "ScrSetObjectRot", ScriptRPCEnumeration::RPC_ScrSetObjectRot, true },
	{ "ScrDestroyObject", ScriptRPCEnumeration::RPC_ScrDestroyObject, true },
	{ "ScrDeathMessage", ScriptRPCEnumeration::RPC_ScrDeathMessage, true },
	{ "ScrSetPlayerMapIcon", ScriptRPCEnumeration::RPC_ScrSetPlayerMapIcon, true },
	{ "ScrRemoveVehicleComponent", ScriptRPCEnumeration::RPC_ScrRemoveVehicleComponent, true },
	{ "ScrUpdate3DTextLabel", ScriptRPCEnumeration::RPC_ScrUpdate3DTextLabel, true },
	{ "ScrChatBubble", ScriptRPCEnumeration::RPC_ScrChatBubble, true },
	{ "ScrSomeupdate", ScriptRPCEnumeration::RPC_ScrSomeupdate, true },
	{ "ScrShowDialog", ScriptRPCEnumeration::RPC_ScrShowDialog, true },
	{ "ScrDestroyPickup", ScriptRPCEnumeration::RPC_ScrDestroyPickup, true },
	{ "ScrLinkVehicleToInterior", ScriptRPCEnumeration::RPC_ScrLinkVehicleToInterior, true },
	{ "ScrSetPlayerArmour", ScriptRPCEnumeration::RPC_ScrSetPlayerArmour, true },
	{ "ScrSetPlayerArmedWeapon", ScriptRPCEnumeration::RPC_ScrSetPlayerArmedWeapon, true },
	{ "ScrSetSpawnInfo", ScriptRPCEnumeration::RPC_ScrSetSpawnInfo, true },
	{ "ScrSetPlayerTeam", ScriptRPCEnumeration::RPC_ScrSetPlayerTeam, true },
	{ "ScrPutPlayerInVehicle", ScriptRPCEnumeration::RPC_ScrPutPlayerInVehicle, true },
	{ "ScrRemovePlayerFromVehicle", ScriptRPCEnumeration::RPC_ScrRemovePlayerFromVehicle, true },
	{ "ScrSetPlayerColor", ScriptRPCEnumeration::RPC_ScrSetPlayerColor, true },
	{ "ScrDisplayGameText", ScriptRPCEnumeration::RPC_ScrDisplayGameText, true },
	{ "ScrForceClassSelection", ScriptRPCEnumeration::RPC_ScrForceClassSelection, true },
	{ "ScrAttachObjectToPlayer", ScriptRPCEnumeration::RPC_ScrAttachObjectToPlayer, true },
	{ "ScrInitMenu", ScriptRPCEnumeration::RPC_ScrInitMenu, true },
	{ "ScrShowMenu", ScriptRPCEnumeration::RPC_ScrShowMenu, true },
	{ "ScrHideMenu", ScriptRPCEnumeration::RPC_ScrHideMenu, true },
	{ "ScrCreateExplosion", ScriptRPCEnumeration::RPC_ScrCreateExplosion, true },
	{ "ScrShowPlayerNameTagForPlayer", ScriptRPCEnumeration::RPC_ScrShowPlayerNameTagForPlayer, true },
	{ "ScrAttachCameraToObject", ScriptRPCEnumeration::RPC_ScrAttachCameraToObject, true },
	{ "ScrInterpolateCamera", ScriptRPCEnumeration::RPC_ScrInterpolateCamera, true },
	{ "ScrSetObjectMaterial", ScriptRPCEnumeration::RPC_ScrSetObjectMaterial, true },
	{ "ScrGangZoneStopFlash", ScriptRPCEnumeration::RPC_ScrGangZoneStopFlash, true },
	{ "ScrApplyAnimation", ScriptRPCEnumeration::RPC_ScrApplyAnimation, true },
	{ "ScrClearAnimations", ScriptRPCEnumeration::RPC_ScrClearAnimations, true },
	{ "ScrSetPlayerSpecialAction", ScriptRPCEnumeration::RPC_ScrSetPlayerSpecialAction, true },
	{ "ScrSetPlayerFightingStyle", ScriptRPCEnumeration::RPC_ScrSetPlayerFightingStyle, true },
	{ "ScrSetPlayerVelocity", ScriptRPCEnumeration::RPC_ScrSetPlayerVelocity, true },
	{ "ScrSetVehicleVelocity", ScriptRPCEnumeration::RPC_ScrSetVehicleVelocity, true },
	{ "ScrClientMessage", ScriptRPCEnumeration::RPC_ScrClientMessage, true },
	{ "ScrSetWorldTime", ScriptRPCEnumeration::RPC_ScrSetWorldTime, true },
	{ "ScrCreatePickup", ScriptRPCEnumeration::RPC_ScrCreatePickup, true },
	{ "ScrMoveObject", ScriptRPCEnumeration::RPC_ScrMoveObject, true },
	{ "ScrEnableStuntBonusForPlayer", ScriptRPCEnumeration::RPC_ScrEnableStuntBonusForPlayer, true },
	{ "ScrTextDrawSetString", ScriptRPCEnumeration::RPC_ScrTextDrawSetString, true },
	{ "ScrSetCheckpoint", ScriptRPCEnumeration::RPC_ScrSetCheckpoint, true },
	{ "ScrGangZoneCreate", ScriptRPCEnumeration::RPC_ScrGangZoneCreate, true },
	{ "ScrPlayCrimeReport", ScriptRPCEnumeration::RPC_ScrPlayCrimeReport, true },
	{ "ScrSetPlayerAttachedObject", ScriptRPCEnumeration::RPC_ScrSetPlayerAttachedObject, true },
	{ "ScrGangZoneDestroy", ScriptRPCEnumeration::RPC_ScrGangZoneDestroy, true },
	{ "ScrGangZoneFlash", ScriptRPCEnumeration::RPC_ScrGangZoneFlash, true },
	{ "ScrStopObject", ScriptRPCEnumeration::RPC_ScrStopObject, true },
	{ "ScrSetNumberPlate", ScriptRPCEnumeration::RPC_ScrSetNumberPlate, true },
	{ "ScrTogglePlayerSpectating", ScriptRPCEnumeration::RPC_ScrTogglePlayerSpectating, true },
	{ "ScrPlayerSpectatePlayer", ScriptRPCEnumeration::RPC_ScrPlayerSpectatePlayer, true },
	{ "ScrPlayerSpectateVehicle", ScriptRPCEnumeration::RPC_ScrPlayerSpectateVehicle, true },
	{ "ScrSetPlayerWantedLevel", ScriptRPCEnumeration::RPC_ScrSetPlayerWantedLevel, true },
	{ "ScrShowTextDraw", ScriptRPCEnumeration::RPC_ScrShowTextDraw, true },
	{ "ScrTextDrawHideForPlayer", ScriptRPCEnumeration::RPC_ScrTextDrawHideForPlayer, true },
	{ "ScrServerJoin", ScriptRPCEnumeration::RPC_ScrServerJoin, true },
	{ "ScrServerQuit", ScriptRPCEnumeration::RPC_ScrServerQuit, true },
	{ "ScrInitGame", ScriptRPCEnumeration::RPC_ScrInitGame, true },
	{ "ScrRemovePlayerMapIcon", ScriptRPCEnumeration::RPC_ScrRemovePlayerMapIcon, true },
	{ "ScrSetPlayerAmmo", ScriptRPCEnumeration::RPC_ScrSetPlayerAmmo, true },
	{ "ScrSetGravity", ScriptRPCEnumeration::RPC_ScrSetGravity, true },
	{ "ScrSetVehicleHealth", ScriptRPCEnumeration::RPC_ScrSetVehicleHealth, true },
	{ "ScrAttachTrailerToVehicle", ScriptRPCEnumeration::RPC_ScrAttachTrailerToVehicle, true },
	{ "ScrDetachTrailerFromVehicle", ScriptRPCEnumeration::RPC_ScrDetachTrailerFromVehicle, true },
	{ "ScrSetWeather", ScriptRPCEnumeration::RPC_ScrSetWeather, true },
	{ "ScrSetPlayerSkin", ScriptRPCEnumeration::RPC_ScrSetPlayerSkin, true },
	{ "ScrSetPlayerInterior", ScriptRPCEnumeration::RPC_ScrSetPlayerInterior, true },
	{ "ScrSetPlayerCameraPos", ScriptRPCEnumeration::RPC_ScrSetPlayerCameraPos, true },
	{ "ScrSetPlayerCameraLookAt", ScriptRPCEnumeration::RPC_ScrSetPlayerCameraLookAt, true },
	{ "ScrSetVehiclePos", ScriptRPCEnumeration::RPC_ScrSetVehiclePos, true },
	{ "ScrSetVehicleZAngle", ScriptRPCEnumeration::RPC_ScrSetVehicleZAngle, true },
	{ "ScrSetVehicleParamsForPlayer", ScriptRPCEnumeration::RPC_ScrSetVehicleParamsForPlayer, true },
	{ "ScrSetCameraBehindPlayer", ScriptRPCEnumeration::RPC_ScrSetCameraBehindPlayer, true },
	{ "ScrWorldPlayerRemove", ScriptRPCEnumeration::RPC_ScrWorldPlayerRemove, true },
	{ "ScrWorldVehicleAdd", ScriptRPCEnumeration::RPC_ScrWorldVehicleAdd, true },
	{ "ScrWorldVehicleRemove", ScriptRPCEnumeration::RPC_ScrWorldVehicleRemove, true },
	{ "ScrWorldPlayerDeath", ScriptRPCEnumeration::RPC_ScrWorldPlayerDeath, true },
	{ "ID_INTERNAL_PING", PacketEnumeration::ID_INTERNAL_PING, false },
	{ "ID_PING", PacketEnumeration::ID_PING, false },
	{ "ID_PING_OPEN_CONNECTION", PacketEnumeration::ID_PING_OPEN_CONNECTIONS, false },
	{ "ID_CONNECTED_PONG", PacketEnumeration::ID_CONNECTED_PONG, false },
	{ "ID_REQUEST_STATIC_DATA", PacketEnumeration::ID_REQUEST_STATIC_DATA, false },
	{ "ID_CONNECTION_REQUEST", PacketEnumeration::ID_CONNECTION_REQUEST, false },
	{ "ID_AUTH_KEY", PacketEnumeration::ID_AUTH_KEY, false },
	{ "ID_BROADCAST_PINGS", PacketEnumeration::ID_BROADCAST_PINGS, false },
	{ "ID_SECURED_CONNECTION_RESPONSE", PacketEnumeration::ID_SECURED_CONNECTION_RESPONSE, false },
	{ "ID_SECURED_CONNECTION_CONFIRMATION", PacketEnumeration::ID_SECURED_CONNECTION_CONFIRMATION, false },
	{ "ID_RPC_MAPPING", PacketEnumeration::ID_RPC_MAPPING, false },
	{ "ID_SET_RANDOM_NUMBER_SEED", PacketEnumeration::ID_SET_RANDOM_NUMBER_SEED, false },
	{ "ID_RPC", PacketEnumeration::ID_RPC, false },
	{ "ID_RPC_REPL", PacketEnumeration::ID_RPC_REPLY, false },
	{ "ID_DETECT_LOST_CONNECTIONS", PacketEnumeration::ID_DETECT_LOST_CONNECTIONS, false },
	{ "ID_OPEN_CONNECTION_REQUEST", PacketEnumeration::ID_OPEN_CONNECTION_REQUEST, false },
	{ "ID_OPEN_CONNECTION_REPLY", PacketEnumeration::ID_OPEN_CONNECTION_REPLY, false },
	{ "ID_CONNECTION_COOKIE", PacketEnumeration::ID_CONNECTION_COOKIE, false },
	{ "ID_RSA_PUBLIC_KEY_MISMATCHH", PacketEnumeration::ID_RSA_PUBLIC_KEY_MISMATCH, false },
	{ "ID_CONNECTION_ATTEMPT_FAILED", PacketEnumeration::ID_CONNECTION_ATTEMPT_FAILED, false },
	{ "ID_NEW_INCOMING_CONNECTION", PacketEnumeration::ID_NEW_INCOMING_CONNECTION, false },
	{ "ID_NO_FREE_INCOMING_CONNECTION", PacketEnumeration::ID_NO_FREE_INCOMING_CONNECTIONS, false },
	{ "ID_DISCONNECTION_NOTIFICATION", PacketEnumeration::ID_DISCONNECTION_NOTIFICATION, false },
	{ "ID_CONNECTION_LOST", PacketEnumeration::ID_CONNECTION_LOST, false },
	{ "ID_CONNECTION_REQUEST_ACCEPTED", PacketEnumeration::ID_CONNECTION_REQUEST_ACCEPTED, false },
	{ "ID_INITIALIZE_ENCRYPTION", PacketEnumeration::ID_INITIALIZE_ENCRYPTION, false },
	{ "ID_CONNECTION_BANNED", PacketEnumeration::ID_CONNECTION_BANNED, false },
	{ "ID_INVALID_PASSWORD", PacketEnumeration::ID_INVALID_PASSWORD, false },
	{ "ID_MODIFIED_PACKET", PacketEnumeration::ID_MODIFIED_PACKET, false },
	{ "ID_PONG", PacketEnumeration::ID_PONG, false },
	{ "ID_TIMESTAM", PacketEnumeration::ID_TIMESTAMP, false },
	{ "ID_RECEIVED_STATIC_DATA", PacketEnumeration::ID_RECEIVED_STATIC_DATA, false },
	{ "ID_REMOTE_DISCONNECTION_NOTIFICATION", PacketEnumeration::ID_REMOTE_DISCONNECTION_NOTIFICATION, false },
	{ "ID_REMOTE_CONNECTION_LOST", PacketEnumeration::ID_REMOTE_CONNECTION_LOST, false },
	{ "ID_REMOTE_NEW_INCOMING_CONNECTION", PacketEnumeration::ID_REMOTE_NEW_INCOMING_CONNECTION, false },
	{ "ID_REMOTE_EXISTING_CONNECTION", PacketEnumeration::ID_REMOTE_EXISTING_CONNECTION, false },
	{ "ID_REMOTE_STATIC_DATA", PacketEnumeration::ID_REMOTE_STATIC_DATA, false },
	{ "ID_ADVERTISE_SYSTEM", PacketEnumeration::ID_ADVERTISE_SYSTEM, false },
	{ "ID_VEHICLE_SYNC", PacketEnumeration::ID_VEHICLE_SYNC, false },
	{ "ID_RCON_COMMAND", PacketEnumeration::ID_RCON_COMMAND, false },
	{ "ID_RCON_RESPONSE", PacketEnumeration::ID_RCON_RESPONCE, false },
	{ "ID_AIM_SYNC", PacketEnumeration::ID_AIM_SYNC, false },
	{ "ID_WEAPONS_UPDATE", PacketEnumeration::ID_WEAPONS_UPDATE, false },
	{ "ID_STATS_UPDATE", PacketEnumeration::ID_STATS_UPDATE, false },
	{ "ID_BULLET_SYNC", PacketEnumeration::ID_BULLET_SYNC, false },
	{ "ID_PLAYER_SYNC", PacketEnumeration::ID_PLAYER_SYNC, false },
	{ "ID_MARKERS_SYNC", PacketEnumeration::ID_MARKERS_SYNC, false },
	{ "ID_UNOCCUPIED_SYNC", PacketEnumeration::ID_UNOCCUPIED_SYNC, false },
	{ "ID_TRAILER_SYNC", PacketEnumeration::ID_TRAILER_SYNC, false },
	{ "ID_PASSENGER_SYNC", PacketEnumeration::ID_PASSENGER_SYNC, false },
	{ "ID_SPECTATOR_SYNC", PacketEnumeration::ID_SPECTATOR_SYNC, false }
};

bool nop_states[255][2];

static bool convert_int(const char *str, int *val, int base)
{
	char *tmp;

	errno = 0;
	*val = strtol(str, &tmp, 10);

	if (tmp == str || *tmp != '\0' || ((*val == LONG_MIN || *val == LONG_MAX) && errno == ERANGE))
		return false;
	else
		return true;
}

void nope_do(char *arg)
{
	char *raknet_name, *instruction_str;
	int arr_element = -1, instruction;
	bool is_rpc;

	raknet_name = strtok(arg, " ");
	instruction_str = strtok(NULL, " ");

	if (!raknet_name || !instruction_str)
		return pprintf("/nope [raknet packet/RPC] [on/off/tog] [duration] [offset]");

	if (!_strcmpi(instruction_str, "on"))
		instruction = 0;
	else if (!_strcmpi(instruction_str, "off"))
		instruction = 1;
	else if (!_strcmpi(instruction_str, "tog"))
		instruction = 2;
	else
		return pprintf("Invalid instruction (off/on/tog).");

	for (int i = 0; i < sizeof(nop_raknet) / sizeof(nop_raknet[0]); i++) {
		if (!_strcmpi(raknet_name, nop_raknet[i].name)) {
			arr_element = i;
			is_rpc = nop_raknet[i].is_rpc;
		}
	}

	if (arr_element == -1)
		return pprintf("Invalid packet/RPC name.");

	if (instruction == 0)
		nop_states[nop_raknet[arr_element].value][is_rpc] = true;
	else if(instruction == 1)
		nop_states[nop_raknet[arr_element].value][is_rpc] = false;
	else
		nop_states[nop_raknet[arr_element].value][is_rpc] = !nop_states[nop_raknet[arr_element].value][is_rpc];

	pprintf("state of %s (%d) set to %s.",
		nop_raknet[arr_element].name,
		nop_raknet[arr_element].value,
		(nop_states[nop_raknet[arr_element].value][is_rpc]) ? ("NOP'd") : ("not NOP'd"));
}