class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Tags {
				class UNICAN {
					displayName="UNICAN";
					condition="('TOMH_UNICAN' in (items player))";
					exceptions[]={};
					icon = "\UNICAN\addons\spray\UNICAN.paa";
					#include "mastercan.hpp"
				};
				class TOMH_UNICAN_Lite_Alpha {
					displayName = "Alpha";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\AOOO.paa"}; 
					icon = "\UNICAN\addons\spray\AOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Bravo {
					displayName = "Bravo";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\BOOO.paa"}; 
					icon = "\UNICAN\addons\spray\BOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Rearm {
					displayName = "Rearm";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\OROO.paa"}; 
					icon = "\UNICAN\addons\spray\OROO.paa";  
				};
				class TOMH_UNICAN_Lite_Refuel {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\OORO.paa"}; 
					icon = "\UNICAN\addons\spray\OORO.paa";  
				};
				class TOMH_UNICAN_Lite_Repair {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\OOOR.paa"}; 
					icon = "\UNICAN\addons\spray\OOOR.paa";  
				};
				class TOMH_UNICAN_Lite_RedCross {
					displayName = "Red Cross";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"\UNICAN\addons\spray\RedCross.paa"}; 
					icon = "\UNICAN\addons\spray\RedCross.paa";  
				};
			};
		};
	};
	class ACE_Item_SpraypaitnBlack;
	class TOMH_Item_UNICAN:ACE_Item_SpraypaitnBlack {
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
