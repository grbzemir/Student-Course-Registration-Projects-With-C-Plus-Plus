#include "DogumTarihi.h"

using namespace std;

DogumTarihi::DogumTarihi()
{
    
}

DogumTarihi::DogumTarihi(int gun,int ay,int yil)
{
    this->gun=gun;
    this->ay=ay;
    this->yil=yil;
}

DogumTarihi::~DogumTarihi()
{
   
}

void DogumTarihi::setGun(int gun)
{
    this->gun=gun;
}

void DogumTarihi::setAy(int ay)
{
    this->ay=ay;
}


void  DogumTarihi::setYil(int yil)
{
    this->yil=yil;
}

int  DogumTarihi::getGun()
{
    return gun;
}


int  DogumTarihi::getAy()
{
    return ay;
}

int  DogumTarihi::getYil()
{
    return yil;
}

void DogumTarihi::Ekle(int , int , int)
{
    this->gun=gun;
    this->ay=ay;
    this->yil=yil;

}

void DogumTarihi::Goster()
{
    cout<<gun<<"/"<<ay<<"/"<<yil<<endl;
}


