#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "UNICAN";
		units[] = {"TOMH_VRSIdent_Small","TOMH_VRSIdent_Big","TOMH_EODIdent_Small","TOMH_EODIdent_Big","TOMH_Item_UNICAN","TOMH_Item_UNICAN_Lite","TOMH_Item_UNICAN_Logi","TOMH_Item_Stencil_Medical","TOMH_Item_Stencil_Eod","TOMH_Item_Stencil_Mst0"};
		weapons[] = {};
		requiredAddons[] = {"cba_main","ace_tagging","ace_main","ace_interaction"};
		author = "TomH";
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_UNICAN_Boards {
		displayName = "UNICAN Billboards";
	};
	class EdSubcat_UNICAN_Items	{
		displayName = "UNICAN Items";
	};
};
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Tags.hpp"
