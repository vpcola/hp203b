#ifndef _HP203B_H_
#define _HP203B_H_

#ifdef __cpluplus
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "driver/i2c.h"

esp_err_t hp203b_init(i2c_port_t i2cnum);
esp_err_t hp203b_read_pressure(i2c_port_t i2cnum, float * pressure);
esp_err_t hp203b_read_temperature(i2c_port_t i2cnum, float * temperature);
esp_err_t hp203b_read_altitude(i2c_port_t i2cnum, float * altitude);

#ifdef __cpluplus
}
#endif

#endif
