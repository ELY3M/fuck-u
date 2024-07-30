#include <string.h>
#include <stdio.h>
#include <stdlib.h>	
#include <switch.h>


/*

HAHAHAHAH this is so funny code :) 
I fixed it to work with newer libnx :)  
I would make "Fuck you" text much bigger and add in the middle finger pixel image  
It can be done by SDL :)

ELY M.  

*/

int main(int argc, char **argv)
{


    consoleInit(NULL);
	setInitialize();
	
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);


    printf("Heres a handy guide!\n");
	printf("A = Fuck you.\n");
	printf("B = Bitch\n"); 
	printf("X = Shut up\n");  
	printf("Y = Cunt\n");
	printf("Press on left joystick will bring a condom ascii art\n");
	printf("Push up on left joystick will bring a middle finger ascii art\n");
	
	printf("pressing - will clear the screen (including this guide) \n");
	
	while(appletMainLoop())
    {
        //Scan all the inputs. This should be done once for each frame

        padUpdate(&pad);
        u64 kDown = padGetButtonsDown(&pad);

		
/*



    HidNpadButton_A             = BITL(0),  ///< A button / Right face button
    HidNpadButton_B             = BITL(1),  ///< B button / Down face button
    HidNpadButton_X             = BITL(2),  ///< X button / Up face button
    HidNpadButton_Y             = BITL(3),  ///< Y button / Left face button
    HidNpadButton_StickL        = BITL(4),  ///< Left Stick button
    HidNpadButton_StickR        = BITL(5),  ///< Right Stick button
    HidNpadButton_L             = BITL(6),  ///< L button
    HidNpadButton_R             = BITL(7),  ///< R button
    HidNpadButton_ZL            = BITL(8),  ///< ZL button
    HidNpadButton_ZR            = BITL(9),  ///< ZR button
    HidNpadButton_Plus          = BITL(10), ///< Plus button
    HidNpadButton_Minus         = BITL(11), ///< Minus button
    HidNpadButton_Left          = BITL(12), ///< D-Pad Left button
    HidNpadButton_Up            = BITL(13), ///< D-Pad Up button
    HidNpadButton_Right         = BITL(14), ///< D-Pad Right button
    HidNpadButton_Down          = BITL(15), ///< D-Pad Down button
    HidNpadButton_StickLLeft    = BITL(16), ///< Left Stick pseudo-button when moved Left
    HidNpadButton_StickLUp      = BITL(17), ///< Left Stick pseudo-button when moved Up
    HidNpadButton_StickLRight   = BITL(18), ///< Left Stick pseudo-button when moved Right
    HidNpadButton_StickLDown    = BITL(19), ///< Left Stick pseudo-button when moved Down
    HidNpadButton_StickRLeft    = BITL(20), ///< Right Stick pseudo-button when moved Left
    HidNpadButton_StickRUp      = BITL(21), ///< Right Stick pseudo-button when moved Up
    HidNpadButton_StickRRight   = BITL(22), ///< Right Stick pseudo-button when moved Right
    HidNpadButton_StickRDown    = BITL(23), ///< Right Stick pseudo-button when moved Left
    HidNpadButton_LeftSL        = BITL(24), ///< SL button on Left Joy-Con
    HidNpadButton_LeftSR        = BITL(25), ///< SR button on Left Joy-Con
    HidNpadButton_RightSL       = BITL(26), ///< SL button on Right Joy-Con
    HidNpadButton_RightSR       = BITL(27), ///< SR button on Right Joy-Con
	
*/		
		
		
		if(kDown & HidNpadButton_ZL)
		{
			printf(" HAHAHAHAHAHA.");
		}
		
		if(kDown & HidNpadButton_ZR)
		{
			printf(" LOL.");
		}
		
		if(kDown & HidNpadButton_R)
		{
			printf(" Suck me.");
		}
		
		if(kDown & HidNpadButton_L)
		{
			printf(" Suck my cock.");
		}
		
		if(kDown & HidNpadButton_B)
		{
			printf(" Bitch.");
		}

		if(kDown & HidNpadButton_X)
		{
			printf(" Shut up.");
		}
		
		if(kDown & HidNpadButton_Y)
		{
		printf(" Cunt");
		}
		
		if(kDown & HidNpadButton_StickL) 
		{
		printf("\n\n\n"); 	
		printf("\t   _/~\\_\n");
		printf("\t  /     \\\n");	
		printf("\t (       )\n");
		printf("\t | - -  -|\n");
		printf("\t } -  -  {\n");
		printf("\t }- -  - {\n");	
		printf("\t } - -  -{\n");
		printf("\t }-  - - {\n");
		printf("\t }- -  - {\n");
		printf("\t } - - - {\n");
		printf("\t | - - - |\n");
		printf("\t |_______|\n");
		printf("\t(_________)\n");
		printf("\n\n");

		}

		if(kDown & HidNpadButton_StickLUp) 
		{
		printf("\n\n");		
		printf("\t         /\"\\ \n");
		printf("\t        |\\./| \n");
		printf("\t        |   | \n");
		printf("\t        |   | \n");
		printf("\t        |>~<| \n");
		printf("\t        |   | \n");
		printf("\t     /'\\|   |/'\\..\n");
		printf("\t /~\\|   |   |   | \\ \n");
		printf("\t|   |   |   |   |  \\ \n");
        printf("\t|   |   |   |   |   \\ \n");
        printf("\t| ~   ~   ~   ~ |`   ) \n");
        printf("\t|                   / \n");
        printf("\t \\                 / \n");
        printf("\t  \\               / \n");
        printf("\t   \\            / \n");
        printf("\t    |          | \n");
        printf("\t    |          | \n");
        printf("\t    |          | \n");
		printf("\n\n");
		
		
		
		}				
				
				
		

		if(kDown & HidNpadButton_Minus)
		{
		consoleClear();

		}
		
		
		if(kDown & HidNpadButton_A)
		{
			printf(" Fuck You");
		}
		
		
		
        if (kDown & HidNpadButton_Plus) break; // break in order to return to hbmenu
		
		consoleUpdate(NULL);
		

    }

    consoleExit(NULL);
    return 0;
}
