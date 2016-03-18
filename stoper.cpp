#include "stoper.h"
#include <iostream>
#include <ctime>
using namespace std;

void stoper::start(){
    t=clock();
    }
void stoper::stop(){
    czas=(clock()-t )*1000/(double) CLOCKS_PER_SEC;
    cout<<"Czas w milisekundach: "<< czas <<'\n';
    }
