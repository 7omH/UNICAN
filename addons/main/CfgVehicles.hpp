#define STAT(Name) [_player, 'PATHTOF(spray\Name.paa)'] call ace_tagging_fnc_tag
#define TAG(Name) \
	class TOMH_##Name##_Tag { \
		displayName = #Name; \
		condition = "true"; \
		statement = #STAT(Name); \
		icon = QPATHTOF(spray\Name.paa); \
	}
// Macro TAG Creation, used for master and logi cans


class CfgVehicles {
	// Ace Interaction for UNI and LOGI Cans
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class UNICAN_mastercan {
				displayName="UNICAN";
				condition="('TOMH_UNICAN' in (items player))";
				exceptions[]={};
				icon = QPATHTOF(data\unican.paa);
				#include "mastercan.hpp"
			};
			class UNICAN_logican {
				displayName="LOGICAN";
				condition="('TOMH_UNICAN_Logi' in (items player))";
				exceptions[]={};
				icon = QPATHTOF(data\unican.paa);
				#include "logican.hpp"
			};
		};
	};
	//Billboards
	class Land_Billboard_02_blank_F;
	class Land_Billboard_03_blank_F;
	class TOMH_VRSIdent_Small : Land_Billboard_02_blank_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "VRS Identification (Small)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_UNICAN_Boards";
		hiddenSelectionsTextures[] = {QPATHTOF(board\VRSIdent.paa)};
	};
	class TOMH_VRSIdent_Big : Land_Billboard_03_blank_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "VRS Identification (Big)";
		editorCategory = "EdCat_Signs";
		editorSubcategory = "EdSubcat_UNICAN_Boards";
		hiddenSelectionsTextures[] = {QPATHTOF(board\VRSIdent.paa)};
	};
	
	// Editor items
	class ACE_Item_SpraypaintBlack;
	class TOMH_Item_UNICAN:ACE_Item_SpraypaintBlack {
		author = "TomH";
		displayName = "UNICAN";
		editorSubcategory = "EdSubcat_UNICAN_Items";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_UNICAN";
				count = 1;
			};
		};
	};
	class TOMH_Item_UNICAN_Lite:TOMH_Item_UNICAN {
		displayName = "UNICAN Lite";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_UNICAN_Lite";
				count = 1;
			};
		};
	};
	class TOMH_Item_UNICAN_Logi:TOMH_Item_UNICAN {
		displayName = "LOGICAN";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_UNICAN_Logi";
				count = 1;
			};
		};
	};
	class TOMH_Item_Stencil_Medical:TOMH_Item_UNICAN {
		displayName = "UNICAN Medical Stencil";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_Stencil_Medical";
				count = 1;
			};
		};
	};
	class TOMH_Item_Stencil_Eod:TOMH_Item_UNICAN {
		displayName = "UNICAN EOD Stencil";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_Stencil_Eod";
				count = 1;
			};
		};
	};
	class TOMH_Item_Stencil_Mst0:TOMH_Item_UNICAN {
		displayName = "UNICAN MST Stencil n°0";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_Stencil_Mst0";
				count = 1;
			};
		};
	};
	
};
