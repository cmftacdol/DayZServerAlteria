///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie  
ref autoptr TIntArray data_Suspended =		{ 0,		100,		100,		0,			30 ,		2,			30,				0,					1 };			// 0 Suspended (don't modify this line)   

ref autoptr TIntArray data_CountrySide =	{ 1,		180,		300,		20,			25,			300,		15,				50,					1 };			// 1 DEFAULT (Countryside)
// ref autoptr TIntArray data_CountrySide =	{ 1,		10,			10,			5,			5,			50,			3,				0,					1 };			// 1 DEFAULT (Countryside test)

ref autoptr TIntArray data_SmallTwon =		{ 10,		10,			15,			2,			5,			130,		3,				30,					10 };			// 10 SmallTown
ref autoptr TIntArray data_AverageTown =	{ 20,		10,			15,			3,			7,			130,		5,				30,					20 };			// 20 AverageTown
ref autoptr TIntArray data_BigTown =		{ 30,		10,			15,			5,			9,			130,		10,				30,					30 };			// 30 BigTown
ref autoptr TIntArray data_Building =		{ 40,		10,			15,			4,			6,			130,		10,				30,					40 };			// 40 Indus/NBC
ref autoptr TIntArray data_Industial =		{ 50,		10,			15,			3,			4,			130,		5,				30,					50 };			// 50 Industial
ref autoptr TIntArray data_Military =		{ 60,		10,			15,			3,			6,			130,		5,				30,					60 };			// 60 Military [always focus]
ref autoptr TIntArray data_Fog =			{ 70,		0,			0,			0,			0,			0,			0,				0,					70 };			// 70 
ref autoptr TIntArray data_Prison =			{ 71,		10,			15,			3,			6,			90,			5,				30,					60 };			// 71 Military (Short Distance) [always focus]
ref autoptr TIntArray data_Marines =		{ 72,		0,			0,			0,			0,			0,			0,				0,					72 };			// 72 
ref autoptr TIntArray data_Bridge =			{ 73,		0,			0,			0,			0,			0,			0,				0,					73 };			// 73 
ref autoptr TIntArray data_Config90 =		{ 90,		0,			0,			0,			0,			0,			0,				0,					90 };			// 90 

/// Here you can configure your personnal dynamic spawn types
ref autoptr TIntArray data_Config91 =		{ 91,		10,			15,			2,			5,			80,			3,				30,					10 };			// 91 SmallTown (Short Distance)
ref autoptr TIntArray data_Config92 =		{ 92,		10,			15,			3,			7,			80,			5,				30,					20 };			// 92 AverageTown (Short Distance)
ref autoptr TIntArray data_Config93 =		{ 93,		10,			15,			5,			9,			80,			10,				30,					30 };			// 93 BigTown (Short Distance)
ref autoptr TIntArray data_Config94 =		{ 94,		10,			15,			4,			6,			80,			10,				30,					40 };			// 94 Indus/NBC (Short Distance)
ref autoptr TIntArray data_Config95 =		{ 95,		10,			15,			3,			4,			80,			5,				30,					50 };			// 95 Industial (Short Distance)
ref autoptr TIntArray data_Config96 =		{ 96,		0,			0,			0,			0,			0,			0,				0,					0 };			// 96 
ref autoptr TIntArray data_Config97 =		{ 97,		0,			0,			0,			0,			0,			0,				0,					0 };			// 97 
ref autoptr TIntArray data_Config98 =		{ 98,		0,			0,			0,			0,			0,			0,				0,					0 };			// 98 

ref autoptr TIntArray data_Config99 =		{ 99,		7,			10,			2,			3,			100,		10,				40,					99 };			// 99 Toxic zones (always focus)

///  									NUMCONFIG	TIMEmini     TIMEmaxi	NBRmini		NBRmaxi		DISTANCE	AREA RADIUS 	Lateral SHIFT 	numChooseZombiesCategorie  

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// look at ZombiesChooseCategories.c to choose numChooseZombiesCategorie number (use the number who is instead XXX of data_Horde_XXX_ZombiesCategories variable name)

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// NUMCONFIG 	: !! don't modify !! it is used in ZombiesDynamicSpawnZones.c file

/// TIMEmini 		: Minumun Time (in seconds) between each dynamic spawn.    
/// TIMEmaxi 		: Maximum Time (in seconds) between each dynamic spawn.    
/// !!! if value "6" (coast factor) of RealTimeTweaks.json file is not set to 0, remember than the time here correspond to the extreme north west of the map  
/// For example if value "6" is set to 10 and you set time here to 20 seconds the real time on the coast will be around 32 seconds (10 correspond to +12 seconds on the coast)

/// NBRmini		: Minimum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)
/// NBRmaxi		: Maximum number of Z to spawn (!! this number will be multiply by the ratio "3" of the RealTimeTweaks.json file (if "3" = 50 => quantity spawned will be 50%, so you need double the quantities)

/// DISTANCE	  : Distance to which the group spawn (!! must not be lower than 60 !!)
/// AREA RADIUS	  : The size of the zone in which the zeds will spawn
/// Lateral SHIFT : 0 => The group will spawn in front of the player, 10 => The group will spawn with a random lateral shift between 0 and 10 meters

/// numChooseZombiesCategorie : Choose the type of zombie to spawn (see ZombiesChooseCategories.c file and look for the number in variable name. For exemple variable name data_Horde_102_CastelCategories, 102 is the number to spawn Castle zeds categorie)
