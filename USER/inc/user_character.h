/*
 * user_character.h
 *
 *  Created on: 2019年11月20日
 *      Author: Bough_004
 */

#ifndef SOURCE_INC_USER_CHARACTER_H_
#define SOURCE_INC_USER_CHARACTER_H_
#include "const.h"

//const u8 ArrowArray[7][2]={{1,0},{1,2},{1,4},{1,6},{87,2},{87,4},{87,6}};
const uint8 CctArrowArray[2][2]={{ICON_BRIGHTNESS_X-16,3},{ICON_BRIGHTNESS_X-16,6}};
const uint8 HsiArrowArray[3][2]={{ICON_BRIGHTNESS_X-16,2},{ICON_BRIGHTNESS_X-16,4},{ICON_BRIGHTNESS_X-16,6}};
const uint8 RgbArrowArray[3][2]={{ICON_BRIGHTNESS_X-16,2},{ICON_BRIGHTNESS_X-16,4},{ICON_BRIGHTNESS_X-16,6}};
const uint8 *scene[] = {"Lightning1 ","Lightning2 ","  Cinema   ","  Police   ",
            "Ambulance  ","Fire truck "," Fast RGB  "," Slow RGB  ","    SOS    ","Candlelight"};
//#if(RGB_INSIDE==1)
//	#if(LIGHTEFFECT_INSIDE==1)
//		uint8  activityMaxIndex[4]={2,3,3,10};
//	#else
//		uint8  activityMaxIndex[3]={2,3,3};
//	#endif
//#elif(LIGHTEFFECT_INSIDE==1)
//	uint8  activityMaxIndex[4]={2,0,0,10};
//#else
//	uint8  activityMaxIndex[1]={2};
//#endif
/****************************************8*16的点阵************************************/
const unsigned char  F8X16[]=
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 0
  0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00,//! 1
  0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//" 2
  0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00,//# 3
  0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00,//$ 4
  0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00,//% 5
  0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10,//& 6
  0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//' 7
  0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,//( 8
  0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00,//) 9
  0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,//* 10
  0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00,//+ 11
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00,//, 12
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,//- 13
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,//. 14
  0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00,/// 15
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,/*"0",0*/
  0x00,0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,/*"1",1*/
  0x00,0x70,0x08,0x08,0x08,0x08,0xF0,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,/*"2",2*/
  0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00,/*"3",3*/
  0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00,0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24,/*"4",4*/
  0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00,/*"5",5*/
  0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00,/*"6",6*/
  0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00,0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00,/*"7",7*/
  0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,/*"8",8*/
  0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00,0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00,/*"9",9*/
  0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,//: 26+32
