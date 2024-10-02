class CfgWeapons {
	class ACE_SpraypaintBlack;
	class CBA_MiscItem_ItemInfo;
	class TOMH_UNICAN: ACE_SpraypaintBlack {
        author = "TomH";
        displayname = "UNICAN";
        descriptionShort = "Used to access all sprays";
        picture = QPATHTOF(data\unican.paa);
		scope = 2;
		ace_tagging_textColor = "FFFFFFFE";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\unican_co.paa)};
    };
	class TOMH_UNICAN_Lite: TOMH_UNICAN {
        displayname = "UNICAN Lite";
        descriptionShort = "Simple version of the UNICAN";
    };
	class TOMH_Stencil_Medical: TOMH_UNICAN {
        displayname = "UNICAN Medical Stencil";
        descriptionShort = "Stencil for Medical marking";
		 class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
	class TOMH_Stencil_Eod: TOMH_Stencil_Medical {
        displayname = "UNICAN EOD Stencil";
        descriptionShort = "Stencil for EOD marking";
    };
};