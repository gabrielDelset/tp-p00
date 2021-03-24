class GpioLed
!!!149132.cpp!!!	set(in s : bool = true) : void
  if (get_anode() == false) {
    s = !s;
  }
  digitalWrite (get_id(), s);
!!!149260.cpp!!!	begin() : void
  pinMode (get_id(), OUTPUT);
  set (false);

!!!156300.cpp!!!	state() : bool
  bool b = digitalRead (get_id());

  if (get_anode() == false) {
    b = !b;
  }
  return b;

