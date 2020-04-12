#include <stdio.h>
#include <stdlib.h>
struct saat{
    char giris[9];
};

struct otopark{
    int model;
    char plaka[9];
    char renk[9];
    struct saat giris;
};


int main()
{
    struct otopark araba[1000];
    int menusecim,i,secim;
    rty:
  printf("***************Otopark Sistemimize Hosgeldiniz***************");
  printf("\n1-Arac Ekle(5)");
  printf("\n2-Araclari Listele");
  printf("\n3-Cikis\n");
  printf("Lutfen 1-3 arasi secim yapiniz:");
  scanf("%d",&menusecim);
  if (menusecim>4 || menusecim<1){
    printf("Hatali sayi girdiniz..\n");
  }
  if (menusecim == 1){
        for (i=0;i<1;i++){
        printf("%d. Araba'nin bilgilerini giriniz:\n",i+1);
        printf("\tModel:");
        scanf("%d",&araba[i].model);
        printf("\tPlaka:");
        scanf("%s",&araba[i].plaka);
        printf("\tRenk:");
        scanf("%s",&araba[i].renk);
        printf("\tGiris Saati:");
        scanf("%s",&araba[i].giris);
    }
         printf("Arac bilgilerini girdiginiz icin tesekkur ederiz..\n");
        printf("Araclari listelememizi istiyorsaniz 1 e ,menuye donmek istiyorsaniz 2 ye basiniz..\n =");
        scanf("%d",&secim);
        if (secim ==1){
            goto jkl;
        }
        if (secim ==2){
            goto rty;
        }
}

  if (menusecim == 2){
jkl:
    for (i=0;i<1;i++){
           printf("\n%d. Araba'nin bilgileri\n Model:%d\n Plaka:%s\n Renk:%s\n Giris Saati:%s",i+1,araba[i].model,araba[i].plaka,araba[i].renk,araba[i].giris);
    }
}

  if (menusecim == 3){
    printf("\t**Gorusmek uzere..**");

}

    return 0;
}
void AracEkle(){
struct otopark araba[1000];
    int i;
    for (i=0;i<1;i++){
        printf("%d. Araba'nin bilgilerini giriniz:\n",i+1);
        printf("\tModel:");
        scanf("%d",&araba[i].model);
        printf("\tPlaka:");
        scanf("%s",&araba[i].plaka);
        printf("\tRenk:");
        scanf("%s",&araba[i].renk);
        printf("\tGiris Saati:");
        scanf("%s",&araba[i].giris);
    }
}

void AracListele(){
    int i;
    struct otopark araba[1000];
    for (i=0;i<1;i++){
           printf("\n%d. Araba'nin bilgileri\n Model:%d\n Plaka:%s\n Renk:%s\n Giris Saati:%s",i+1,araba[i].model,araba[i].plaka,araba[i].renk,araba[i].giris);
    }
}


