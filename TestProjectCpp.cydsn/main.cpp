/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

extern "C"
{
#include <project.h>
}

class A
{
public:
	virtual void Test() = 0;

};

class B: public A
{
public:
	void Test(){};
	void LedOn()
	{
		CyPinLedPower_Write(1);
	}

	void LedOff()
	{
		CyPinLedPower_Write(0);
	}
};

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

	B b;
    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
    	b.LedOn();
		CyDelay(1000);
		b.LedOff();
		CyDelay(1000);
		b.LedOn();
    }
}

/* [] END OF FILE */
