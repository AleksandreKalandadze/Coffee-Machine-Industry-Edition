#ifndef _BUZZER_H
#define _BUZZER_H


#include "stm32f1xx_hal.h"
#include <stdint.h>
#include "dwt.h"
#include <math.h>
#include <stdio.h>

#include "Sounds.h"


#define BUZZER_PORT  GPIOE
#define BUZZER_PIN	 GPIO_PIN_9


void buzzer_beep(void);
void buzzer_success(void);
void buzzer_fail(void);

void _tone(float frequency, uint16_t duration, uint16_t SilentDuration); //frequency in Hz, duration in ms
void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration);


#endif
