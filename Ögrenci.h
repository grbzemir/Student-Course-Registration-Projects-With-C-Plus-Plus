#ifndef OGRENCI_H
#define OGRENCI_H
#include "Ders.h"
#include "DogumTarihi.h"
#include "Isim.h"



class Ogrenci
{
    private:
    int numara;
    int ortalama;
    DogumTarihi dogumT;
    Ders ders;
    Isim isim;

    public:
    Ogrenci();
    Ogrenci(DogumTarihi , Ders  , Isim  , int , int );
    ~Ogrenci();

    void setNumara(int);
    void setOrtalama(int);
    
    int getNumara();
    int getOrtalama();
    
    void Kaydet(DogumTarihi d, Ders dr , Isim i , int no , int ort );
    void goster();




};

#endif 


