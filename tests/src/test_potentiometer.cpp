/**
 * @file test_potentiometer.cpp
 *
 * @brief Test potentiometer
 *
 * @date 03/2025
 */

 #include "mcu.hpp"
 #include "potentiometer.hpp"

 static uint16_t potentiometer_value = 0;

 int main() {
    hal::mcu::init();
    Potentiometer potentiometer(&hadc1, MX_ADC1_Init);

     for (;;) {
        potentiometer_value = potentiometer.get_value();
     }
 }
