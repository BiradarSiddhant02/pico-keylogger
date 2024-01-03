#include "GPIO_INIT.h"
#include "pico/error.h"
#include "pico/stdlib.h"

/**
 * @brief Initializes the GPIO pins used for bit manipulation.
 * 
 * This function initializes GPIO pins 2-9 as output pins for bit manipulation.
 * Each pin corresponds to a specific bit position (0-7) in the data byte.
 * 
 * @note This function should be called before performing any bit manipulation operations.
 */
void _gpio_init(void){
    
    gpio_init(2); gpio_set_dir(2, GPIO_OUT); // bit0
    gpio_init(3); gpio_set_dir(3, GPIO_OUT); // bit1
    gpio_init(4); gpio_set_dir(4, GPIO_OUT); // bit2
    gpio_init(5); gpio_set_dir(5, GPIO_OUT); // bit3

    gpio_init(6); gpio_set_dir(6, GPIO_OUT); // bit4
    gpio_init(7); gpio_set_dir(7, GPIO_OUT); // bit5
    gpio_init(8); gpio_set_dir(8, GPIO_OUT); // bit6
    gpio_init(9); gpio_set_dir(9, GPIO_OUT); // bit7

}

/**
 * @brief Writes data to GPIO pins based on the given input.
 * 
 * This function writes the individual bits of the input data to GPIO pins 2-9.
 * Each bit of the input data corresponds to a specific GPIO pin, with the least significant bit
 * being written to GPIO pin 2 and the most significant bit being written to GPIO pin 9.
 * 
 * @param data The input data to be written to the GPIO pins.
 */
void _gpio_write(uint8_t data){
    // Write each bit of the input data to the corresponding GPIO pin
    gpio_put(2, (data & 0x01) >> 0);
    gpio_put(3, (data & 0x02) >> 1);
    gpio_put(4, (data & 0x04) >> 2);
    gpio_put(5, (data & 0x08) >> 3);

    gpio_put(6, (data & 0x10) >> 4);
    gpio_put(7, (data & 0x20) >> 5);
    gpio_put(8, (data & 0x40) >> 6);
    gpio_put(9, (data & 0x80) >> 7);
}

/**
 * @brief Turns off all GPIO pins.
 * 
 * This function sets all GPIO pins 2-9 to a low state (0), effectively turning them off.
 */
void _gpio_off(void){
    // Set all GPIO pins to a low state
    gpio_put(2, 0);
    gpio_put(3, 0);
    gpio_put(4, 0);
    gpio_put(5, 0);

    gpio_put(6, 0);
    gpio_put(7, 0);
    gpio_put(8, 0);
    gpio_put(9, 0);
}

/**
 * @brief Turns on all GPIO pins.
 * 
 * This function sets all GPIO pins 2-9 to a high state (1), effectively turning them on.
 */
void _gpio_on(void){
    // Set all GPIO pins to a high state
    gpio_put(2, 1);
    gpio_put(3, 1);
    gpio_put(4, 1);
    gpio_put(5, 1);

    gpio_put(6, 1);
    gpio_put(7, 1);
    gpio_put(8, 1);
    gpio_put(9, 1);
}

/**
 * @brief Writes a sequence of data to GPIO pins in a snake-like pattern.
 * 
 * This function writes a sequence of data to GPIO pins 2-9 in a snake-like pattern.
 * The sequence starts with the least significant bit (LSB) and progresses to the most significant bit (MSB).
 * Each bit of the sequence is written to a corresponding GPIO pin, with a delay of 100 milliseconds between each write.
 */
void _gpio_snake(void){
    _gpio_write(1); sleep_ms(100);
    _gpio_write(2); sleep_ms(100);
    _gpio_write(4); sleep_ms(100);
    _gpio_write(8); sleep_ms(100);
    _gpio_write(16); sleep_ms(100);
    _gpio_write(32); sleep_ms(100);
    _gpio_write(64); sleep_ms(100);
    _gpio_write(128); sleep_ms(100);
}

