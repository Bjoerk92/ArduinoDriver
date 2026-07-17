/**
 * @file pin.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Interface access to the pin drivers. 
 * @version 0.1
 * @date 2026-07-17
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#include "Atmega.h"
#include <stdint.h>

typedef enum PinMode_etag {
    INPUT = 0,
    OUTPUT = 1,
} PinMode_e;

void setPinMode(uint8_t pin, PinMode_e mode);