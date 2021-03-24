#ifndef _LED_H
#define _LED_H

//							
//				
class Led {
  public:
    //Modification de l'état de la led.
    //"s" est l'état que l'on veut appliquer à la led, true pour led allumée et false pour led éteinte.
    virtual void set(bool s = true) = 0;

    //Si la led est éteinte, un appel à cette opération l'allume, si elle est allumée, cela l'éteint.
    virtual void toggle();


  private:
    //La propriété id définie par la contrainte C3. Il s'agit d'un entier qui sera accessible
    //uniquement en lecture seule.
    
    int id;

    bool anode;


  public:
    virtual void begin() = 0;

    inline const bool get_anode() const;

    inline const int get_id() const;

    Led(int i, bool a = true);

    virtual ~Led();

    virtual bool state() = 0;

};
inline const bool Led::get_anode() const {
  return anode;
}

inline const int Led::get_id() const {
  return id;
}

#endif
