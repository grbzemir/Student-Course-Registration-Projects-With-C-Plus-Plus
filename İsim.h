    #ifndef ISIM_H
    #define ISIM_H

    

    class Isim
    {
    private:
    char ad[30];
    char soyad[30];

    public:
    Isim();
    Isim(char *,char *);
    ~Isim();

    void setAd(char *);
    void setSoyad(char *);

    char * getAd();
    char * getSoyad();

    void ekle(char * , char * );
    void goster();

    };



    #endif 
