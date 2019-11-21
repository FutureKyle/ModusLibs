#include "cybsp.h"
#include "cy_rgb_led.h"

typedef enum
{
	RED = CY_RGB_LED_COLOR_RED,
	// The green LED is quite a bit brighter than the red and blue LEDs so tone it down a bit
	GREEN = (0x00003F00),
	BLUE = CY_RGB_LED_COLOR_BLUE,
	YELLOW = CY_RGB_LED_COLOR_RED|(0x00003F00),
	CYAN = CY_RGB_LED_COLOR_BLUE|(0x00003F00),
	MAGENTA = CY_RGB_LED_COLOR_RED|CY_RGB_LED_COLOR_BLUE,
	//WHITE = CY_RGB_LED_COLOR_RED|CY_RGB_LED_COLOR_GREEN|CY_RGB_LED_COLOR_BLUE,
	WHITE = CY_RGB_LED_COLOR_RED|(0x00003F00)|CY_RGB_LED_COLOR_BLUE,
	BLACK = (~WHITE)&WHITE
} color_t;

cy_rslt_t init_colors( void );
void color( color_t color );
