/**
 * @file test_led_gpio.cpp
 *
 * @brief Test LED with Gpio
 *
 * @date 03/2025
 */

#include "mcu.hpp"
#include "led_gpio.hpp"

 int main() {
    hal::mcu::init();
    LedGpio led(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);

     for (;;) {
        led.on();
        hal::mcu::sleep(1000);

        led.off();
        hal::mcu::sleep(2000);
     }
 }
