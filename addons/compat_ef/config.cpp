class CfgPatches {
    class ADDON {
        name = "UNITAF Framework EF Compat;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"EF_Weapons", "EF_Marines"};
		skipWhenMissingDependencies = 1;
	};
};
class CfgWeapons {
	class arifle_MX_Base_F;
	class ef_arifle_mxar: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
};
