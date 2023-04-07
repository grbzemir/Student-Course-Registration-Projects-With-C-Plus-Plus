#ifndef DOGUMTARIHI_H
#define DOGUMTARIHI_H

using namespace std;

 class DogumTarihi
 
  {
    
    private:
    int gun;
    int ay;
    int yil;

    public:
    DogumTarihi();
    DogumTarihi(int,int,int);
    ~DogumTarihi();

    void setGun(int);
    void setAy(int);
    void setYil(int);

    int getGun();
    int getAy();
    int getYil();

    void ekle(int , int , int);
    void goster();



   

  };





#endif 

