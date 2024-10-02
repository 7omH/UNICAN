#define MTAG(a1,a2) \
	class DOUBLES(a1,a2) { \
		displayName = #a2; \
		requiredItem = #a1; \
		textures[] = {QPATHTOF(spray\a2.paa)}; \
		icon = QPATHTOF(spray\a2.paa); \
	}
// Macro TAG Creation, a1 Item needed, a2 spray name

class ACE_Tags {
	MTAG(TOMH_UNICAN_Lite,AOOO);
	MTAG(TOMH_UNICAN_Lite,BOOO);
	MTAG(TOMH_UNICAN_Lite,OROO);
	MTAG(TOMH_UNICAN_Lite,OORO);
	MTAG(TOMH_UNICAN_Lite,OOOR);
	MTAG(TOMH_UNICAN_Lite,RedCross);

	MTAG(TOMH_Stencil_Medical,RedCross);
	MTAG(TOMH_Stencil_Medical,RedDiamond);
	MTAG(TOMH_Stencil_Medical,CAT1);
	MTAG(TOMH_Stencil_Medical,CAT2);
	MTAG(TOMH_Stencil_Medical,CAT3);
	MTAG(TOMH_Stencil_Medical,CAT4);
	MTAG(TOMH_Stencil_Medical,CCP);
	
	MTAG(TOMH_Stencil_Eod,Danger);
	MTAG(TOMH_Stencil_Eod,Clear);
	MTAG(TOMH_Stencil_Eod,DoubleLane);
	MTAG(TOMH_Stencil_Eod,arrow5m);
	MTAG(TOMH_Stencil_Eod,arrow10m);
	MTAG(TOMH_Stencil_Eod,arrow20m);
};