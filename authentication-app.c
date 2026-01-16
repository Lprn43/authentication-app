#include <stdio.h>
#include <string.h>

int main()
{

    while (1)
    {
        int sayi_x = 0;
        int sayi_y = 0;
        char isQ;
        char SABIT_SIFRE[] = "Giris123";
        char kullaniciSifre[9];
        printf("Programdan çıkmak için 'q' tuşuna basın, devam etmek için herhangi bir tuşa basın.");
        scanf("%c",&isQ);
        scanf("%*[^\n]");
        if (isQ == 'q')
        {
            break;
        }
        printf("Dogrulama 1: Iki sayi giriniz bu iki sayinin carpimi 100'den buyuk toplami ise 50'den kucuk olsun.\n");
        printf("Sayi 1'i giriniz:");
        scanf("%d",&sayi_x);
        printf("Sayi 2'yi giriniz:");
        scanf("%d",&sayi_y);
        if (sayi_x*sayi_y > 100 && sayi_x+sayi_y < 50)
        {
            printf("Matematiksel Doğrulama Başarılı! Şifre Kontrolüne Geçiliyor.");
        }
        else
        {
            printf("Matematiksel Doğrulama Hatalı. Ana menüye dönülüyor.");
            continue;
        }
        printf("Dogrulama 2: Sifreyi giriniz toplam 3 hakkiniz vardir.\n");
        for (int i = 0; i < 3; i++)
        {
            printf("Sifre giriniz:");
            scanf("%s",kullaniciSifre);
            //scanf("%*[^\n]");
            if (strcmp(SABIT_SIFRE,kullaniciSifre) == 0)
            {
                printf("Giriş Tamamlandı! Sisteme Hoş Geldiniz!");
                break;
            }
            else if (i < 2)
            {
                printf("Hatalı şifre. Kalan deneme: %d\n",2-i);         
            }
            else
            {
                printf("Şifre deneme hakkınız bitti. Program Kapatılıyor.");
            }
        }
        break;
    }




    return 0;
}