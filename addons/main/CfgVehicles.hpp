class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class UNICAN {
				displayName="UNICAN";
				condition="('TOMH_UNICAN' in (items player))";
				exceptions[]={};
				icon = QPATHTOF(data\unican.paa);
				#include "mastercan.hpp"
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
	
};
