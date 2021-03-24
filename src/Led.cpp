//							
#include "Led.h"

//Si la led est éteinte, un appel à cette opération l'allume, si elle est allumée, cela l'éteint.
void Led::toggle() {
  set (!state());
}

Led::Led(int i, bool a) : id (i) , anode (a) {
}

Led::~Led(){
}

