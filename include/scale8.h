// https://github.com/FastLED/FastLED/blob/master/src/lib8tion/scale8.h
#pragma once

#include <stdint.h>

inline uint8_t scale8(uint8_t i, uint8_t scale) {
    return (((uint16_t)i) * (1+(uint16_t)(scale))) >> 8;
}

inline void nscale8x3(uint8_t& r, uint8_t& g, uint8_t& b, uint8_t scale) {
    uint16_t scale_fixed = scale + 1;
    r = (((uint16_t)r) * scale_fixed) >> 8;
    g = (((uint16_t)g) * scale_fixed) >> 8;
    b = (((uint16_t)b) * scale_fixed) >> 8;
}
