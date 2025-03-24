/**
 * @file led_pwm.cpp
 *
 * @brief LedPwm class implementation
 *
 * @date 03/2025
 */

#include "led_pwm.hpp"
#include "utils.hpp"


 LedPwm::LedPwm(
     TIM_HandleTypeDef* handle, void (*init_function)(), uint32_t led_channel) :
     handle(handle), led_channel(led_channel) {

    init_function();
    HAL_TIM_PWM_Start(handle, led_channel);
    this->set_intensity(0);
 }

 void LedPwm::set_intensity(uint8_t intensity) {
    uint16_t intensity_compare = utils::map(intensity, 0U, 100, 0, 1000);
    __HAL_TIM_SET_COMPARE(this->handle, this->led_channel, intensity_compare);
 }
