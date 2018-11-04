#include "cui.h"

int main(int argc, char **argv)
{
    gfxInitDefault();
	consoleInit(NULL);
	
	titleBase("CustomCUI"); // this is the main title up on the top screen
	
	tilesTitle("test 1", 1);
	tilesTitle("test 2", 2);
	tilesTitle("test 3", 3);

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

