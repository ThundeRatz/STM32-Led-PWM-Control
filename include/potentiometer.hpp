/**
 * @file potentiometer.hpp
 *
 * @brief Potentiometer class
 *
 * @date 03/2025
 */

#ifndef POTENTIOMETER_HPP
#define POTENTIOMETER_HPP

#include <adc.h>
#include <array>

/**
 * @brief Class for acquiring a potentiometer data
 */
class Potentiometer {
public:
    /**
     * @brief Constructor for Potentiometer class
     *
     * @param adc_handler Pointer to HAL adc
     */
    Potentiometer(ADC_HandleTypeDef* handle, void (*init_function)());

    /**
     * @brief Get the potentiometer reading
     *
     * @return uint16_t potentiometer reading
     */
    uint8_t get_value();

private:
    ADC_HandleTypeDef* handle;

    std::array<uint32_t, 1> buffer = {0};
};

#endif  // POTENTIOMETER_HPP
