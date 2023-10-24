#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Produkt{
    string nazwa;
    float cena;
};

void zadanie1(int Min,int Max){
    int number;

    cout<<"Nieparzyste z przedziału <300;1200>: ";
    for(number=Min; number<=Max; number ++){
        if (number %2!=0) {
            cout << number << "  ";
        }
      else if (number %100==0) {
          cout<<" *** ";
            if(number %400==0){
                cout<<"\n";
        }
      }

    }
}
 int zad2_ileUjemnych (const int AA[10]){
    int ujemne=0;
    for (int i=0;i<10;i++){
        if(AA[i]<0)
            ujemne++;
    }
    return ujemne;
}
int*  zad2_kopiujUjemne(const int AA[10],int ujemne){
    int* BB= new int[ujemne];
    int indeks=0;
    for(int i=0;i<10;i++){
        if(AA[i]<0){
            BB[indeks]=AA[i];
            indeks++;
        }
    }
    return BB;
}

float zad3(float Km){

    float miles= Km/1.6;
    cout<<"Po konwersji mile: "<<miles<<endl;

    float mila_morska=Km/1.85;
    cout<<"Po konwersji mile morskie: "<<mila_morska<<endl;


}

bool porownajCenyMalejaco(const Produkt& a, const Produkt& b){
    return a.cena>b.cena;
}



int main(){
    //Zad 1
   int min = 300 ,max =1200;

    zadanie1(min,max);

    //zad 2
/*
    static int AA [10];
    int liczba;
    cout<<"Podaj 10 liczb: \n";
    for(int counter=0;counter<10;counter++){

        cout<<"Podaj liczbe nr  "<<counter +1<< ": ";
        cin>> AA[counter];
    }

    int ujemne= zad2_ileUjemnych(AA);
    int* BB= zad2_kopiujUjemne(AA, ujemne);

    //BB wypisuje ujemne
    cout<<"Liczby ujemne w BB: ";
    for (int i=0;i<ujemne;i++){
        cout<<BB[i]<<" ";
    }

    cout<<"\n Tyle było ujemnych: "<<ujemne<<endl;
    cout<< "\n Pominiętych: "<<10-ujemne<<endl;


    //zad3
    float km;
    cout<<"Podaj odleglosc w kilometrach: ";
    cin>> km;
    cout<<" ";

    zad3(km);
  */

  //zad 4
   // int Nazwa;
    //float Cena;
    Produkt produkty[10];

    for(int i=0;i<10;i++){
        cout<<"Wpisz nazwe produktu: ";
        cin>>produkty[i].nazwa;
        cout<<"Wpisz cene produktu: ";
        cin>>produkty[i].cena;

    }

    //sortuj malejaco
    sort(produkty, produkty+10,porownajCenyMalejaco);

    cout<<"Posortowane malejąco produkty: ";
    for(int i=0;i<10;i++){
        cout<<"Nazwa: "<<produkty[i].nazwa<<", cena: "<<produkty[i].cena<<endl;

    }


   // delete[] BB;
    return 0;
}