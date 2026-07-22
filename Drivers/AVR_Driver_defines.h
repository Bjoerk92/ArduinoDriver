/**
 * @file AVR_Driver_defines.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-07-22
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

typedef enum DRV_STATUS_ETag {
    DRV_OK = 0,
    DRV_ERROR = 1,
    DRV_NOT_SUPPORTED = 2,
} DRV_STATUS_e;