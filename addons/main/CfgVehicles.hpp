class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Tags {
				class UNICAN {
					displayName="UNICAN";
					condition="('TOMH_UNICAN' in (items player))";
					exceptions[]={};
					icon = "spray\UNICAN.paa";
					#include "mastercan.hpp"
				};
				class TOMH_UNICAN_Lite_Alpha {
					displayName = "Alpha";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\AOOO.paa"}; 
					icon = "spray\AOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Bravo {
					displayName = "Bravo";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\BOOO.paa"}; 
					icon = "spray\BOOO.paa";  
				};
				class TOMH_UNICAN_Lite_Rearm {
					displayName = "Rearm";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\OROO.paa"}; 
					icon = "spray\OROO.paa";  
				};
				class TOMH_UNICAN_Lite_Repair {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\OORO.paa"}; 
					icon = "spray\OORO.paa";  
				};
				class TOMH_UNICAN_Lite_Repair {
					displayName = "Repair";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\OOOR.paa"}; 
					icon = "spray\OOOR.paa";  
				};
				class TOMH_UNICAN_Lite_RedCross {
					displayName = "Red Cross";  
					requiredItem = "TOMH_UNICAN_Lite";  
					textures[] = {"spray\RedCross.paa"}; 
					icon = "spray\RedCross.paa";  
				};
			};
		};
	};
	class ACE_Item_SpraypaitnBlack;
	class TOMH_Item_UNICAN:ACE_Item_SpraypaitnBlack {
		author = "TomH";
		displayName = "UNICAN";
	};
	
};
