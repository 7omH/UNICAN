#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "UNICAN";
		units[] = {};
		weapons[] = {"TOMH_UNICAN"};
		requiredAddons[] = {"cba_main","ace_tagging","ace_main","ace_interaction"};
		author = "TomH";
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Tags.hpp"