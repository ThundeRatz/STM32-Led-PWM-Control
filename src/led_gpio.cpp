/**
 * @file led_gpio.cpp
 *
 * @brief Led_Gpio class source
 *
 * @date 03/2025
 */

 #include "led_gpio.hpp"

 LedGpio::LedGpio(GPIO_TypeDef* port, uint16_t pin, GPIO_PinState on_state) : port(port), pin(pin), on_state(on_state) {
     // Implemente as inicializações

     this->off();
 }

 void LedGpio::on() {
     // Implemente o código para acender o LED
 }

 void LedGpio::off() {
     // Implemente o código para apagar o LED
 }

 void LedGpio::toggle() {
     // Implemente o código para inverter o estado do LED
 }
