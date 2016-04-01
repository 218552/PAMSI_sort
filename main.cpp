#include <iostream>
#include <ctime>
#include "stoper.h"
#include "tabd.h"
using namespace std;


int main(){
int x=5000;
stoper s;
cout << "Tablica nr 1" << endl;
tabd tab1;
s.start();
tab1.wypelnijtab1(x, 1);   /*wypelnianie tablicy x-ma elementami z zastosowaniem powiekszania o 1*/
s.stop();
cout << "Tablica nr 2" << endl;
tabd tab2;
s.start();
tab2.wypelnijtab1(x, 500); /*wypelnianie tablicy x-ma elementami z zastosowaniem powiekszania o 500*/
s.stop();
cout << "Tablica nr 3" << endl;
tabd tab3;
s.start();
tab3.wypelnijtab2(x);     /*wypelnianie tablicy x-ma elementami z zastosowaniem podwajania*/
s.stop();
}
