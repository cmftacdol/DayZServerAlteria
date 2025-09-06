@echo off
:start
::Server name [!EDIT THIS!]
set serverName=Alteria Test
::Server files location [DEFAULT !EDIT AS NEEDED!]
set serverDirectory="C:\Program Files (x86)\Steam\steamapps\common\DayZServer"
::Server Port [DEFAULT]
set serverPort=2302
::Server config [DEFAULT. hostname= in serverDZ.cfg is what shows in the steam server browser. !EDIT AS NEEDED!.]
set serverConfig=serverDZ.cfg
::Server profile location. logfiles are written here and mods are configured here [DEFAULT]
set serverProfile=profiles
::Logical CPU cores to use (Equal or less than available)
set serverCPU=4
::modlist should be of the form "-mod=@mod1;@mod2;@mod3;"
set modList="-mod=@CF;@Dabs Framework;@Alteria;@GSC Gameworld Assets;@DayZ-Expansion-Core;@DayZ-Expansion-AI;@StaminaRevised;@AICFireplaceIndoor;@AmmoStacks;@Basic Ear Plugs;@BetterSuppressors;@Code Lock;@Coupled Mag Vanilla;@Forward Operator Gear;@AimSounds;@Inventory Move Sounds;@InventoryInCar;@JunkYardDog;@SearchInventory;@RaG_Immersive_Vehicles;@MagazineLoading;@Loot Barrel Transfer;@Nomadbackpack;@Mounts & Sights;@VPPAdminTools;@TerjePartyMod;@TerjeCore;@TerjeCompatibilityVPP;@TerjeSkills;@TerjeMedicine;@RaG_Immersive_Wells;@PvZmoD_Spawn_System;@LoftDModGR Clothes Pack;@GoreZ;@LoftD_old_size;@pvez test;@BoomLay's Craftables;@RaG_BaseItems;@Terje for FOG v2;@SimpleLootChests;@More Durable Weapons;@WindstridesClothingPack;@RUSForma_vehicles;@TerjeSleepingBagAttach;@TerjeStartScreen;@Utopia Animated Heli Crashs;@RaG_BaseBuilding;@No Build Zones;@Vanilla Suppressor Plus;@AI War Zones;@Harks Blood Plague;@DayZ-Dynamic-AI-Addon;@Zombie_Sound;@Realistic Display Quantity;@HP Crafter Workbench;@zHorde;@Tree Shake;@InediaTerjeCompatibility;@InediaInfectedAI;@Ammo Making;@Ammo Making;@Territory Plus;@FC_Fish_Equip;@CookZ;@TWOC_CombineItems;@GarbageSearch;@DayZ-Expansion-Market;@BLR_Carlock;"
::Sets title for terminal (DONT edit)
title %serverName% batch
::DayZServer location (DONT edit)
cd /D "%serverDirectory%"
:: makes the profile directory if it doesn't already exist
if not exist "%serverProfile%" ( 
mkdir %serverProfile% > nul
) 
echo (%time%) %serverName% started.
::Launch parameters (edit end: -config=|-port=|-profiles=|-doLogs|-adminLog|-netLog|-freezeCheck|-filePatching|-BEpath=|-cpuCount=)
start "DayZ Server" /min DayZServer_x64.exe -config=%serverConfig% -port=%serverPort% -profiles=%serverProfile% -BEpath=battleye %modList% -cpuCount=%serverCPU% -dologs -adminlog -netlog -freezecheck

::Time in seconds before kill server process (14400 = 4 hours)
timeout 14400
taskkill /im DayZServer_x64.exe /F
::Time in seconds to wait before..
timeout 10
::Go back to the top and repeat the whole cycle again
goto start