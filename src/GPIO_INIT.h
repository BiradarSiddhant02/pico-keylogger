#ifndef GPIO_INIT_H
#define GPIO_INIT_H

// Include any necessary libraries here
#include <stdio.h>
#include <stdint.h>

// Define any constants or macros here

/**
 * @brief Initializes the GPIO pins.
 * 
 * This function initializes the GPIO pins for further use.
 */
void _gpio_init(void);

/**
 * @brief Writes data to the GPIO pins.
 * 
 * This function writes the specified data to the GPIO pins.
 * 
 * @param data The data to be written to the GPIO pins.
 */
void _gpio_write(uint8_t data);

/**
 * @brief Turns off the GPIO pins.
 * 
 * This function turns off the GPIO pins.
 */
void _gpio_off(void);

/**
 * @brief Turns on the GPIO pins.
 * 
 * This function turns on the GPIO pins.
 */
void _gpio_on(void);

/**
 * @brief Performs a snake pattern on the GPIO pins.
 * 
 * This function performs a snake pattern on the GPIO pins.
 */
void _gpio_snake(void);

// Declare function prototypes here

#endif // GPIO_INIT_H
