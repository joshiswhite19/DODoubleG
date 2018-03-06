/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
#include <asf.h>
#include "delay.h"
//#include <stdio_serial.h>
#include "conf_board.h"
#include "conf_clock.h"



int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */

	board_init();
	sysclk_init();
	
	//bool ButLevel;

	/* Insert application code here, after the board has been initialized. */
	
	while(1)
	{
		/*ButLevel = ioport_get_pin_level(GPIO_PUSH_BUTTON_1);
		
		if(ButLevel)
		{
			LED_On(LED0);
		} else{
			LED_Off(LED0);
		}
		*/
		
		LED_On(LED0);
		delay_ms(200);
		LED_Off(LED0);
		delay_ms(800);
		
	}
	
	
}
