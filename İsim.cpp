#include "Isim.H"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


Isim :: Isim()

{


}

Isim :: Isim(char *ad,char *soyad)

{
    strcpy(this->ad,ad);
    strcpy(this->soyad,soyad);

}

Isim :: ~Isim()
{

    strcpy(this->ad,"");
    strcpy(this->soyad,"");




}
 
 void Isim ::setAd()
 {
   
   strcpy(this->ad,ad);

 }
void Isim ::setSoyad()
{
    strcpy(this->soyad,soyad);

}

char * Isim ::getAd()
{

    return ad;


}
char * Isim ::getSoyad()
{
    
        return soyad;

}
void Isim ::ekle(char * , char * )
{

    strcpy(this->ad,ad);
    strcpy(this->soyad,soyad);


}
void Isim ::goster()
{

    cout<<"Ad : "<<ad<<endl;
    cout<<"Soyad : "<<soyad<<endl;

}
