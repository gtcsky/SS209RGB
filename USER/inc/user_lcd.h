/*
 * user_lcd.h
 *
 *  Created on: 2019年10月11日
 *      Author: Bough_004
 */

#ifndef SOURCE_INC_USER_LCD_H_
#define SOURCE_INC_USER_LCD_H_
#include	"const.h"
#include	"io_define.h"

#define	LCD_POWER_ON_CONST			20		//20*5=100ms
#define	DISPLAY_REVERSE				1

#define 	SIZE 							16
#define 	Max_Column						128
#define 	Max_Row						64
#define	Brightness						0xFF
#define 	X_WIDTH 						128
#define 	Y_WIDTH 						64
#define 	OLED_CMD  						0			//写命令
#define 	OLED_DATA 						1			//写数据
#define 	OLED_MODE 					0

#define	LCD_START_X					2

#define	ICON_Degree_ADDRESS			29+32//59+32
#define	ICON_Arrow_ADDRESS			30+32//60+32
#define	ICON_Colon_ADDRESS			31+32//61+32

#define	ICON_HUES_X					(ICON_BRIGHTNESS_X+4)
#define	ICON_HUES_Y					2
#define	ICON_HUES_ADDRESS			0
#define	Value_Hues_X					(ICON_HUES_X+20)

#define	ICON_RED_X						(ICON_BRIGHTNESS_X+4)
#define	ICON_RED_Y						2
#define	ICON_RED_ADDRESS				0
#define	Value_RED_X						(Value_Hues_X)

#define	ICON_GREEN_X					(ICON_BRIGHTNESS_X+4)
#define	ICON_GREEN_Y					4
#define	ICON_GREEN_ADDRESS			0
#define	Value_GREEN_X					(Value_Hues_X)

#define	ICON_BLUE_X					(ICON_BRIGHTNESS_X+4)
#define	ICON_BLUE_Y					6
#define	ICON_BLUE_ADDRESS				0
#define	Value_BLUE_X					(Value_Hues_X)

#define	Icon_Clock_X						ICON_HUES_X
#define	Icon_Clock_Y						0
#define	Icon_Clock_Table_Addr			10//30
#define	ValueOfClock_X					ICON_HUES_X+16+4


#define	ICON_Saturation_X				ICON_HUES_X
#define	ICON_Saturation_Y				6
#define	ICON_Saturation_ADDRESS		1
#define	Value_Saturation_X				Value_Hues_X

#define	ICON_BRIGHTNESS_X				(LCD_START_X+48)
#define	ICON_BRIGHTNESS_Y_3			3
#define	ICON_BRIGHTNESS_Y_4			4
#define	ICON_BRIGHTNESS_ADDRESS		2
#define	Value_Brightness_X				(Value_Hues_X)
#define	Value_Percent_Addr				25

#define	SCENE_POS_X					(ICON_BRIGHTNESS_X-24)
#define	SCENE_POS_Y					6

#define	SCENE_INDEX_POS_X				(ACTIVITY_NAME_X+48)
#define	SCENE_INDEX_POS_Y				0

#define	ICON_ColorTemp_X				ICON_BRIGHTNESS_X
#define	ICON_ColorTemp_Y				6
#define	ICON_ColorTemp_ADDRESS		3
#define	Value_ColorTemp_X				(Value_Hues_X)

#define	ICON_batt_X0					96
#define	ICON_batt_X0_systemOff			50
#define	ICON_batt_X1					ICON_batt_X0+16
#define	ICON_batt_X1_systemOff			ICON_batt_X0_systemOff+16
#define	ICON_batt_Y						0
#define	ICON_batt_Y_systemOff			4
#define	ICON_batt_lv0_Addr				11
#define	ICON_batt_lv1_Addr				13
#define	ICON_batt_lv2_Addr				15
#define	ICON_batt_lv3_Addr				17
#define	ICON_batt_lv4_Addr				19
#define	ICON_batt_lv5_Addr				21
#define	ICON_batt_lv6_Addr				23

#define	ICON_DC_Addr					26

