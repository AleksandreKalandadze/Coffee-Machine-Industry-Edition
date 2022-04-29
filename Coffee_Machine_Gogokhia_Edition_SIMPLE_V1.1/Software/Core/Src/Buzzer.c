#include "Buzzer.h"


void _tone(float frequency, uint16_t duration, uint16_t SilentDuration)
{
	uint32_t delay_us = 0;
	delay_us = 1000000/frequency;
	
	uint32_t counter = 0;
	while ( delay_us*counter < duration*1000)
	{
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_SET);
		DWT_Delay(delay_us/2);
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_RESET);
		DWT_Delay(delay_us/2);
		counter++;
	}
	HAL_Delay(SilentDuration);
}

// 100
// 1000



void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration){

  //Examples:
  //  bendTones (880, 2093, 1.02, 18, 1);
  //  bendTones (note_A5, note_C7, 1.02, 18, 0);

  if(silentDuration==0) {silentDuration=1;}

  if(initFrequency < finalFrequency)
  {
    for (int i=initFrequency; i<finalFrequency; i=i*prop) {
      _tone(i, noteDuration, silentDuration);
    }

  } else{

    for (int i=initFrequency; i>finalFrequency; i=i/prop) {
      _tone(i, noteDuration, silentDuration);
    }
  }
}


void buzzer_beep(void)
{
	_tone(2000,100,0);
}

void buzzer_success(void)
{
	_tone(NOTE_E6,50,100);   //D6    SUCCESS!
    _tone(NOTE_G6,50,80);    //E6
    _tone(NOTE_D7,250,0); 
}

void buzzer_fail(void)
{
	_tone(NOTE_E5,50,30);
  _tone(NOTE_A6,55,25);
  _tone(NOTE_E6,50,60);
}
