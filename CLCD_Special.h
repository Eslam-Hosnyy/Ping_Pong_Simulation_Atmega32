/****************************************/
/*	Author		:	ESLAM_HOSNY 		*/
/*	SWC			:	Special Characters	*/
/*	Layer		:	SWC					*/
/*	Version		:	1.0					*/
/*	Date		:	October 24, 2022	*/
/*	Last Edit	:	N/A					*/
/****************************************/

#ifndef _CLCD_SPECIAL_H_
#define _CLCD_SPECIAL_H_


u8 ARR[6][8]=
{
		{0b00000100,0b00000100,0b00000100,0b00000100,0b00000000,0b00000110,0b00001100},//ا	0
		{0b00000000,0b00000000,0b00000000,0b00010101,0b00010101,0b00011111,0b00000000},//سـ	1
		{0b00000000,0b00000010,0b00001010,0b00001010,0b00000010,0b00011111,0b00000000},//ـلا	2
		{0b00000000,0b00000000,0b00000100,0b00001010,0b00011110,0b00010000,0b00010000},//م	3
		{0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00011111,0b00000000},
		{0b00000100,0b00001010,0b00000100,0b00011111,0b00000100,0b00001010,0b00010001}
};


u8 P_PONG[3][8]=
{
		{0b00000000,0b00001110,0b00011111,0b00011111,0b00011111,0b00001110,0b00000000}, //الكوره
		{0b00011101,0b00001101,0b00001101,0b00001110,0b00001100,0b00001100,0b00011100}, //المضرب
		{0b00010111,0b00010110,0b00010110,0b00001110,0b00000110,0b00000110,0b00000111}
};

#endif
