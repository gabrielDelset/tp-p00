#ifndef _GPIOLED_H
#define _GPIOLED_H


#include "Led.h"

class GpioLed : public Led {
  public:
    GpioLed(int i, bool a = true);

    //Modification de l'état de la led.
    //"s" est l'état que l'on veut appliquer à la led, true pour led allumée et false pour led éteinte.
    virtual void set(bool s = true);

    virtual void begin();

    virtual bool state();

};
#endif
