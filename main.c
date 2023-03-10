/************************************/
/*	Author		: Eslam_Hosny		*/
/*	SWC			: N/A				*/
/*	Layer		: N/A				*/
/*	Version   	: 0.0				*/
/*	Date	  	: N/A				*/
/*	Last Edit 	: N/A				*/
/************************************/

#define F_CPU 8000000UL
#include <util/delay.h>
#include "LSTD_types.h"
#include "LBIT_math.h"
#include "MDIO_interface.h"
#include "PORT_interface.h"
//#include "CLCD_Special.h"
#include "CLCD_interface.h"

u8 P_PONG[3][8]=
{
		{0b00000000,0b00001110,0b00011111,0b00011111,0b00011111,0b00001110,0b00000000}, //الكوره
		{0b00011001,0b00001101,0b00001111,0b00001110,0b00001100,0b00001100,0b00011000}, //المضرب
		{0b00010011,0b00010110,0b00011110,0b00001110,0b00000110,0b00000110,0b00000011}
};

int main (void)
{
	PORT_voidInit();
	CLCD_voidInit();
	CLCD_voidClear();

	CLCD_voidSendSpecialCharacter(P_PONG[2], 0, 0, 0);
	CLCD_voidSendSpecialCharacter(P_PONG[1], 1, 0, 15);

	while(1)
	{
		for(u8 i=1;(i<15);i++)
		{
			CLCD_voidSendSpecialCharacter(P_PONG[0], 2, 0, i);
			_delay_ms(250);
			CLCD_voidShift(Shift_CursorRight);
			CLCD_voidSendDataXY(0, i, ' ');

		}
		for(u8 i=13;(i>1);i--)
		{
			CLCD_voidSendSpecialCharacter(P_PONG[0], 2, 0, i);
			_delay_ms(250);
			CLCD_voidShift(Shift_CursorLeft);
			CLCD_voidSendDataXY(0, i, ' ');
		}
	};

	return 0;
}

