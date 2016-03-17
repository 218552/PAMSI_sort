#include <iostream>
using namespace std;
class  tabd{            /*tworzymy klase, w ktorej bedziemy zajmowac sie nasza tablica*/
int rozmiar;            /*rozmiar tablicy*/
int* w1;                /*wskaznik1*/
int* w2;                /*wskaznik2*/
public:
void zrobtab(){             /*metoda pozwalajaca na stworzenie tablicy*/
    rozmiar=10;             /*przyjmujemy rozmiar rowny 10*/
    w1=new int[rozmiar];    /*alokujemy pamiec*/
    }
void zniszcztab(){      /*metoda pozwalajaca zniszczyc tablice, na ktora wskazuje wskaznik1*/
    delete[] w1;
    w1=NULL;
    }
void zniszcztab2(){     /*metoda pozwalajaca zniszczyc tablice, na ktora wskazuje wskaznik2*/
    delete[] w2;
    w2=NULL;
    }
void wypelnijtab(){     /*metoda pozwalajaca na wypelnienie tablicy liczba 9*/
    cout << "Podaj ilosc elementow, jaka chcesz wypelnic tablice: ";
    int ilosc;
    cin >> ilosc;
    for(int i=0; i<ilosc; i++){
        if(rozmiar>i) {
        w1[i]=9;
        }
    }
    }
void wypisztab(){       /*metoda, ktora wypisuje wszystkie elementy tablicy*/
    for(int i=0; i<rozmiar; i++){
    cout<<w1[i]<<'\t';
    }
    cout<<endl;
    }
};

int main(){
tabd tab1;
tab1.zrobtab();
tab1.wypelnijtab();
tab1.wypisztab();
tab1.zniszcztab();
}
