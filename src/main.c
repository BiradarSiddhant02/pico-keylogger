/**
 * @file main.c
 * @brief This file contains the main function for a Pico keylogger.
 *
 * The keylogger initializes the GPIO pins, waits for user input, and logs the pressed key along with its ASCII value.
 * It also controls an external device using the GPIO pins.
 */

#include <stdio.h>
#include <stdint.h>
#include "pico/error.h"
#include "pico/stdlib.h"
#include "GPIO_INIT.h"

int main(){

    stdio_init_all();

    char input_key = '0';

    _gpio_init();
    _gpio_on();
    sleep_ms(500);
    _gpio_off();

    while(1){
        input_key = getchar();
        printf("Key: %c ASCII: %d\n", input_key, input_key);
        _gpio_write((uint8_t)input_key);
    }
   
    return 0;
}