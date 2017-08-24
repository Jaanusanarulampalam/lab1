/*
* FileName: main.c
*
* Name: Lab1, PIC24 Oscillator configuration and GitHub with MPLABX IDE
*
* Description: The program is to compile and run an LED by toggling it inside a
* while loop at RA7(also set it up as an output). 
*
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author Date Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Jaanusan Arulampalam August 24 2017 v1.0.0 ~PIC24 oscillation
*
*
*
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
int main(void)
{
    
    // initialize the device
    SYSTEM_Initialize();
    
    /*Setting the TRISA register as an output*/
    _TRISA7 = 0;
    
    /*Clearing the register LATA*/
    _LATA7 = 0;
    
    while (1)
    {
        
        /*XOR the register with 1 to make it toggle*/
        _LATA7 = _LATA7 ^ 1;   //blinks too quick for our eyes
        
        // Add your application code
    }


return -1;

}
/**
 End of File
*/