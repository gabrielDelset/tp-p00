#ifndef _GPIOLED_H
#define _GPIOLED_H


#include "Led.h"

class GpioLed : public Led {
  public:
    GpioLed(int i, bool a = true);

    //Modification de l'�tat de la led.
    //"s" est l'�tat que l'on veut appliquer � la led, true pour led allum�e et false pour led �teinte.
    virtual void set(bool s = true);

    virtual void begin();

    virtual bool state();

};
#endif
