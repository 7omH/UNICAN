#define TAG(Name) class TOMH_##Name##_Tag { \
	displayName = Name; \
	condition = true; \
	statement = [_player, 'UNICAN\addons\spray\##Name##.paa'] call ace_tagging_fnc_tag; \
	icon = UNICAN\addons\spray\##Name##.paa; \
}
class TOMH_UNICAN_A {
	displayName = "A Station";
	condition = true;
	TAG(AOOO);
	TAG(AROO);
	TAG(AORO);
	TAG(AOOR);
	TAG(ARRO);
	TAG(AORR);
	TAG(AROR);
	TAG(ARRR);
};
class TOMH_UNICAN_B {
	displayName = "B Station";
	condition = true;
	TAG(BOOO);
	TAG(BROO);
	TAG(BORO);
	TAG(BOOR);
	TAG(BRRO);
	TAG(BORR);
	TAG(BROR);
	TAG(BRRR);
};
class TOMH_UNICAN_C {
	displayName = "C Station";
	condition = true;
	TAG(COOO);
	TAG(CROO);
	TAG(CORO);
	TAG(COOR);
	TAG(CRRO);
	TAG(CORR);
	TAG(CROR);
	TAG(CRRR);
};
class TOMH_UNICAN_D {
	displayName = "D Station";
	condition = true;
	TAG(DOOO);
	TAG(DROO);
	TAG(DORO);
	TAG(DOOR);
	TAG(DRRO);
	TAG(DORR);
	TAG(DROR);
	TAG(DRRR);
};
class TOMH_UNICAN_E {
	displayName = "E Station";
	condition = true;
	TAG(EOOO);
	TAG(EROO);
	TAG(EORO);
	TAG(EOOR);
	TAG(ERRO);
	TAG(EORR);
	TAG(EROR);
	TAG(ERRR);
};
class TOMH_UNICAN_F {
	displayName = "F Station";
	condition = true;
	TAG(FOOO);
	TAG(FROO);
	TAG(FORO);
	TAG(FOOR);
	TAG(FRRO);
	TAG(FORR);
	TAG(FROR);
	TAG(FRRR);
};
class TOMH_UNICAN_Medical {
	displayName = "Medical";
	condition = true;
	TAG(RedCross);
	TAG(RedDiamond);
	TAG(CAT-1);
	TAG(CAT-2);
	TAG(CAT-3);
	TAG(CAT-4);
	TAG(CCP);
};
class TOMH_UNICAN_EOD {
	displayName = "EOD";
	condition = true;
	TAG(Danger);
	TAG(Clear);
	TAG(DoubleLane);
	TAG(5marrow);
	TAG(10marrow);
	TAG(20marrow);
};
class TOMH_UNICAN_Misc {
	displayName = "Misc.";
	condition = true;
	TAG(UNILOGO);
	TAG(TheSquido);
	TAG(Kevin);
	TAG(UNICOIN);
};
