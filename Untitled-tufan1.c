#include <stdio.h>

int main() {
char kapi_durumu;
int sarj_yuzdesi, fren_pedali;
float batarya_sicakligi;

printf("--- ELEKTROMOBIL GUVENLIK KONTROLU ---\n");

printf("Batarya Sicakiligi (C):");
scanf("%f", &batarya_sicakligi);

printf("Sarj Yuzdesi (%): %");
scanf("%d", &sarj_yuzdesi);

printf("Kapi Durumu (A/K):");
scanf(" %c", &kapi_durumu);

printf("Fren Pedali (1=basili, 0=degil):");
scanf("%d", &fren_pedali);

printf("SONUC:"); 


    if(batarya_sicakligi<=60&&batarya_sicakligi>-100&&kapi_durumu=='K'&&sarj_yuzdesi>=10&&sarj_yuzdesi<=100&& fren_pedali==1){
        printf("BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...\n");
    }

    else{
        if (batarya_sicakligi>200||batarya_sicakligi<-100) {
        printf(" BATARYA DEGERI HATALI\n", batarya_sicakligi);
        }

            else if (batarya_sicakligi>60){
        printf("KRITIK HATA: Motor Asiri Isindi! Surus Engellendi.\n", batarya_sicakligi);
        }

        if (sarj_yuzdesi>100||sarj_yuzdesi<0) {
        printf("YUZDE DEGERI HATALI\n");
        }
    
            else if (sarj_yuzdesi<10) {
        printf("UYARI: Batarya Kritik Seviyede! Surus Baslatilamaz.\n");
        }
    
        if (kapi_durumu!='A'&&kapi_durumu!='K') {
        printf("UYARI: Gecersiz kapi durumu\n");
        }

            else if (kapi_durumu=='A') {
        printf("HATA: Kapilar Acik! Lutfen Kapatiniz.\n");
        }
    
        if(fren_pedali==0) {
        printf(" BILGI: GUvenlik için frene basarak tekrar deneyin");
        }

    }
    

   

    
    return 0;
}