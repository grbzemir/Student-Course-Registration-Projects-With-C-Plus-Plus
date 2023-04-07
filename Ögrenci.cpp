#include "Ogrenci.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

Ogrenci::Ogrenci()
{



}

Ogrenci::~Ogrenci(DogumTarihi dt , Ders d , Isim i , int no , int ort)
{
    dogumT=dt;
    ders=d;
    isim=i;
    numara=no;
    ortalama=ort;


}

void Ogrenci::setNumara(int no)
{
    numara=no;
}


void Ogrenci::setOrtalama(int ort)
{
    ortalama=ort;
}


int Ogrenci::getNumara()
{
    return numara;
}


int Ogrenci::getOrtalama()
{
    return ortalama;
}

void Ogrenci::Kaydet(DogumTarihi dt, Ders d , Isim i , int no , int ort )
{
    dogumT=dt;
    ders=d;
    isim=i;
    numara=no;
    ortalama=ort;
}

void Ogrenci::goster()
{ 
    cout<<"---------------------------------"<<endl;
    dogumT.goster();
    ders.goster();
    isim.goster();
    cout<<"Numara:"<<numara<<endl;
    cout<<"Ortalama:"<<ortalama<<endl;
    cout<<"---------------------------------"<<endl;

}



