#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"


const uint LED_PIN = 25;

int main()
{
    stdio_init_all();
    
    while (1)
    {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}