/**
 * @file led_gpio.cpp
 *
 * @brief Led_Gpio class source
 *
 * @date 03/2025
 */

 #include "led_gpio.hpp"

 LedGpio::LedGpio(GPIO_TypeDef* port, uint16_t pin, GPIO_PinState on_state) : port(port), pin(pin), on_state(on_state) {
    this->off();
 }

 void LedGpio::on() {
    HAL_GPIO_WritePin(this->port, this->pin, this->on_state);
 }

 void LedGpio::off() {
    GPIO_PinState off_state = ((this->on_state == GPIO_PIN_RESET) ? GPIO_PIN_SET : GPIO_PIN_RESET);

    HAL_GPIO_WritePin(this->port, this->pin, off_state);
 }

 void LedGpio::toggle() {
    HAL_GPIO_TogglePin(this->port, this->pin);
 }
