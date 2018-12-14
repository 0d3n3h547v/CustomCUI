#include <string.h>
#include <stdio.h>
#include <switch.h>
#include "cui.h"

void keyboardInit();
void titleBase(char *title);
void tilesTitle(char *titleField, int x);

int main(int argc, char **argv)
{
    gfxInitDefault();
	consoleInit(NULL);
	
	// cuiInit();
	
	titleBase("CustomCUI"); // this is the main title up on the top screen; upcoming colors soon
	
	tilesTitle("test 1", 1); 
	tilesTitle("test 2", 2);
	tilesTitle("test 3", 3);
	tilesTitle("exit", 7);
	
	/* ^^^^^^^^^^^^^^^^ important
	 _____________________________________________________________
	|how it works tilesTitle() format                             |
	|                                                             |
	|tilesTitle(char *titleField, int x)                          |
	|                                                             |
	|char is the text inside the blank square;                    |
	|int x is used for looking how many tiles needs to be created;|
	|Maximum tiles to create is 7.                                |
	|_____________________________________________________________|
	
	*/

    while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
		
        gfxFlushBuffers();
        gfxSwapBuffers();
    }
	
	keyboardInit(); // a little rappresentation of my current work :)
	
	while(appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu
		
        gfxFlushBuffers();
        gfxSwapBuffers();
    }
	
    gfxExit();
    return 0;
}

