class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Tags {
				class UNICAN {
					displayName="UNICAN";
					condition="('TOMH_UNICAN' in (items player))";
					exceptions[]={};
					icon = "\unican_main\data\unican.paa";
					#include "mastercan.hpp"
				};
				class TOMH_UNICAN_Lite_Alpha {
					displayName = "Alpha";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\AOOO.paa"}; 
					icon = "\unican_main\spray\AOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Bravo {
					displayName = "Bravo";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\BOOO.paa"}; 
					icon = "\unican_main\spray\BOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Rearm {
					displayName = "Rearm";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\OROO.paa"}; 
					icon = "\unican_main\spray\OROO.paa";  
				};
				class TOMH_UNICAN_Lite_Refuel {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\OORO.paa"}; 
					icon = "\unican_main\spray\OORO.paa";  
				};
				class TOMH_UNICAN_Lite_Repair {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\OOOR.paa"}; 
					icon = "\unican_main\spray\OOOR.paa";  
				};
				class TOMH_UNICAN_Lite_RedCross {
					displayName = "Red Cross";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\unican_main\spray\RedCross.paa"}; 
					icon = "\unican_main\spray\RedCross.paa";  
				};
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
	
};
