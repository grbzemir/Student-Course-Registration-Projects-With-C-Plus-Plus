#include "Ders.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


Ders::Ders()
{



}

Ders::~Ders(int dk , char *da)
{
    dersKodu=dk;
    strcpy(dersAdi , da);
    



}

void Ders::setDersKodu(char *dersKodu)
{
    dersKodu=dk;
}

void Ders::setAd(char *dersAdi)
{
    strcpy(dersAdi , da);
}


char * Ders::getdersKodu()
{
    return dersKodu;
}


char * Ders::getdersAdi()
{
    return dersAdi;
}

void Ders::kaydet(int,char *)
{
    dersKodu=dk;
    strcpy(dersAdi , da);

}

void Ders::goster()
{
    cout<<"Ders Kodu:"<<dersKodu<<endl;
    cout<<"Ders Adi:"<<dersAdi<<endl;
}



