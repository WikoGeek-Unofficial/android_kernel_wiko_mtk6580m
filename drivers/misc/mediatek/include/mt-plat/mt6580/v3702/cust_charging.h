#ifndef _CUST_BAT_H_
#define _CUST_BAT_H_

/* stop charging while in talking mode */
#define STOP_CHARGING_IN_TAKLING
#define TALKING_RECHARGE_VOLTAGE 3800
#define TALKING_SYNC_TIME		   60

/* Battery Temperature Protection */
#define MTK_TEMPERATURE_RECHARGE_SUPPORT
#define CHARGE_CURRENT_500MA   //trunk    
//#define CHARGE_CURRENT_700MA  // IND
//#define CHARGE_CURRENT_1000MA   // WIKO
#if defined(CONFIG_PROJECT_V3702_MMX_IN)
#define MAX_CHARGE_TEMPERATURE  59
#define MAX_CHARGE_TEMPERATURE_MINUS_X_DEGREE	53//60
#else
#define MAX_CHARGE_TEMPERATURE  60
#define MAX_CHARGE_TEMPERATURE_MINUS_X_DEGREE	57//60
#endif
#define MIN_CHARGE_TEMPERATURE  -5
#define MIN_CHARGE_TEMPERATURE_PLUS_X_DEGREE	0
#define ERR_CHARGE_TEMPERATURE  0xFF

/* Linear Charging Threshold */
#define V_PRE2CC_THRES	 		3400	//mV
#define V_CC2TOPOFF_THRES		4250
#define RECHARGING_VOLTAGE      4110
#define CHARGING_FULL_CURRENT    150	//mA

/* Charging Current Setting */
//#define CONFIG_USB_IF 						   
#if defined(CONFIG_TINNO_QUICK_CHARGING)

/* High battery support */
#define HIGH_BATTERY_VOLTAGE_SUPPORT

#define USB_CHARGER_CURRENT_SUSPEND			0		// def CONFIG_USB_IF
#define USB_CHARGER_CURRENT_UNCONFIGURED	CHARGE_CURRENT_70_00_MA	
#define USB_CHARGER_CURRENT_CONFIGURED		CHARGE_CURRENT_450_00_MA	

#define USB_CHARGER_CURRENT					CHARGE_CURRENT_450_00_MA

#ifdef CHARGE_CURRENT_500MA

#define CHRGE_REAL_CURRENT
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_550_00_MA
#define MAX_AC_STANDARD_CHARGER_CURRENT		CHARGE_CURRENT_800_00_MA
#define MAX_AC_TINNO_1_5A_CHARGER_CURRENT	CHARGE_CURRENT_800_00_MA
#define MIN_AC_CHARGER_CURRENT				CHARGE_CURRENT_450_00_MA 

#define  CHRGE_REAL_CURRENT_NON_STD
#define TINNO_NON_STD_AC_CHARGER_CURRENT	CHARGE_CURRENT_800_00_MA



#elif defined (CHARGE_CURRENT_700MA)
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_650_00_MA
#else   // CHARGE_CURRENT_1000MA
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_450_00_MA
#endif

#define NON_STD_AC_CHARGER_CURRENT			CHARGE_CURRENT_550_00_MA
#define CHARGING_HOST_CHARGER_CURRENT       CHARGE_CURRENT_550_00_MA
#define APPLE_0_5A_CHARGER_CURRENT          CHARGE_CURRENT_500_00_MA
#define APPLE_1_0A_CHARGER_CURRENT          CHARGE_CURRENT_650_00_MA
#define APPLE_2_1A_CHARGER_CURRENT          CHARGE_CURRENT_650_00_MA
#ifdef CHARGE_CURRENT_500MA
#define TINNO_1_5A_CHARGER_CURRENT		    CHARGE_CURRENT_800_00_MA 
#elif defined (CHARGE_CURRENT_700MA)
#define TINNO_1_5A_CHARGER_CURRENT		    CHARGE_CURRENT_650_00_MA 
#else //CHARGE_CURRENT_1000MA
#define TINNO_1_5A_CHARGER_CURRENT		    CHARGE_CURRENT_650_00_MA 
#endif

#ifdef CHARGE_CURRENT_500MA
#define JEITA_TEMP_POS_45_TO_POS_60_CC_CURRENT	CHARGE_CURRENT_550_00_MA	
#define JEITA_TEMP_POS_10_TO_POS_45_CC_CURRENT	TINNO_1_5A_CHARGER_CURRENT 
#define JEITA_TEMP_POS_0_TO_POS_10_CC_CURRENT	CHARGE_CURRENT_450_00_MA
#elif defined (CHARGE_CURRENT_700MA)
#define JEITA_TEMP_POS_45_TO_POS_60_CC_CURRENT	CHARGE_CURRENT_550_00_MA	
#define JEITA_TEMP_POS_10_TO_POS_45_CC_CURRENT	TINNO_1_5A_CHARGER_CURRENT
#define JEITA_TEMP_POS_0_TO_POS_10_CC_CURRENT	CHARGE_CURRENT_450_00_MA 
#else //CHARGE_CURRENT_1000MA
#define JEITA_TEMP_POS_45_TO_POS_60_CC_CURRENT	CHARGE_CURRENT_450_00_MA	
#define JEITA_TEMP_POS_10_TO_POS_45_CC_CURRENT	TINNO_1_5A_CHARGER_CURRENT 
#define JEITA_TEMP_POS_0_TO_POS_10_CC_CURRENT	CHARGE_CURRENT_450_00_MA
#endif