#define	ICON_Hot_X						ICON_batt_X0
#define	ICON_Hot_X1					ICON_batt_X1
#define	ICON_Hot_Y						ICON_batt_Y
#define	ICON_Hot_Addr					28

#define	ICON_Percent_X					ICON_HUES_X
#define	ICON_Percent_Y					0

#define	ACTIVITY_NAME_X				LCD_START_X+3
#define	ACTIVITY_NAME_Y				0

#define	ICON_charge_X0					ICON_batt_X0-32
#define	ICON_charge_X1					ICON_charge_X0+16
#define	ICON_charge_Y					ICON_batt_Y
#define	ICON_charge_TableAddr			26

#define	ICON_Flash_X					ICON_batt_X0
#define	ICON_Flash_Y					2
#define	ICON_Flash_ADDRESS				4

#define	ICON_Loop_X					ICON_Flash_X
#define	ICON_Loop_Y					4
#define	ICON_Loop_ADDRESS				5

#define	ICON_Lock_X						ICON_Flash_X
#define	ICON_Lock_Y						6
#define	ICON_Lock_ADDRESS				6

#define	ICON_Style1_X					ICON_Flash_X+16
#define	ICON_Style1_Y					ICON_Flash_Y
#define	ICON_Style2_X					ICON_Style1_X
#define	ICON_Style3_X					ICON_Style1_X
#define	ICON_Style2_Y					ICON_Style1_Y+2
#define	ICON_Style3_Y					6
#define	ICON_StyleA_ADDRESS			30
#define	ICON_StyleB_ADDRESS			31
#define	ICON_StyleC_ADDRESS			32
#define	ICON_StyleD_ADDRESS			33
#define	ICON_StyleE_ADDRESS			34
#define	ICON_StyleF_ADDRESS			35

#define	ICON_T_X						ICON_HUES_X+16*3
#define	ICON_T_Y						2
#define	ICON_T_Addr					10

#define	Value_CD_X						ICON_HUES_X+16*2+8
#define	Value_CD_Y						4

#define	Counting_X						ICON_HUES_X
#define	Counting_Y						4

#define	TimerBarX						Counting_X
#define	TimerBarY						6
#define	TimerBarStartAddr				62+32
#define	TimerBarEndX					Counting_X+4+100
#define	TimerBarEndAddr				63+32

#define	LOW_CASE_m					28+32
#define	LOW_CASE_h						27+32

#define	FACTORY_MODE_LEFT_X			8
#define	FACTORY_MODE_RIGHT_X		104
#define	FACTORY_MODE_PROMPT_Y		2




#if(RGB_INSIDE==1)
#if(LIGHTEFFECT_INSIDE==1)
extern uint8 activityMaxIndex[4];
#else
extern uint8 activityMaxIndex[3];
#endif
#elif(LIGHTEFFECT_INSIDE==1)
extern uint8 activityMaxIndex[4];
#else
extern uint8 activityMaxIndex[1];
#endif

/*********************************************************************
 *
 * LCD上电初始化
 *
 **********************************************************************/
void 	powerOnLcdInit(void);

/*********************************************************************
 *
 * LCD进入休眠状态
 *
 **********************************************************************/
void  	lcdExitSleep(void);

/*********************************************************************
 *
 * LCD进入休眠状态
 *
 **********************************************************************/
void  	lcdEnterSleep(void);

/***********************************************************************************************************
  *  @brief  				电量格显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	batterDisplay(u8 level) ;
/***********************************************************************************************************
  *  @brief			充电状态显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	updateChargingIcon(void);

/*****************************************************************************************
 *
 *过热显示
 *
 ******************************************************************************************/
void		updateHotDisplay(void);

/***********************************************************************************************************
  *  @brief 			显示电量百分比
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :		0为清除电量显示
  ************************************************************************************************************/
void	 	batteryPercentDisplay(u8 level);

//extern	void 	updateRemainingTimeByValue(u16 data);
//extern	void		updateRemainingTime(displayParamsStruct * disParams);
//extern	void 	updateCountDownDisplay(displayParamsStruct * disParams);
/*****************************************************************************************
 *
 * 色温值显示
 *
 ******************************************************************************************/
void 	updateColorTempDisplay(displayParamsStruct * disParams) ;