//  0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00,//; 27+32
//  0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,//< 28+32
//  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,//= 29+32
//  0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,//> 30+32
//  0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00,//? 31+32
  0x10,0xF0,0xF0,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x3F,0x21,0x00,0x20,0x3F,0x3F,//h 27+32
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,//m 28+32
  0x00,0x0C,0x12,0x12,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"º",29+32*/
  0x00,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x1F,0x0F,0x07,0x03,0x01,0x00,0x00,/*"▶",30+32*/
  0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x00,/*":",31+32*/
  0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00,//@ 32+32
  0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,//A 33+32
  0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,//B 34+32
  0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,//C 35+32
  0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,//D 36+32
  0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,//E 37+32
  0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,//F 38+32
  0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,//G 39+32
  0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,//H 40+32
  0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//I 41+32
  0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,//J 42+32
  0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,/*"K",43*/ //+32
  0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,//L 44+32
  0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00,//M 45+32
  0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,//N 46+32
  0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,//O 47+32
  0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,//P 48+32
  0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00,//Q 49+32
  0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,//R 50+32
  0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,/*"S",51*/
  0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,//T 52+32
  0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,//U 53+32
  0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,//V 54+32
  0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00,//W 55+32
  0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,//X 56+32
  0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,//Y 57+32
  0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00,//Z 58+32
  0x00,0x0C,0x12,0x12,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"º",59+32*/
  0x00,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x1F,0x0F,0x07,0x03,0x01,0x00,0x00,/*"▶",60+32*/
  0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x00,/*":",61+32*/

  0x00,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,  // processing bar start 62+32
  0x0C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,   // processing bar end 63+32		95
  0x0C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,   // 	96=0x60
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20,//a 65+32=0x71
  0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,//b 66+32=0x72
  0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,//c 67+32=0x73
  0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20,//d 68+32=0x74
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00,//e 69+32=0x75
  0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//f 70+32=0x76
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,//g 71+32=0x77
  0x10,0xF0,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,//h 72+32=0x78
  0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//i 73+32=0x79
  0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,//j 74+32=0x7A
  0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00,//k 75+32=0x7B
  0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//l 76+32=0x7C
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,//m 77+32=0x7D
  0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,//n 78+32=0x7E
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,//o 79+32=0x7F
  0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00,//p 80+32=0x80
  0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80,//q 81+32=0x81
  0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,//r 82+32=0x82
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,//s 83+32=0x83
  0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00,//t 84+32=0x84
  0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,//u 85+32=0x85
  0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00,//v 86+32=0x86
  0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,//w 87+32=0x87
  0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00,//x 88+32=0x88
  0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00,//y 89+32=0x89
  0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,//z 90+32=0x8A
};


const unsigned char  Hzk[][16]={

		{0x00,0xFC,0xFC,0x80,0x80,0x80,0x80,0x80,0xFC,0xFC,0x00,0x00,0x30,0x30,0x00,0x00},	//H: 图标   9
		{0x00,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x3F,0x3F,0x00,0x00,0x0C,0x0C,0x00,0x00},


		{0x00,0x70,0xF8,0xFC,0xCC,0x8C,0x8C,0x8C,0x1C,0x00,0x00,0x00,0x30,0x30,0x00,0x00},	//S: 图标   1
		{0x00,0x38,0x31,0x31,0x31,0x33,0x33,0x3F,0x1F,0x0E,0x00,0x00,0x0C,0x0C,0x00,0x00},

//		{0x00,0x80,0x8C,0x0C,0x00,0xC0,0xE0,0xE6,0xE6,0xE0,0xC0,0x00,0x0C,0x8C,0x80,0x00},
//		{ 0x00,0x01,0x31,0x30,0x00,0x03,0x07,0x67,0x67,0x07,0x03,0x00,0x30,0x31,0x01,0x00},
		//亮度图标  2
		{0x80,0x80,0x0C,0x8C,0xE0,0xF0,0xF0,0xFB,0xFB,0xF0,0xF0,0xE0,0x8C,0x0C,0x80,0x80},
		{0x01,0x01,0x30,0x31,0x07,0x0F,0x0F,0xDF,0xDF,0x0F,0x0F,0x07,0x31,0x30,0x01,0x01},

//		{0x00,0x00,0x80,0x80,0x80,0xF8,0x8C,0x04,0x04,0x04,0x8C,0xF8,0x80,0x80,0x80,0x00},
//		{0x00,0x1F,0x31,0x20,0x20,0x20,0x31,0x1F,0x01,0x1F,0x31,0x20,0x20,0x20,0x31,0x1F},
		//色温图标   3
		{0x00,0x00,0x00,0x80,0xF0,0x88,0x84,0x04,0x04,0x84,0x88,0xF0,0x80,0x00,0x00,0x00},
		{0x00,0x1E,0x21,0x40,0x40,0x41,0x42,0x2B,0x37,0x42,0x41,0x40,0x40,0x21,0x1E,0x00},


		{0x00,0xE0,0x10,0x88,0xC4,0xE2,0xB2,0x9A,0x8A,0x82,0x84,0x88,0x10,0xE0,0x00,0x00},	//闪光灯图标  4
		{0x00,0x07,0x08,0x11,0x21,0x41,0x51,0x59,0x4D,0x47,0x23,0x11,0x08,0x07,0x00,0x00},

		{0x00,0xF8,0xF8,0x18,0x18,0x18,0x18,0x18,0x00,0x08,0x1C,0x3E,0x18,0xF8,0xF8,0x00},	//循环图标  5
		{0x00,0x1F,0x1F,0x18,0x18,0x7C,0x38,0x10,0x00,0x18,0x18,0x18,0x18,0x1F,0x1F,0x00},

		{0x00,0x00,0x00,0xF0,0xF8,0x04,0x04,0x04,0x04,0x04,0x04,0xF8,0xF0,0x00,0x00,0x00},	//锁图标	6
		{0x18,0x3C,0x66,0x67,0x67,0x66,0x66,0x66,0x66,0x66,0x66,0x67,0x67,0x66,0x3C,0x18},


		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},		//  NULL
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},		//  NULL
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},		//  NULL
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},


		{0x00,0xE0,0xF8,0x1C,0x0C,0x06,0x06,0xFE,0xFE,0x86,0x86,0x8C,0x9C,0xF8,0xE0,0x00},		//10		clock
		{0x00,0x07,0x1F,0x38,0x30,0x60,0x60,0x61,0x61,0x61,0x61,0x31,0x39,0x1F,0x07,0x00},
