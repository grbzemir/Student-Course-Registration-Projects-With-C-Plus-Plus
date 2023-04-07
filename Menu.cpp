#include "Menu.h"
#include "DogumTarihi.h"
#include "Ders.h"
#include "Isim.h"
#include "Ogrenci.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

    Ogrenci o1;
    DogumTarihi dt1;
    Ders d1;
    Isim i1;


Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}


void Menu::inputAl(char * ptr)
{

    scanf("%[^\n]s",ptr);
    
}

int Menu::anaMenu()  
{

     int secim;
     cout<<"Ogrenci Ders Kayit Sistemi"<<endl;
     cout<"[1] Yeni Kayit"<<endl;
     cout<<"[2] Kayitlari Listele"<<endl;
     cout<<"[3] Kayit Sil"<<endl;
     cout<<"[4] Kayit Bul"<<endl;
     cout<<"[5] En Yuksek Ortalama"<<endl;
     cout<<"[0] Cikis"<<endl;
     cout<<"Seciminiz:";
     system("cls");
     cin>>secim;
    
     return secim;

}

void Menu::giris()
{

    int secim = anaMenu();
    while(secim!=0)
    {

        switch (secim)
        {
         
            case 1:
            yenikayit();
            break;

            case 2:
            listele();
            break;

            case 3:
            kayitsil();
            break;

            case 4:
            kayitbul();
            break;

            case 5:
            enYuksekOrtalama();
            break;

            case 0:
            break;

            default: 
            cout<<"Hatali secim"<<endl;
            break;
        }

        secim = anaMenu();

    }

    cout<<"Cikis yapiliyor..."<<endl;
       
}

void Menu::yenikayit()
{
    

    char kelime[100];
    cout<<"Yeni Kayit Ekrani..."<<endl;
    cout<<"Turkiye Cumhuriyeti Kimlik Bilgileri"<<endl;
    cout<<"Ad:";
    inputAl(kelime);
    i1.setAd(kelime);

    cout<<"Soyad:";
    inputAl(kelime);
    i1.setSoyad(kelime);

    cout<<"Dogum Tarihi Bilgileri"<<endl;
    cout<<"Dogum Tarihi:"<<endl;
    cout<<"Gun:";
    cin>>kelime;
    dt1.setGun(atoi(kelime));

    cout<<"Ay:";
    cin>>kelime;
    dt1.setAy(atoi(kelime));

    cout<<"Yil:";
    cin>>kelime;
    dt1.setYil(atoi(kelime));

    cout<<"Ders Bilgileri:"<<endl;
    cout<<"Ders Kodu:";
    inputAl(kelime);
    d1.setDersKodu(atoi(kelime));

    cout<<"Ders Adi:";
    inputAl(kelime);
    d1.setdersAdi(kelime);

    cout<<"Numarasi"<<endl;
    inputAl(kelime);
    o1.setNumara(atoi(kelime));

    cout<<"Ortalama"<<endl;
    inputAl(kelime);
    o1.setOrtalama(atoi(kelime));

    ofstream file("ogrenci.txt",ios::app);

    o1.kaydet(dt1,i1,d1,o1.getNumara(),o1.getOrtalama());
    
    file.write((char * )&o1,sizeof(Ogrenci));
    cout<<"Kayit basariyla tamamlandi..."<<endl;
    file.close();

    o1.goster();



}

void Menu::listele()
{ 
    
    int sayac = 0;

    ifstream file("ogrenciler.txt",ios::in);

    while(file.read((char * )&o1,sizeof(Ogrenci)) != NULL )
    {
        o1.goster();
        sayac++;
        cout<<<endl;
    }

    cout<<"Listeleme tamamlandi..."<<endl;
    file.close();

    cout<<"Toplam "<<sayac<<" kayit bulundu..."<<endl;



}

void Menu::kayitsil()
{
    
    
    listele();
    int sayi;
    char kelime[100];
    bool sonuc = false;

    cout<"Ogrenci Numarasi Giriniz:";
    inputAl(kelime);
    sayi = atoi(kelime);

    ifstream file("ogrenciler.txt",ios::in);
    ofstream file2("ogrenciler2.txt",ios::app);

    while(file.read((char * )&o1,sizeof(Ogrenci)) != NULL )
    {
        
        if( sayi == o1.getNumara() )

        {

            sonuc = true;
            break;

        }

        else
        {

            file2.write((char * )&o1,sizeof(Ogrenci));

        }


    }

   
    file.close();
    file.close();

    if(!sonuc)
    cout<<sayi<<" numarali kayit bulunamadi..."<<endl;

    else
    {

        remove("ogrenciler.txt");
        rename("ogrenciler2.txt","ogrenciler.txt");
        cout<<sayi<<"Kayit silindi..."<<endl;

    }


}

void Menu::kayitbul()
{

    
    listele();
    int sayi;
    char kelime[100];
    bool sonuc = false;
    cout<"Ogrenci Numarasi Giriniz:";
    inputAl(kelime);
    sayi = atoi(kelime);

    ifstream file("ogrenciler.txt",ios::in);

    while(file.read((char * )&o1,sizeof(Ogrenci)) != NULL )
    {
        
        if( sayi == o1.getNumara() )

        {
            
            cout<<endl;
            o1.goster();
            sonuc = true;
            break;

        }


    }

   
    file.close();
    if(!sonuc)
    cout<<sayi<<" numarali kayit bulunamadi..."<<endl;




}

void Menu::enYuksekOrtalama()
{

   
    int buyuk;
    bool sonuc = false;
    Ogrenci o2;
    o2.setOrtalama(0); // 0 'a atayalım
    system("cls");

    ifstream file("ogrenciler.txt",ios::in);

    while(file.read((char * )&o1,sizeof(Ogrenci)) != NULL )
    {
        
        if( o2.getOrtalama() < o1.getOrtalama() )

        {
            o2=o1;
            cout<<endl;
            o1.goster();
            sonuc = true;
            break;

        }


    }

   
    file.close();

    cout<<"En yuksek ortalamalı ogrenci bilgisi:"<<endl;  
    o2.goster();



}


