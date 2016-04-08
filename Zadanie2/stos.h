#include "tabd.h"
#include "stoper.h"
#include "interfejsstosu.h"
#include <iostream>
#include <ctime>

class stos: public interfejsstosu, private tabd{
int rozmiarstosu;
public:
virtual void push(int element);
virtual void pop();
virtual int rozmiarstsu();
stos();
};