//		{0xFE,0xFF,0xFF,0xE7,0xE7,0xE7,0x07,0x07,0x07,0xE7,0xE7,0xE7,0xFF,0xFF,0xFE,0x00},		//反显T图标	10
//		{0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xE0,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00},


		{0x00,0xFC,0xFE,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06},		//batt 0 11
		{0x00,0x3F,0x7F,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60},
		{0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},
		{0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},


		{0x00,0xFC,0xFE,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06},		//batt 1 13
		{0x00,0x3F,0x7F,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60},
		{0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},
		{0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},



		{0x00,0xFC,0xFE,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0x06},		//batt 2 15
		{0x00,0x3F,0x7F,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x60},
		{0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},
		{0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},



		{0x00,0xFC,0xFE,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xE6},		//batt 3 17
		{0x00,0x3F,0x7F,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x67},
		{0xE6,0xE6,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},
		{0x67,0x67,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},


		{0x00,0xFC,0xFE,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xE6},		//batt 4 19
		{0x00,0x3F,0x7F,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x67},
		{0xE6,0xE6,0x06,0x06,0xE6,0xE6,0xE6,0x06,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},		//20
		{0x67,0x67,0x60,0x60,0x67,0x67,0x67,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},


		{0xF8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8},		//batt 5 21
		{0x3F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F},
		{0xE8,0x08,0xE8,0xE8,0xE8,0x08,0x08,0x08,0x08,0x08,0x78,0xC0,0x00,0x00,0x00,0x00},		//22
		{0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x20,0x20,0x20,0x20,0x3C,0x07,0x00,0x00,0x00,0x00},

		{0xF8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8},		//batt full 23
		{0x3F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F},
		{0xE8,0x08,0xE8,0xE8,0xE8,0x08,0xE8,0xE8,0xE8,0x08,0x78,0xC0,0x00,0x00,0x00,0x00},		//24
		{0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x2F,0x2F,0x2F,0x20,0x3C,0x07,0x00,0x00,0x00,0x00},

		{0x00,0x00,0x78,0xCC,0x84,0xCC,0x78,0x80,0xE0,0x38,0x0C,0x04,0x00,0x00,0x00,0x00},		//25		"%"
		{0x00,0x00,0x00,0x00,0x20,0x38,0x0E,0x03,0x00,0x1E,0x33,0x21,0x33,0x1E,0x00,0x00},


//		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0xE0},		//26		charge
//		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x0F},
//		{0x30,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x30,0xE0,0x00,0x00,0x00},		//27
//		{0x18,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x18,0x0F,0x01,0x01,0x01},

