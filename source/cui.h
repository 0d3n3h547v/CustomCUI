
/*
   _______________________________________
  | Open Source Custom CUI (CUI engine)   |
  |          made by Dontwait00           |
  |_______________________________________|
  
*/

#pragma once
#include <string.h>
#include <stdio.h>
#include <switch.h>

int spaceTilesY;
int blank = 10;

// CALL HIM EVERYTIME!!!! Creates the fake Graphics User Interface
void titleBase(char *title)
{
	printf("\x1b[3;35H%s%s%s", CONSOLE_GREEN, title, CONSOLE_RESET);
	printf("\x1b[5;4H____________ ___________________________________________________________");
	printf("\x1b[40;4H________________________________________________________________________");
	
	for (int a=6; a < 41; a++) {
		printf("\x1b[%d;16H|", a);
	}
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
	if (x >= 1)
	{
		tilesBlank();
		spaceTilesY = 12;
		printf("\x1b[%d;3H%s", spaceTilesY, titleField);
		
		if (x >= 2)
		{
			blank = 20;
			tilesBlank();
			spaceTilesY = 22;
			printf("\x1b[%d;3H%s", spaceTilesY, titleField);
			
			if (x >= 3)
			{
				blank = 30;
				tilesBlank();
				spaceTilesY = 32;
				printf("\x1b[%d;3H%s", spaceTilesY, titleField);
			}
		}
	}
}