/*****************************************************************************************
 *
 * 亮度值显示
 *
 ******************************************************************************************/
void 	updateBrightnessDisplay(displayParamsStruct * disParams);

/*****************************************************************************************
 *
 * 饱和度值显示
 *
 ******************************************************************************************/
void 	updateSaturationDisplay(displayParamsStruct * disParams);

/*****************************************************************************************
 *
 * 色调值显示
 *
 ******************************************************************************************/
void 	updateHuesDisplay(displayParamsStruct * disParams);

/*****************************************************************************************
 *
 * 待机画面显示
 *
 ******************************************************************************************/
void displaySystemMenu(displayParamsStruct * disParams,uint8 clearAll);

/*****************************************************************************************
 *
 * 光标位置显示
 *
 ******************************************************************************************/
void 	updateArrowDisplay(displayParamsStruct * disParams);

/*****************************************************************************************
 *
 *灯效样式显示
 *
 ******************************************************************************************/
void 	updateLightEffectDisplay(displayParamsStruct * disParams);

/***********************************************************************************************************
  *  @brief  				显示汉字
  *
  *  @param [in] :			x:0~127
  *						y:0~7
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	OLED_ShowCHinese(u8 x,u8 y,u8 no);

/***********************************************************************************************************
  *  @brief  				显示字符串
  *
  *  @param [in] :			x:0~127
  *						y:0~7
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	OLED_ShowString(u8 x,u8 y,u8 *chr);

/***********************************************************************************************************
  *  @brief				显示数字
  *
  *  @param [in] :			x:0~127
  *						y:0~7
  *  @param [out] :
  *
  *  @return :				数字长度
  *
  *  @note :
  ************************************************************************************************************/
u8 		OLED_ShowNum(u8 x,u8 y,u32 num);


u32 		oled_pow(u8 m,u8 n);
/***********************************************************************************************************
  *  @brief				在指定位置显示一个字符,包括部分字符
  *
  *  @param [in] :			x:0~127
  *						y:0~7
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	OLED_ShowChar(u8 x,u8 y,u8 chr);



void 	OLED_ShowOneSegment(u8 x,u8 y,u8  data1,u8 data2);
/***********************************************************************************************************
  *  @brief  			定位OLED 显示坐标
  *
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void 	OLED_Set_Pos(unsigned char x, unsigned char y);
/***********************************************************************************************************
  *  @brief  				清除所有LCD显示
  *
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
extern	void clear(void);
/***********************************************************************************************************
  *  @brief		系统版本号显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void  versionDisplay(void);
void  temperatureDisplay(void);
/***********************************************************************************************************
  *  @brief			测试模式中特定显示画面
  *
  *  @param [in] :		画面编号
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void	displayFactoryMode(u8	item);
/***********************************************************************************************************
  *  @brief		十六进制数字显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void HexDigitDis(u8 x,u8 y,u8 value);

/***********************************************************************************************************
  *  @brief		测试模式温度显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void	 factoryModeTemperatureDisplay(void);

/***********************************************************************************************************
  *  @brief			测试模式电压显示
  *
  *  @param [in] :		待显示电压最大值为9.99v
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :			大于9.99v的电压需要折算成单节电池电压显示
  ************************************************************************************************************/
void	 factoryVoltDisplay(float volt);

/***********************************************************************************************************
  *  @brief			写入8条COM线的数据
  *
  *  @param [in] :		data=0:		Clear
  *  						!=0:		On
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :			从指定位置开始,写到最后
  ************************************************************************************************************/
void OLED_ShowOnePage(uint8 x, uint8 y, uint8 data);

/*****************************************************************************************
 *
 * RGB值显示
 *
 ******************************************************************************************/
void updateRGBValueDisplay(displayParamsStruct * disParams,uint8 index);

/***********************************************************************************************************
  *  @brief 		情景模式显示
  *
  *  @param [in] :
  *
  *  @param [out] :
  *
  *  @return :
  *
  *  @note :
  ************************************************************************************************************/
void	 updateSceneDisplay(displayParamsStruct * disParams);

#endif /* SOURCE_INC_USER_LCD_H_ */
