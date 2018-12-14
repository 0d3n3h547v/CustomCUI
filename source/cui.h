/*   ________________________________________ 
    /                                       /|
   /______________________________________ / |
  | Open Source Custom CUI (CUI engine)   |  /
  |          made by Dontwait00           | /
  |_______________________________________|/
  
*/

#ifndef _CUI_H_
#define _CUI_H_

#include <string.h>
#include <stdio.h>
#include <switch.h>

int spaceTilesY;
int blank = 5;
u32 prev_touchcount = 0;
int touchY;
int touchX;
	
int x7x = 37;
int x7Xx = 41;
int x7xy = 20;
int x7Xy = 24;

// CALL HIM EVERYTIME!!!! Creates the fake Graphics User Interface
void titleBase(char *title)
{
	printf("\x1b[3;35H%s%s%s", CONSOLE_GREEN, title, CONSOLE_RESET);
	
	for (int a=4; a < 75; a++) {
		printf("\x1b[4;%dH%s%s%s", a, CONSOLE_YELLOW, "_", CONSOLE_RESET);
	}
	
	for ( int a=4; a < 75; a++) {
		printf("\x1b[40;%dH%s%s%s", a, CONSOLE_RED, "_", CONSOLE_RESET);
	}
	
	for (int a=5; a < 41; a++) {
		printf("\x1b[%d;16H%s%s%s", a, CONSOLE_BLUE, "|", CONSOLE_RESET);
	}
	
	printf("\x1b[4;16H ");
	printf("\x1b[43;5HPress [+] to exit");
}

// this creates a blank square when you call him;
// inside there is space to fill with tilesTitle()
// is not opportune to modify this, if not neccessary
void tilesBlank()
{
	printf("\x1b[%d;1H ____________\n|            |\n|            |\n|            |\n|____________|", blank);
}

// this creates the text inside the blank square called before like tilesBlank()
void tilesTitle(char *titleField, int x)
{
	if (x == 1)
	{
		blank = 5;
		tilesBlank();
		spaceTilesY = 7;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x1x = 5;
		int x1Xx = 10;
		int x1xy = 20;
		int x1Xy = 24;
		// if(touchX >= x1x && touchX <= x1Xx && touchY >= x1xy && touchY <= x1Xy)
		// {}
	}
		
	if (x == 2)
	{
		blank = 10;
		tilesBlank();
		spaceTilesY = 12;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x2x = 12;
		int x2Xx = 16;
		int x2xy = 20;
		int x2Xy = 24;
		// if(touchX >= x2x && touchX <= x2Xx && touchY >= x2xy && touchY <= x2Xy)
		// {}
	}
		
	if (x == 3)
	{
		blank = 15;
		tilesBlank();
		spaceTilesY = 17;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x3x = 17;
		int x3Xx = 21;
		int x3xy = 20;
		int x3Xy = 24;
		// if(touchX >= x3x && touchX <= x3Xx && touchY >= x3xy && touchY <= x3Xy)
		// {}
	}
	
	if (x == 4)
	{
		blank = 20;
		tilesBlank();
		spaceTilesY = 22;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x4x = 22;
		int x4Xx = 26;
		int x4xy = 20;
		int x4Xy = 24;
		// if(touchX >= x4x && touchX <= x4Xx && touchY >= x4xy && touchY <= x4Xy)
		// {}
	}
	
	if (x == 5)
	{
		blank = 25;
		tilesBlank();
		spaceTilesY = 27;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x5x = 27;
		int x5Xx = 31;
		int x5xy = 20;
		int x5Xy = 24;
		// if(touchX >= x5x && touchX <= x5Xx && touchY >= x5xy && touchY <= x5Xy)
		// {}
	}
	
	if (x == 6)
	{
		blank = 30;
		tilesBlank();
		spaceTilesY = 32;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		int x6x = 32;
		int x6Xx = 36;
		int x6xy = 20;
		int x6Xy = 24;
		// if(touchX >= x6x && touchX <= x6Xx && touchY >= x6xy && touchY <= x6Xy)
		// {}
	}
	
	if (x == 7)
	{
		blank = 35;
		tilesBlank();
		spaceTilesY = 37;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		
		// if(touchX >= x7x && touchX <= x7Xx && touchY >= x7xy && touchY <= x7Xy)
		// {}
	}
}

// FIX THIS SHIT!!!
void keyboardInit()
{
	char *keyboard[] = {
		"________________________________________________________________________________",
		"                                                                                ",
		"           _____ _____ _____ _____ _____ _____ _____ _____ _____ _____          ",
		"          |     |     |     |     |     |     |     |     |     |     |         ",
		"          |     |     |     |     |     |     |     |     |     |     |         ",
		"          |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |         ",
		"          |     |     |     |     |     |     |     |     |     |     |         ",
		"          |__ __|__ __|__ __|__ __|__ __|__ __|__ __|__ __|__ __|__ __|____     ",
		"             |     |     |     |     |     |     |     |     |     |       |    ",
		"             |     |     |     |     |     |     |     |     |     |       |    ",
		"             |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  /|\\  |    ",
		"             |     |     |     |     |     |     |     |     |     |   |   |    ",
		"             |_____|_____|_____|_____|_____|_____|_____|_____|_____|   |   |    ",
		"                   |     |     |     |     |     |     |     |  _______|   |    ",
		"                   |     |     |     |     |     |     |     |             |    ",
		"                   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |   ENTER     |    ",
		"                   |     |     |     |     |     |     |     |             |    ",
		"                   |_____|_____|_____|_____|_____|_____|_____|_____________|    ",
		"                                                                                "
	};
	
	int row = 24;
	
	for (int a=0; a < 19; a++) {
		row++;
		printf("\x1b[%d;1H%s", row, keyboard[a]);
	}
	
}

#endif