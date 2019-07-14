class CfgPatches
{
	class bc036_Invisible_Headgear
	{
		units[]={};
		weapons[]=
		{
			"bc036_invisible_assassin",
			"bc036_invisible_combat",
			"bc036_invisible_crew",
			"bc036_invisible_defender",
			"bc036_invisible_enhanced_combat",
			"bc036_invisible_heli_crew",
			"bc036_invisible_heli_pilot",
			"bc036_invisible_light_combat",
			"bc036_invisible_pilot",
			"bc036_invisible_protector",
			"bc036_invisible_special_purpose",
			"bc036_invisible_stealth_combat"
		};
		author="bc036";
		icon="\bc036s_invisible_headgear\Data\bc036.paa";
		requiredAddons[]=
		{
			"A3_Weapons_F";
			"A3_Characters_F_Exp_Headgear";
		};
		version = "v1.0";
		requiredVersion=0.1;
	};
};
#include "invisible_headgear.hpp"