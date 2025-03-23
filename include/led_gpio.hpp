/**
 * @file led_gpio.hpp
 *
 * @brief Led_Gpio class header
 *
 * @date 03/2025
 */

 #ifndef LED_GPIO_HPP
 #define LED_GPIO_HPP

 #include <cstdint>
 #include <gpio.h>
 #include <stm32f1xx_hal_gpio.h>

 /**
  * @brief Class for controlling a LED with GPIO
  */
 class LedGpio {
 public:
     /**
      * @brief Constructor for LedGpio class
      *
      * @param port LED port
      * @param pin LED pin
      * @param on_state GPIO pin state when LED is on
      */
     LedGpio(GPIO_TypeDef* port, uint16_t pin, GPIO_PinState on_state = GPIO_PIN_SET);

     /**
      * @brief Turn on the LED
      */
     void on();

     /**
      * @brief Turn off the LED
      */
     void off();

     /**
      * @brief Toggle the LED
      */
     void toggle();

 private:
     GPIO_TypeDef* port;
     uint16_t      pin;
     GPIO_PinState on_state;
 };

 #endif  // LED_GPIO_HPP
