/**
 * @file test_led_pwm.cpp
 *
 * @brief Test LEDs with PWM
 *
 * @date 03/2025
 */

 #include "mcu.hpp"
 #include "led_pwm.hpp"

 int main() {
    hal::mcu::init();
    LedPwm led(&htim3, MX_TIM3_Init, TIM_CHANNEL_4);

     for (;;) {
        for(uint16_t i =0 ; i<100; i++){
            led.set_intensity(i);
            hal::mcu::sleep(20);
        }

     }
 }
