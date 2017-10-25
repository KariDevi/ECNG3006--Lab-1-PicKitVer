/* Lab 1 first file - ID number 814002097 */
#include <p18f452.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

//Global variables
int count = 0;

void main (void)
{
    while (count <= 0x0F)
        {
            LATB = count;
            count = count + 1;
        }
}
