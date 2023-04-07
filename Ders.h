#ifndef DERS_H
#define DERS_H

class Ders

{

   private:
   int dersKodu;
   char dersAdi[30];

   public:
   Ders();
   Ders(int,char *);
    ~Ders();

    void setDersKodu(int);
    void setAd(char *);
    int getdersKodu();
    char * getdersAdi();

    void kaydet(int,char *);
    void goster();
   
};

#endif 




