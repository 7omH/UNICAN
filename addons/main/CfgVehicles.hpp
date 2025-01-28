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
	class ACE_Item_SpraypaintBlack;
	class TOMH_Item_UNICAN:ACE_Item_SpraypaintBlack {
		author = "TomH";
		displayName = "UNICAN";
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
		displayName = "UNICAN Logi";
		class TransportItems {
			class _xx_Item {
				name = "TOMH_UNICAN_Logi";
				count = 1;
			};
		};
	};
	
};
