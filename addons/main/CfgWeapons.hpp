class CfgWeapons {
	class ACE_SpraypaintBlack;
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
};