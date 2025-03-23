/**
 * @file led_pwm.cpp
 *
 * @brief LedPwm class implementation
 *
 * @date 03/2025
 */

 #include "led_pwm.hpp"
// Inclua os arquivos necessários

 LedPwm::LedPwm(
     TIM_HandleTypeDef* handle, void (*init_function)(), uint32_t led_channel) :
     handle(handle), led_channel(led_channel) {

     // Implemente as inicializações
 }

 void LedPwm::set_intensity(uint8_t intensity) {
     // Implemente o código para setar a intensidade do Led
 }
