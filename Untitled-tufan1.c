#include <stdio.h>

int main() {
char kapi_durumu;
int sarj_yuzdesi, fren_pedali;
float batarya_sicakligi;
//değişkenler
printf("--- ELEKTROMOBIL GUVENLIK KONTROLU ---\n");

printf("Batarya Sicakiligi (C):");
scanf("%f", &batarya_sicakligi);

printf("Sarj Yuzdesi (%): %");
scanf("%d", &sarj_yuzdesi);

printf("Kapi Durumu (A/K):");
scanf(" %c", &kapi_durumu);

printf("Fren Pedali (1=basili, 0=degil):");
scanf("%d", &fren_pedali);
//değişkenlerin girilmesi
printf("SONUC:"); 
//sonuc başlığı

    if(batarya_sicakligi<=60&&batarya_sicakligi>-100&&kapi_durumu=='K'&&sarj_yuzdesi>=10&&sarj_yuzdesi<=100&& fren_pedali==1){
        printf("BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...\n");
        //istenen değerler(batarya sıcaklığı -100-60, kapı durumu "K", şarj yüzedsi %10-100, fren pedalı "1") girildiğinde başarılı sonucu yazdırılması
    }

    else{
        if (batarya_sicakligi>200||batarya_sicakligi<-100) {
        printf(" BATARYA DEGERI HATALI\n", batarya_sicakligi);
        }
        //batarya değerinin -100'den düşük, 200'den yüksek değerlerde hata çıktısı vermesi
            else if (batarya_sicakligi>60){
        printf("KRITIK HATA: Motor Asiri Isindi! Surus Engellendi.\n", batarya_sicakligi);
        }
        //batarya değerinin 60'dan yüksek değerlerde kritik hata çıktısı vermesi
        if (sarj_yuzdesi>100||sarj_yuzdesi<0) {
        printf("YUZDE DEGERI HATALI\n");
        }
        //şarj yüzdesi %0'dan düşük, %100'den yüksek değerlerde hata çıktısı vermesi 
            else if (sarj_yuzdesi<10) {
        printf("UYARI: Batarya Kritik Seviyede! Surus Baslatilamaz.\n");
        }
        //şarj yüzdesi %10'dan düşük değerlerde uyarı çıktısı vermesi
        if (kapi_durumu!='A'&&kapi_durumu!='K') {
        printf("UYARI: Gecersiz kapi durumu\n");
        }
        //kapı durumu "A" veya "K"dan farklı bir girdi olduğunda uyarı çıktısı vermesi
            else if (kapi_durumu=='A') {
        printf("HATA: Kapilar Acik! Lutfen Kapatiniz.\n");
        }
        //kapı durumu "A" girdisinde hata çıktısı vermesi
        if(fren_pedali==0) {
        printf(" BILGI: GUvenlik için frene basarak tekrar deneyin");
        }
        //fren pedalı 0 değerinde bilgi çıktısı vermesi
    }
    

   

    
    return 0;
}