//
//		{0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xC0,0x00,0xC0,0x00,0xC0,0xC0,0xE0,0xF0},		//26		DC
//		{0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x03,0x00,0x03,0x00,0x03,0x03,0x07,0x0F},
//		{0xF8,0xF8,0xF8,0xF8,0xF8,0x00,0xFC,0xFC,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00},		//27
//		{0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x3F,0x3F,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00},

		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xC0,0x00,0xC0,0x00},		//26		DC
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x03,0x00,0x03,0x00},
		{0xC0,0xC0,0xE0,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0x00,0xFC,0xFC,0x20,0x20,0x20,0x20},
		{0x03,0x03,0x07,0x0F,0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x3F,0x3F,0x04,0x04,0x04,0x04},


		{0x00,0xFC,0xFE,0x06,0xF6,0xF6,0x86,0x86,0xF6,0xF6,0x06,0xE6,0xF6,0x36,0x36,0xF6},		//28		HOT
		{0x00,0x3F,0x7F,0x60,0x6F,0x6F,0x61,0x61,0x6F,0x6F,0x60,0x67,0x6F,0x6C,0x6C,0x6F},
		{0xE6,0x06,0x36,0x36,0xF6,0xF6,0x36,0x36,0x06,0xFE,0xFC,0xE0,0xE0,0xC0,0x00,0x00},		//29
		{0x67,0x60,0x60,0x60,0x6F,0x6F,0x60,0x60,0x60,0x7F,0x3F,0x07,0x07,0x03,0x00,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0xC0,0xE0,0x30,0x18,0x0C,0x18,0x30,0xE0,0xC0,0x00},		//  :A	30
		{0x00,0x00,0x06,0x06,0x00,0x00,0x7F,0x7F,0x0C,0x0C,0x0C,0x0C,0x0C,0x7F,0x7F,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0xFC,0xFC,0x04,0x04,0x04,0x8C,0xFC,0x7C,0x30,0x00},		//  :B	31
		{0x00,0x00,0x06,0x06,0x00,0x00,0x7F,0x7F,0x41,0x41,0x41,0x41,0x63,0x3F,0x3E,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0xF0,0xFC,0x0E,0x06,0x06,0x06,0x06,0x0E,0x0C,0x00},		//  :C	32
		{0x00,0x00,0x06,0x06,0x00,0x00,0x07,0x1F,0x38,0x30,0x30,0x30,0x30,0x1C,0x0C,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0xFC,0xFE,0x06,0x06,0x06,0x06,0x0C,0xF8,0xF0,0x00},		//  :D	33
		{0x00,0x00,0x06,0x06,0x00,0x00,0x1F,0x3F,0x30,0x30,0x30,0x30,0x18,0x0F,0x07,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0x00,0xF8,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0x88,0x00},		//  :E	34
		{0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x1F,0x3F,0x31,0x31,0x31,0x31,0x31,0x11,0x00},

		{0x00,0x00,0x60,0x60,0x00,0x00,0x00,0xF8,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0x88,0x00},		//  :F	35
		{0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x01,0x00},

		{0x04,0x04,0xE4,0x04,0x0F,0xF4,0x04,0x04,0xF4,0x44,0xCF,0x44,0x44,0x44,0x04,0x00},
		{0x40,0x40,0x7D,0x44,0x44,0x7D,0x44,0x45,0x44,0x7C,0x44,0x45,0x7C,0x40,0x40,0x00},		/*"蓝",36*/

		{0x00,0x00,0xFE,0x02,0x82,0x82,0x82,0x82,0xFA,0x82,0x82,0x82,0x82,0x82,0x02,0x00},
		{0x80,0x60,0x1F,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x44,0x58,0x40,0x40,0x00},		/*"压",37*/

		{0x10,0x60,0x02,0xCC,0x80,0x80,0xFC,0x40,0x20,0xFF,0x10,0x08,0xF8,0x00,0x00,0x00},
		{0x04,0x04,0x7E,0x01,0x00,0x00,0x3F,0x40,0x40,0x4F,0x40,0x44,0x47,0x40,0x78,0x00},		/*"池",38*/

		{0x20,0x30,0xAC,0x63,0x20,0x18,0x00,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x00,0x00},
		{0x22,0x67,0x22,0x12,0x12,0x12,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},		/*"红",39*/

		{0x20,0x30,0xAC,0x63,0x30,0x00,0x80,0x92,0x92,0x92,0x92,0x92,0xFE,0x80,0x80,0x00},
		{0x22,0x67,0x22,0x12,0x12,0x00,0x22,0x14,0x48,0x84,0x7F,0x04,0x08,0x14,0x22,0x00},		/*"绿",40*/


		{0x10,0x60,0x02,0x8C,0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
		{0x04,0x04,0x7E,0x01,0x40,0x7E,0x42,0x42,0x7E,0x42,0x7E,0x42,0x42,0x7E,0x40,0x00},		/*"温",41*/

		{0x00,0x00,0xFC,0x24,0x24,0x24,0xFC,0x25,0x26,0x24,0xFC,0x24,0x24,0x24,0x04,0x00},
		{0x40,0x30,0x8F,0x80,0x84,0x4C,0x55,0x25,0x25,0x25,0x55,0x4C,0x80,0x80,0x80,0x00},		/*"度",42*/

		{0x00,0x40,0x42,0x44,0x58,0x40,0x40,0x7F,0x40,0x40,0x50,0x48,0xC6,0x00,0x00,0x00},
		{0x00,0x40,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0xFF,0x00,0x00,0x00},		/*"当",43*/

		{0x08,0x08,0xE8,0x29,0x2E,0x28,0xE8,0x08,0x08,0xC8,0x0C,0x0B,0xE8,0x08,0x08,0x00},
		{0x00,0x00,0xFF,0x09,0x49,0x89,0x7F,0x00,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00,0x00},		/*"前",44*/

		{0x00,0x02,0x0C,0xC0,0x00,0x40,0x20,0x10,0x0C,0x23,0xCC,0x10,0x20,0x40,0x40,0x00},
		{0x02,0x02,0x7F,0x00,0x00,0x00,0x01,0x09,0x11,0x21,0xD1,0x0D,0x03,0x00,0x00,0x00},		/*"冷",45*/

		{0x00,0xFC,0x44,0x44,0xFC,0x02,0x26,0x2A,0xE2,0x26,0x29,0x21,0x29,0x25,0x00,0x00},
		{0x00,0x1F,0x08,0x08,0x5F,0x21,0x99,0x87,0x4D,0x55,0x25,0x55,0x4D,0x81,0x81,0x00},		/*"暖",46*/

		{0x00,0x10,0x88,0xC4,0x33,0x40,0x48,0x48,0x48,0x7F,0x48,0xC8,0x48,0x48,0x40,0x00},
		{0x02,0x01,0x00,0xFF,0x00,0x02,0x0A,0x32,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x00},		/*"待",47*/

		{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
		{0x04,0x03,0x00,0xFF,0x00,0x83,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},		/*"机",48*/


		{0x00,0x00,0x10,0x11,0x16,0x10,0x10,0xF0,0x10,0x10,0x14,0x13,0x10,0x00,0x00,0x00},
		{0x81,0x81,0x41,0x41,0x21,0x11,0x0D,0x03,0x0D,0x11,0x21,0x41,0x41,0x81,0x81,0x00},		/*"关",49*/

		{0x10,0x10,0x10,0xFF,0x90,0x20,0x98,0x88,0x88,0xE9,0x8E,0x88,0x88,0xA8,0x98,0x00},
		{0x02,0x42,0x81,0x7F,0x00,0x00,0x80,0x84,0x4B,0x28,0x10,0x28,0x47,0x80,0x00,0x00},	/*"按",50*/

		{0x00,0x80,0x60,0xF8,0x87,0x80,0x84,0x84,0x84,0xFE,0x82,0x83,0x82,0x80,0x80,0x00},
		{0x01,0x00,0x00,0xFF,0x00,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00,0x00},	/*"任",51*/

		{0x10,0x10,0x12,0xD2,0x56,0x5A,0x52,0x53,0x52,0x5A,0x56,0xD2,0x12,0x10,0x10,0x00},
		{0x40,0x30,0x00,0x77,0x85,0x85,0x8D,0xB5,0x85,0x85,0x85,0xE7,0x00,0x10,0x60,0x00},	/*"意",52*/

		{0x40,0x30,0xEF,0x24,0x24,0x80,0xE4,0x9C,0x10,0x54,0x54,0xFF,0x54,0x7C,0x10,0x00},
		{0x01,0x01,0x7F,0x21,0x51,0x26,0x18,0x27,0x44,0x45,0x45,0x5F,0x45,0x45,0x44,0x00},	/*"键",53*/

		{0x80,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x80,0x00},
		{0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},	/*"开",54*/

		{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x40,0xE0,0x58,0x47,0x40,0x50,0x60,0xC0,0x00},
		{0x40,0x22,0x15,0x08,0x16,0x21,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},	/*"始",55*/


		{0x10,0x60,0x02,0x8C,0x00,0xFE,0x02,0xF2,0x02,0xFE,0x00,0xF8,0x00,0xFF,0x00,0x00},
		{0x04,0x04,0x7E,0x01,0x80,0x47,0x30,0x0F,0x10,0x27,0x00,0x47,0x80,0x7F,0x00,0x00},/*"测",56*/

		{0x40,0x40,0x42,0xCC,0x00,0x90,0x90,0x90,0x90,0x90,0xFF,0x10,0x11,0x16,0x10,0x00},
		{0x00,0x00,0x00,0x3F,0x10,0x28,0x60,0x3F,0x10,0x10,0x01,0x0E,0x30,0x40,0xF0,0x00},/*"试",57*/

		{0x00,0x00,0xF8,0x49,0x4A,0x4C,0x48,0xF8,0x48,0x4C,0x4A,0x49,0xF8,0x00,0x00,0x00},
		{0x10,0x10,0x13,0x12,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x12,0x13,0x10,0x10,0x00},/*"单",58*/

		{0x00,0x80,0x60,0xF8,0x07,0x10,0x90,0x10,0x11,0x16,0x10,0x10,0xD0,0x10,0x00,0x00},
		{0x01,0x00,0x00,0xFF,0x40,0x40,0x41,0x5E,0x40,0x40,0x70,0x4E,0x41,0x40,0x40,0x00},/*"位",59*/

		{0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0xF8,0x00,0x00,0x00},
		{0x00,0x00,0x1F,0x08,0x08,0x08,0x08,0x7F,0x88,0x88,0x88,0x88,0x9F,0x80,0xF0,0x00},/*"电",60*/

		{0x10,0x60,0x02,0x8C,0x00,0x44,0x64,0x54,0x4D,0x46,0x44,0x54,0x64,0xC4,0x04,0x00},
		{0x04,0x04,0x7E,0x01,0x80,0x40,0x3E,0x00,0x00,0xFE,0x00,0x00,0x7E,0x80,0xE0,0x00},/*"流",61*/

		{0x40,0x40,0x42,0x44,0x58,0xC0,0x40,0x7F,0x40,0xC0,0x50,0x48,0x46,0x40,0x40,0x00},
		{0x80,0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x78,0x00},	/*"光",62*/


		{0x40,0x30,0xEF,0x24,0x64,0x48,0x48,0x7F,0x48,0x48,0x48,0x7F,0x48,0x48,0x40,0x00},
		{0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"错",63*/

		{0x40,0x42,0xCC,0x00,0x00,0x80,0x9E,0x92,0x92,0x92,0x92,0x92,0x9E,0x80,0x00,0x00},
		{0x00,0x00,0x7F,0x20,0x94,0x84,0x44,0x24,0x14,0x0F,0x14,0x24,0x44,0x84,0x84,0x00},/*"误",64*/



		{0x08,0x08,0x08,0xF8,0x08,0x08,0x08,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00,0x00},
		{0x10,0x30,0x10,0x1F,0x08,0x88,0x48,0x30,0x0E,0x01,0x40,0x80,0x40,0x3F,0x00,0x00},/*"功",65*/

		{0x08,0xCC,0x4A,0x49,0x48,0x4A,0xCC,0x18,0x00,0x7F,0x88,0x88,0x84,0x82,0xE0,0x00},
		{0x00,0xFF,0x12,0x12,0x52,0x92,0x7F,0x00,0x00,0x7E,0x88,0x88,0x84,0x82,0xE0,0x00},/*"能",66*/

		{0x40,0x40,0x40,0xFF,0x20,0x20,0x20,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00},
		{0x00,0x00,0x00,0x1F,0x08,0x84,0x42,0x20,0x18,0x07,0x40,0x80,0x40,0x3F,0x00,0x00},/*"切",67*/

		{0x10,0x10,0x10,0xFF,0x90,0x20,0x10,0xE8,0x27,0x24,0xE4,0x34,0x2C,0xE0,0x00,0x00},
		{0x02,0x42,0x81,0x7F,0x00,0x84,0x84,0x47,0x24,0x1C,0x07,0x1C,0x24,0x47,0x84,0x00},/*"换",68*/

		{0x40,0x42,0xCC,0x00,0x00,0xFE,0x82,0x92,0x92,0xFE,0x92,0x92,0x82,0xFE,0x00,0x00},
		{0x00,0x00,0x3F,0x10,0x88,0x7F,0x00,0x1E,0x12,0x12,0x12,0x5E,0x80,0x7F,0x00,0x00},/*"调",69*/

		{0x04,0x44,0x44,0x44,0x5F,0x44,0xC4,0x44,0x44,0x44,0x5F,0x44,0xC4,0x04,0x04,0x00},
		{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x08,0x10,0x08,0x07,0x00,0x00,0x00},/*"节",70*/


		{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00},
		{0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00},/*-  71*/

		{0x00,0x04,0x04,0x74,0x54,0x54,0x55,0x56,0x54,0x54,0x54,0x74,0x04,0x04,0x00,0x00},
		{0x84,0x83,0x41,0x21,0x1D,0x05,0x05,0x05,0x05,0x05,0x7D,0x81,0x81,0x85,0xE3,0x00},/*"亮",72*/

		{0x00,0x00,0xFC,0x24,0x24,0x24,0xFC,0x25,0x26,0x24,0xFC,0x24,0x24,0x24,0x04,0x00},
		{0x40,0x30,0x8F,0x80,0x84,0x4C,0x55,0x25,0x25,0x25,0x55,0x4C,0x80,0x80,0x80,0x00},/*"度",73*/

		{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0xFC,0xFC,0x80,0x80,0x80,0x80,0x80,0x00,0x00},
		{0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x00,0x00},/*+ 74*/

//		{0x40,0x44,0x54,0x64,0x45,0x7E,0x44,0x44,0x44,0x7E,0x45,0x64,0x54,0x44,0x40,0x00},
//		{0x00,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00,0x00},/*"普",75*/

//		{0x40,0x42,0xCC,0x00,0x00,0xE2,0x22,0x2A,0x2A,0xF2,0x2A,0x26,0x22,0xE0,0x00,0x00},
//		{0x80,0x40,0x3F,0x40,0x80,0xFF,0x89,0x89,0x89,0xBF,0x89,0xA9,0xC9,0xBF,0x80,0x00},/*"通",76*/
//
//		{0x00,0xE0,0x00,0xFF,0x10,0x20,0x08,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00,0x00},
//		{0x01,0x00,0x00,0xFF,0x00,0x81,0x41,0x31,0x0D,0x03,0x0D,0x31,0x41,0x81,0x81,0x00},/*"快",77*/
//
//		{0x40,0x40,0x42,0xCC,0x00,0x04,0xF4,0x94,0x94,0xFF,0x94,0x94,0xF4,0x04,0x00,0x00},
//		{0x00,0x40,0x20,0x1F,0x20,0x48,0x44,0x42,0x41,0x5F,0x41,0x42,0x44,0x48,0x40,0x00},/*"速",78*/
//
//		{0x04,0x04,0x84,0xC4,0xA4,0x9C,0x85,0x86,0x84,0x84,0xA4,0xC4,0x84,0x04,0x04,0x00},
//		{0x00,0x80,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x7F,0x80,0x80,0x81,0xF0,0x00,0x00},/*"充",79*/

//		{0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0xF8,0x00,0x00,0x00},
//		{0x00,0x00,0x1F,0x08,0x08,0x08,0x08,0x7F,0x88,0x88,0x88,0x88,0x9F,0x80,0xF0,0x00},/*"电",80*/
//
//		{0x00,0x00,0xF0,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0xF0,0x00,0x00,0x00},
//		{0x00,0x00,0x0F,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x0F,0x00,0x00,0x00},/*"中",81*/
//
//		{0x10,0x60,0x02,0xCC,0x80,0x80,0xFC,0x40,0x20,0xFF,0x10,0x08,0xF8,0x00,0x00,0x00},
//		{0x04,0x04,0x7E,0x01,0x00,0x00,0x3F,0x40,0x40,0x4F,0x40,0x44,0x47,0x40,0x78,0x00},/*"池",82*/
//
//		{0x00,0x00,0xFE,0x02,0x82,0x82,0x82,0x82,0xFA,0x82,0x82,0x82,0x82,0x82,0x02,0x00},
//		{0x80,0x60,0x1F,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x44,0x58,0x40,0x40,0x00},/*"压",83*/
};

const u8		RED_LED_CURRENT_STRING[4]={39,62,60,61};							//红光电流
const u8		GREEN_LED_CURRENT_STRING[4]={40,62,60,61};						//绿光电流
const u8		BLUE_LED_CURRENT_STRING[4]={36,62,60,61};						//蓝光电流
const u8		CW_LED_CURRENT_STRING[4]={45,62,60,61};							//冷光电流
const u8		MW_LED_CURRENT_STRING[4]={46,62,60,61};							//暖光电流
const u8		STANDBY_CURRENT_STRING[4]={47,48,60,61};						//待机电流
const u8		SLEEP_CURRENT_STRING[4]={49,48,60,61};							//关机电流
const u8		PRESS_ANY_KEY[6]={50,51,52,53,54,55};								//按任意键开始
//const u8		PRESS_BINC_KEY[7]={50,72,73,74,53,54,55};						//按亮度加键开始
//const u8		PRESS_DEC_KEY[7]={50,69,70,71,53,54,55};						//按调节减键开始
const u8		PRESS_BDEC_KEY[7]={50,72,73,71,53,54,55};							//按亮度-键开始
const u8		PRESS_INC_KEY[7]={50,69,70,74,53,54,55};							//按调节+键开始
const u8		PRESS_FUNC_KEY[6]={50,67,68,53,54,55};								//按切换键开始
const u8		TEST[2]={56,57};													//测试
//const u8		UNIT[2]={56,57};												//单位
const u8		LEVEL[5]={60,61,62,63,64};											//电流表档位
//const u8		QUICK_CHARGING[5]={77,78,79,80,81};							//快速充电中
//const u8		NORMAL_CHARGING[5]={75,76,79,80,81};						//普通充电中
const u8		BATT_VOLT[4]={60,38,60,37};
const u8		TEMP_ERROR[4]={41,42,63,64};										//温度错误
const u8         VOLT_ERROR[4]={60,37,63,64};										//电压错误
#endif /* SOURCE_INC_USER_CHARACTER_H_ */