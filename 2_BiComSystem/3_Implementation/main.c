/*
 This is the Project Main.c file done by Group 57
 For BiCom System
 */
#include "MyStm32f407xx.h"

//Declaring a variable button(btn)
#define btn ENABLE

// Delay Initialization
void delay(void)
{
	for (uint32_t i=0; i<500000; i++);
}

//Main function
int main(void)
{
	int count = 0;
    //Button Initialization
	GPIO_Handle_t Gpiobtn;
	Gpiobtn.pGPIOx = GPIOA;
	Gpiobtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	Gpiobtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	Gpiobtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
	Gpiobtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&Gpiobtn);

	//LEDs Initialization
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Handle_t GpioLed1;
	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_Init(&GpioLed1);

	GPIO_Handle_t GpioLed2;
	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_Init(&GpioLed2);

	GPIO_Handle_t GpioLed3;
	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_Init(&GpioLed3);

	GPIO_Handle_t GpioLed4;
	GpioLed4.pGPIOx = GPIOD;
	GpioLed4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_Init(&GpioLed4);

	while(1)
	{
		//Checking the button how many times pressed
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == btn)
		{
			count++;
		}
		if(count == 1)  // If the button is pressed Once - All LEDs should glow
		{
			delay();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
		}

		if(count == 4) //If the button is pressed Twice - All LEDs should turn off
		{
			delay();
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
			GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
		}

		if(count==9) //If the button is pressed Thrice - LEDs should glow in clockwise
		{
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			delay();
			delay();
		}

		if(count==12) //If the button is pressed Four times - LEDs should glow in Anticlockwise
		{
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
			delay();
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
			delay();
			delay();
		}
	}
}
