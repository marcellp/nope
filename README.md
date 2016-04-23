nope
====
nope is a black-box testing tool for San Andreas: Multiplayer that can reroute and block (NOP) incoming and outgoing netcode packets.

In online gaming, netcode refers to the framework used by an online game to send and receive game state updates. San Andreas: Multiplayer uses the RakNet network engine for this purpose. nope is a utility that can selectively define what the client can send and receive.

If you don't know what any of this means, just think of it as a box with lots of magic in it that can make some pretty cool stuff happen.

Building nope
-------------
You will need the latest version of SAMPFUNCS to use this tool. If you want to build nope from source:

* Download the SAMPFUNCS C++ API [here](http://blast.hk/threads/6498/).
* Copy *game_api* and *SAMPAPI* into */nope/*.
* Open the project in Visual Studio and build the solution.
* Copy the binary file from */bin/* to your SAMPFUNCS directory.

Usage
-----
Most of what nope is capable of can be invoked via:

	/nope [RakNet packet/RPC name] [on/off] [in/out]

`on` turns the filter on and `off` turns it off. `in/out` specifies the direction of the filter (incoming/outgoing data).

There is also `/nope list`, which is useful if you want to manually check what you have disabled at the moment.

Example use cases
-----------------
nope is a simple yet incredbily versatile tool. As a standalone utility, it can be used with hacks to test and bypass anti-cheat code.

For example, to prevent the server from taking away your cheated money, use:

	/nope ScrGivePlayerMoney on in
	/nope ScrResetPlayerMoney on in

(Obviously, if the server keeps track of your money, this will not work.)

If you want to avoid damage by bullets, you can simply disable incoming bullet sync data:

	/nope ID_BULLET_SYNC on in

Want to check spots you're not supposed to have access to? It's easy: just walk next to the restricted area and use nope to make the server think you're AFK:

	/nope ID_PLAYER_SYNC on out
	/nope ID_VEHICLE_SYNC on out	

Sometimes, you just really get tired of those pesky effects you get when you take drugs on certain role-play servers. Also, isn't it awful when it starts raining and your game starts lagging like hell? Well, solving this set of issues is ridiculously simple with nope:

	/nope ScrSetWeather on in

nope is also an extremely powerful tool that can be combined with other scripting languages (e.g. AutoHotKey) to create complex testing environments for finding errors and edge cases in server-side scripts. The possibilities are truly limitless.

Warning
-------
nope is pretty low-level. Understand and be familiar with the way it works (familiarity with PAWN and RakNet is recommended). Don't expect this one utility to solve all your issues: different servers are scripted differently and using nope may not even give you any significant advantages.

Remember, nope is for software testing: it is not supposed to be particularly user-friendly. Most importantly, it is *not* designed to be a *hack* or a *cheat*. If you do decide to use it on someone else's server, be prepared to face the potential consequences.

nope is **not** safe, even when used as prescribed. Every software testing utility is potentially dangerous: buggy server-side code combined with randomly blocked netcode data may, in extreme cases, lead to server-side file or database corruption and other nasty things. Always use a separate testing environment that you do not mind corrupting.

License
-------
nope is an open source project covered by the MIT License. See [LICENSE](LICENSE) for more information or visit http://opensource.org/licenses/MIT.