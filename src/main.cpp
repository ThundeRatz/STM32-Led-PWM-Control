/**
 * @file main.cpp
 *
 * @brief Main function
 */

#include "mcu.hpp"
#include "led_gpio.hpp"
#include "led_pwm.hpp"
#include "potentiometer.hpp"
#include "utils.hpp"

/*****************************************
 * Private Constant Definitions
 *****************************************/

// defina constantes aqui, se necessário

/*****************************************
 * Main Function
 *****************************************/

int main() {
    hal::mcu::init();

    Potentiometer potentiometer(&hadc1, MX_ADC1_Init);
    LedPwm        led_pwm(&htim3, MX_TIM3_Init, TIM_CHANNEL_4);
    LedGpio       led_gpio(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);

    for (;;) {
        uint16_t potentiometer_value = potentiometer.get_value();
        uint16_t intensity = utils::map(potentiometer_value, 0, 4096, 0, 100);
        led_pwm.set_intensity(intensity);
        if (intensity > 50) {
            led_gpio.on();
        } else {
            led_gpio.off();
        }
    }
}
