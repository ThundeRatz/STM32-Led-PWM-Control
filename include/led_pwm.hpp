/**
 * @file led_pwm.hpp
 *
 * @brief LedPwm class
 *
 * @date 03/2025
 */

#ifndef LED_PWM_HPP
#define LED_PWM_HPP

#include <gpio.h>
#include <tim.h>

/**
 * @brief Class for controlling an LED's intensity with PWM
 */
class LedPwm {
public:
    /**
     * @brief Constructor for LedPwm class
     *
     * @param tim_handler Pointer to HAL timer
     * @param led_channel Led channel number
     */
    LedPwm(TIM_HandleTypeDef* tim_handler, void (*init_function)(), uint32_t led_channel);

    /**
     * @brief Set the LED's intensity
     *
     * @param intensity   Led's intensity to be set
     */
    void set_intensity(uint8_t intensity);

private:
    TIM_HandleTypeDef* handle;
    uint32_t           led_channel;
};

#endif  // LED_PWM_HPP