#define V_CHARGER_MAX_NOTIFY  6000

#else
//#define HIGH_BATTERY_VOLTAGE_SUPPORT
#define USB_CHARGER_CURRENT_SUSPEND			0		// def CONFIG_USB_IF
#define USB_CHARGER_CURRENT_UNCONFIGURED	CHARGE_CURRENT_70_00_MA	// 70mA
#define USB_CHARGER_CURRENT_CONFIGURED		CHARGE_CURRENT_500_00_MA	// 500mA

#define USB_CHARGER_CURRENT					CHARGE_CURRENT_500_00_MA	//500mA
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_450_00_MA
//#define AC_CHARGER_CURRENT					CHARGE_CURRENT_350_00_MA
#define NON_STD_AC_CHARGER_CURRENT			CHARGE_CURRENT_500_00_MA
#define CHARGING_HOST_CHARGER_CURRENT       CHARGE_CURRENT_650_00_MA
#define APPLE_0_5A_CHARGER_CURRENT          CHARGE_CURRENT_500_00_MA
#define APPLE_1_0A_CHARGER_CURRENT          CHARGE_CURRENT_650_00_MA
#define APPLE_2_1A_CHARGER_CURRENT          CHARGE_CURRENT_700_00_MA

#endif

/* Precise Tunning */
#define BATTERY_AVERAGE_DATA_NUMBER	3	
#define BATTERY_AVERAGE_SIZE 	15

/* charger error check */
//#define BAT_LOW_TEMP_PROTECT_ENABLE         // stop charging if temp < MIN_CHARGE_TEMPERATURE
#define V_CHARGER_ENABLE 0				// 1:ON , 0:OFF	
#define V_CHARGER_MAX 6500				// 6.5 V
#define V_CHARGER_MIN 4400				// 4.4 V

/* Tracking TIME */
#define ONEHUNDRED_PERCENT_TRACKING_TIME	10	// 10 second
#define NPERCENT_TRACKING_TIME	   			20	// 20 second
#define SYNC_TO_REAL_TRACKING_TIME  		60	// 60 second
#define V_0PERCENT_TRACKING							3450 //3450mV

/* Battery Notify */
#define BATTERY_NOTIFY_CASE_0001_VCHARGER
#define BATTERY_NOTIFY_CASE_0002_VBATTEMP
//#define BATTERY_NOTIFY_CASE_0003_ICHARGING
//#define BATTERY_NOTIFY_CASE_0004_VBAT
//#define BATTERY_NOTIFY_CASE_0005_TOTAL_CHARGINGTIME

/* JEITA parameter */
//#define MTK_JEITA_STANDARD_SUPPORT
#define CUST_SOC_JEITA_SYNC_TIME 30
#define JEITA_RECHARGE_VOLTAGE  4300	// for linear charging
#ifdef HIGH_BATTERY_VOLTAGE_SUPPORT
#define JEITA_TEMP_ABOVE_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_000000_V
#define JEITA_TEMP_POS_45_TO_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_000000_V
#define JEITA_TEMP_POS_10_TO_POS_45_CV_VOLTAGE		BATTERY_VOLT_04_350000_V
#define JEITA_TEMP_POS_0_TO_POS_10_CV_VOLTAGE		BATTERY_VOLT_04_350000_V
#define JEITA_TEMP_NEG_10_TO_POS_0_CV_VOLTAGE		BATTERY_VOLT_03_900000_V
#define JEITA_TEMP_BELOW_NEG_10_CV_VOLTAGE		BATTERY_VOLT_03_900000_V
#else
#define JEITA_TEMP_ABOVE_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_000000_V
#define JEITA_TEMP_POS_45_TO_POS_60_CV_VOLTAGE	BATTERY_VOLT_04_000000_V
#define JEITA_TEMP_POS_10_TO_POS_45_CV_VOLTAGE	BATTERY_VOLT_04_200000_V
#define JEITA_TEMP_POS_0_TO_POS_10_CV_VOLTAGE	BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_NEG_10_TO_POS_0_CV_VOLTAGE	BATTERY_VOLT_03_900000_V
#define JEITA_TEMP_BELOW_NEG_10_CV_VOLTAGE		BATTERY_VOLT_03_900000_V
#endif
/* For JEITA Linear Charging only */
#define JEITA_NEG_10_TO_POS_0_FULL_CURRENT  120	//mA 
#define JEITA_TEMP_POS_45_TO_POS_60_RECHARGE_VOLTAGE  4100
#define JEITA_TEMP_POS_10_TO_POS_45_RECHARGE_VOLTAGE  4300
#define JEITA_TEMP_POS_0_TO_POS_10_RECHARGE_VOLTAGE   4200
#define JEITA_TEMP_NEG_10_TO_POS_0_RECHARGE_VOLTAGE   3800
#define JEITA_TEMP_POS_45_TO_POS_60_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_POS_10_TO_POS_45_CC2TOPOFF_THRESHOLD	4250
#define JEITA_TEMP_POS_0_TO_POS_10_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_NEG_10_TO_POS_0_CC2TOPOFF_THRESHOLD	3850


/* High battery support */
//#define HIGH_BATTERY_VOLTAGE_SUPPORT

/* Disable Battery check for HQA */
#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define CONFIG_DIS_CHECK_BATTERY
#endif

#ifdef CONFIG_MTK_FAN5405_SUPPORT
#define FAN5405_BUSNUM 1
#endif

#endif /* _CUST_BAT_H_ */ 
