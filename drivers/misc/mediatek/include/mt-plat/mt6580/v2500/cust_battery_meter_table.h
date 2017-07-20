#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-30,127476},
        {-25,96862},
        {-20,74354},
        {-15,57626},
        {-10,45068},
        { -5,35548},
        {  0,28267},
        {  5,22650},
        { 10,18280},
        { 15,14855},
        { 20,12151},
        { 25,10000},
        { 30,8279},
        { 35,6892},
        { 40,5768},
        { 45,4852},
        { 50,4101},
        { 55,3483},
        { 60,2970},
        { 65,2544},
        { 70,2188},
        { 75,1889},
        { 80,1637}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
{0  , 4167},
{2  , 4144},
{4  , 4120},
{6  , 4100},
{7  , 4082},
{9  , 4066},
{11 , 4049},
{13 , 4031},
{15 , 4014},
{17 , 3999},
{18 , 3984},
{20 , 3970},
{22 , 3957},
{24 , 3944},
{26 , 3930},
{28 , 3916},
{29 , 3904},
{31 , 3891},
{33 , 3879},
{35 , 3867},
{37 , 3856},
{39 , 3846},
{40 , 3836},
{42 , 3826},
{44 , 3818},
{46 , 3810},
{48 , 3803},
{50 , 3796},
{51 , 3791},
{53 , 3786},
{55 , 3781},
{57 , 3776},
{59 , 3771},
{61 , 3766},
{62 , 3761},
{64 , 3755},
{66 , 3748},
{68 , 3741},
{70 , 3733},
{72 , 3724},
{73 , 3714},
{75 , 3704},
{77 , 3693},
{79 , 3680},
{81 , 3667},
{83 , 3653},
{84 , 3640},
{86 , 3626},
{88 , 3614},
{89 , 3608},
{90 , 3604},
{91 , 3600},
{92 , 3597},
{92 , 3595},
{93 , 3592},
{94 , 3590},
{94 , 3588},
{95 , 3585},
{95 , 3583},
{96 , 3582},
{96 , 3580},
{96 , 3578},
{97 , 3577},
{97 , 3575},
{97 , 3574},
{98 , 3573},
{98 , 3571},
{98 , 3570},
{99 , 3568},
{99 , 3567},
{99 , 3566},
{99 , 3565},
{99 , 3564},
{100, 3562},
{100, 3562},
{100, 3400} 
};      

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{  
 {0  , 4163},
 {2  , 4139},
 {3  , 4119},
 {5  , 4101},
 {7  , 4084},
 {9  , 4068},
 {10 , 4052},
 {12 , 4036},
 {14 , 4020},
 {16 , 4005},
 {17 , 3991},
 {19 , 3978},
 {21 , 3966},
 {23 , 3953},
 {24 , 3941},
 {26 , 3929},
 {28 , 3917},
 {30 , 3905},
 {31 , 3892},
 {33 , 3880},
 {35 , 3868},
 {37 , 3856},
 {38 , 3845},
 {40 , 3834},
 {42 , 3825},
 {44 , 3816},
 {45 , 3809},
 {47 , 3802},
 {49 , 3796},
 {51 , 3791},
 {52 , 3788},
 {54 , 3784},
 {56 , 3782},
 {58 , 3779},
 {59 , 3776},
 {61 , 3773},
 {63 , 3769},
 {65 , 3767},
 {66 , 3765},
 {68 , 3760},
 {70 , 3755},
 {72 , 3748},
 {73 , 3740},
 {75 , 3731},
 {77 , 3721},
 {79 , 3709},
 {80 , 3694},
 {82 , 3680},
 {84 , 3663},
 {85 , 3646},
 {87 , 3628},
 {89 , 3611},
 {91 , 3593},
 {92 , 3575},
 {94 , 3557},
 {96 , 3539},
 {97 , 3523},
 {98 , 3515},
 {98 , 3511},
 {99 , 3508},
 {99 , 3505},
 {99 , 3504},
 {100, 3501},
 {100, 3500},
 {100, 3498},
 {100, 3497},
 {100, 3495},
 {100, 3493},
 {100, 3492},
 {100, 3490},
 {100, 3489},
 {100, 3488},
 {100, 3486},
 {100, 3485},
 {100, 3483},
 {100, 3400} 
};           

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = 
{
{0   , 4179},
{2   , 4155},
{3   , 4137},
{5   , 4119},
{7   , 4102},
{8   , 4086},
{10  , 4071},
{12  , 4056},
{13  , 4041},
{15  , 4026},
{17  , 4012},
{19  , 3999},
{20  , 3986},
{22  , 3974},
{24  , 3962},
{25  , 3951},
{27  , 3940},
{29  , 3929},
{30  , 3919},
{32  , 3909},
{34  , 3899},
{35  , 3889},
{37  , 3879},
{39  , 3867},
{40  , 3856},
{42  , 3843},
{44  , 3831},
{45  , 3820},
{47  , 3811},
{49  , 3804},
{51  , 3798},
{52  , 3792},
{54  , 3788},
{56  , 3784},
{57  , 3781},
{59  , 3779},
{61  , 3777},
{62  , 3776},
{64  , 3775},
{66  , 3774},
{67  , 3773},
{69  , 3772},
{71  , 3771},
{72  , 3769},
{74  , 3766},
{76  , 3761},
{77  , 3754},
{79  , 3747},
{81  , 3739},
{82  , 3731},
{84  , 3722},
{86  , 3711},
{88  , 3698},
{89  , 3683},
{91  , 3665},
{93  , 3643},
{94  , 3615},
{96  , 3587},
{98  , 3563},
{99  , 3541},
{100 , 3513},
{100 , 3453},
{100 , 3366},
{100 , 3314},
{100 , 3298},
{100 , 3290},
{100 , 3286},
{100 , 3284},
{100 , 3282},
{100 , 3281},
{100 , 3280},
{100 , 3279},
{100 , 3279},
{100 , 3277},
{100 , 3277},
{100 , 3277} 
};     

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{
{0  , 4176},
{2  , 4150},
{3  , 4130},
{5  , 4111},
{7  , 4094},
{8  , 4078},
{10 , 4063},
{12 , 4048},
{13 , 4033},
{15 , 4019},
{17 , 4006},
{18 , 3993},
{20 , 3980},
{22 , 3968},
{23 , 3956},
{25 , 3945},
{27 , 3934},
{28 , 3923},
{30 , 3913},
{32 , 3904},
{34 , 3894},
{35 , 3885},
{37 , 3876},
{39 , 3867},
{40 , 3858},
{42 , 3847},
{44 , 3834},
{45 , 3820},
{47 , 3809},
{49 , 3801},
{50 , 3795},
{52 , 3789},
{54 , 3785},
{55 , 3780},
{57 , 3777},
{59 , 3773},
{60 , 3772},
{62 , 3771},
{64 , 3769},
{65 , 3767},
{67 , 3766},
{69 , 3765},
{70 , 3764},
{72 , 3763},
{74 , 3760},
{75 , 3753},
{77 , 3743},
{79 , 3735},
{80 , 3728},
{82 , 3720},
{84 , 3712},
{85 , 3702},
{87 , 3691},
{89 , 3678},
{90 , 3663},
{92 , 3645},
{94 , 3621},
{95 , 3593},
{97 , 3568},
{99 , 3546},
{100, 3522},
{100, 3474},
{100, 3395},
{100, 3280},
{100, 3269},
{100, 3265},
{100, 3263},
{100, 3262},
{100, 3261},
{100, 3261},
{100, 3260},
{100, 3260},
{100, 3260},
{100, 3260},
{100, 3260},
{100, 3260} 
};           

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0}, 
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0}
};    

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] =
{
{235  , 4167}, 
{235  , 4144}, 
{875  , 4120}, 
{880  , 4100}, 
{878  , 4082}, 
{875  , 4066}, 
{868  , 4049}, 
{863  , 4031}, 
{858  , 4014}, 
{858  , 3999}, 
{858  , 3984}, 
{853  , 3970}, 
{855  , 3957}, 
{853  , 3944}, 
{848  , 3930}, 
{845  , 3916}, 
{845  , 3904}, 
{843  , 3891}, 
{843  , 3879}, 
{843  , 3867}, 
{843  , 3856}, 
{845  , 3846}, 
{848  , 3836}, 
{848  , 3826}, 
{855  , 3818}, 
{858  , 3810}, 
{863  , 3803}, 
{868  , 3796}, 
{875  , 3791}, 
{883  , 3786}, 
{890  , 3781}, 
{895  , 3776}, 
{903  , 3771}, 
{908  , 3766}, 
{918  , 3761}, 
{923  , 3755}, 
{928  , 3748}, 
{935  , 3741}, 
{940  , 3733}, 
{945  , 3724}, 
{948  , 3714}, 
{953  , 3704}, 
{963  , 3693}, 
{963  , 3680}, 
{970  , 3667}, 
{983  , 3653}, 
{1000 , 3640}, 
{1020 , 3626}, 
{1035 , 3614}, 
{1020 , 3608}, 
{1010 , 3604}, 
{1000 , 3600}, 
{993  , 3597}, 
{988  , 3595}, 
{983  , 3592}, 
{978  , 3590}, 
{973  , 3588}, 
{965  , 3585}, 
{958  , 3583}, 
{960  , 3582}, 
{953  , 3580}, 
{948  , 3578}, 
{943  , 3577}, 
{940  , 3575}, 
{935  , 3574}, 
{935  , 3573}, 
{928  , 3571}, 
{928  , 3570}, 
{923  , 3568}, 
{920  , 3567}, 
{918  , 3566}, 
{913  , 3565}, 
{915  , 3564}, 
{908  , 3562}, 
{910  , 3562}, 
{503  , 3400}  
};      

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = 
{
{430 , 4163},
{430 , 4139},
{430 , 4119},
{430 , 4101},
{430 , 4084},
{428 , 4068},
{428 , 4052},
{426 , 4036},
{424 , 4020},
{424 , 4005},
{424 , 3991},
{426 , 3978},
{428 , 3966},
{426 , 3953},
{426 , 3941},
{426 , 3929},
{424 , 3917},
{424 , 3905},
{420 , 3892},
{418 , 3880},
{414 , 3868},
{414 , 3856},
{410 , 3845},
{408 , 3834},
{408 , 3825},
{408 , 3816},
{410 , 3809},
{412 , 3802},
{414 , 3796},
{418 , 3791},
{424 , 3788},
{428 , 3784},
{432 , 3782},
{438 , 3779},
{442 , 3776},
{446 , 3773},
{448 , 3769},
{452 , 3767},
{454 , 3765},
{460 , 3760},
{458 , 3755},
{458 , 3748},
{458 , 3740},
{458 , 3731},
{454 , 3721},
{448 , 3709},
{448 , 3694},
{442 , 3680},
{440 , 3663},
{396 , 3646},
{400 , 3628},
{409 , 3611},
{421 , 3593},
{443 , 3575},
{486 , 3557},
{628 , 3539},
{632 , 3523},
{622 , 3515},
{616 , 3511},
{610 , 3508},
{610 , 3505},
{604 , 3504},
{602 , 3501},
{598 , 3500},
{596 , 3498},
{592 , 3497},
{590 , 3495},
{586 , 3493},
{580 , 3492},
{584 , 3490},
{580 , 3489},
{574 , 3488},
{574 , 3486},
{566 , 3485},
{566 , 3483},
{402 , 3400}  
};     

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = 
{
{125 , 4179}, 
{125 , 4155}, 
{126 , 4137}, 
{126 , 4119}, 
{126 , 4102}, 
{128 , 4086}, 
{130 , 4071}, 
{131 , 4056}, 
{133 , 4041}, 
{133 , 4026}, 
{133 , 4012}, 
{134 , 3999}, 
{134 , 3986}, 
{139 , 3974}, 
{141 , 3962}, 
{142 , 3951}, 
{146 , 3940}, 
{147 , 3929}, 
{150 , 3919}, 
{154 , 3909}, 
{154 , 3899}, 
{155 , 3889}, 
{157 , 3879}, 
{154 , 3867}, 
{150 , 3856}, 
{142 , 3843}, 
{139 , 3831}, 
{134 , 3820}, 
{131 , 3811}, 
{131 , 3804}, 
{133 , 3798}, 
{133 , 3792}, 
{134 , 3788}, 
{136 , 3784}, 
{139 , 3781}, 
{141 , 3779}, 
{139 , 3777}, 
{142 , 3776}, 
{146 , 3775}, 
{147 , 3774}, 
{147 , 3773}, 
{149 , 3772}, 
{149 , 3771}, 
{149 , 3769}, 
{147 , 3766}, 
{147 , 3761}, 
{149 , 3754}, 
{149 , 3747}, 
{152 , 3739}, 
{155 , 3731}, 
{127 , 3722}, 
{129 , 3711}, 
{134 , 3698}, 
{137 , 3683}, 
{133 , 3665}, 
{125 , 3643}, 
{118 , 3615}, 
{146 , 3587}, 
{154 , 3563}, 
{163 , 3541}, 
{163 , 3513}, 
{182 , 3453}, 
{184 , 3366}, 
{158 , 3314}, 
{147 , 3298}, 
{139 , 3290}, 
{136 , 3286}, 
{131 , 3284}, 
{131 , 3282}, 
{130 , 3281}, 
{130 , 3280}, 
{128 , 3279}, 
{128 , 3279}, 
{126 , 3277}, 
{125 , 3277}, 
{126 , 3277}      
}; 

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = 
{
{112 ,  4176},
{112 ,  4150},
{101 ,  4130},
{99  ,  4111},
{101 ,  4094},
{101 ,  4078},
{102 ,  4063},
{102 ,  4048},
{102 ,  4033},
{104 ,  4019},
{106 ,  4006},
{106 ,  3993},
{107 ,  3980},
{109 ,  3968},
{109 ,  3956},
{110 ,  3945},
{112 ,  3934},
{112 ,  3923},
{114 ,  3913},
{117 ,  3904},
{118 ,  3894},
{120 ,  3885},
{123 ,  3876},
{125 ,  3867},
{125 ,  3858},
{123 ,  3847},
{118 ,  3834},
{110 ,  3820},
{107 ,  3809},
{106 ,  3801},
{107 ,  3795},
{106 ,  3789},
{107 ,  3785},
{107 ,  3780},
{109 ,  3777},
{109 ,  3773},
{110 ,  3772},
{112 ,  3771},
{112 ,  3769},
{115 ,  3767},
{117 ,  3766},
{118 ,  3765},
{120 ,  3764},
{122 ,  3763},
{117 ,  3760},
{114 ,  3753},
{115 ,  3743},
{115 ,  3735},
{117 ,  3728},
{118 ,  3720},
{96  ,  3712},
{97  ,  3702},
{100 ,  3691},
{102 ,  3678},
{104 ,  3663},
{100 ,  3645},
{117 ,  3621},
{115 ,  3593},
{115 ,  3568},
{118 ,  3546},
{120 ,  3522},
{123 ,  3474},
{128 ,  3395},
{112 ,  3280},
{106 ,  3269},
{102 ,  3265},
{101 ,  3263},
{101 ,  3262},
{99  ,  3261},
{99  ,  3261},
{98  ,  3260},
{96  ,  3260},
{96  ,  3260},
{96  ,  3260},
{96  ,  3260},
{96  ,  3260}      
}; 

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = 
{
 {0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0}, 
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0},
{0 ,0}
};    

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

