#include <Arduino.h>

#include "GpioLed.h"

GpioLed::GpioLed (int i, bool a) : Led (i, a) {
}

//Modification de l'état de la led.
//"s" est l'état que l'on veut appliquer à la led, true pour led allumée et false pour led éteinte.

void GpioLed::set (bool s) {
  if (get_anode() == false) {
    s = !s;
  }
  digitalWrite (get_id(), s);
}

void GpioLed::begin() {
  pinMode (get_id(), OUTPUT);
  set (false);

}

bool GpioLed::state() {
  bool b = digitalRead (get_id());

  if (get_anode() == false) {
    b = !b;
  }
  return b;

}
