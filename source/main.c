#include <3ds.h>
#include <stdio.h>
#include <string.h>
#include "global_backdoor.h"


int main(int argc, char **argv)
{

    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    // Put your code here fuck boy, i highly recommend using "3DS-Backdoor-TEST" repository tho, as it pacth ACl (SVC Acess Check)

    printf("3DS Kernel11 Code Exec testing\n");
    printf("Thanks Mrrraouu for the snippets ! \n\n");

    printf("\nPress SELECT to exit.\n");

    while(aptMainLoop())
    {
        hidScanInput();
        if(hidKeysDown() & KEY_SELECT)
            break;

        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }
    gfxExit();

}