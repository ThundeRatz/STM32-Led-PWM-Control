/**
 * @file potentiometer.cpp
 *
 * @brief Potentiometer class implementation
 *
 * @date 09/2024
 */

 #include "potentiometer.hpp"
 #include <cstdint>
 // Inclua os arquivos necessários

 Potentiometer::Potentiometer(ADC_HandleTypeDef* handle, void (*init_function)()) : handle(handle) {
     // Implemente as inicializações
 }

 uint8_t Potentiometer::get_value() {
     // Implemente o código para obter o valor do potenciômetro
 }
