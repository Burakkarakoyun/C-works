#include<stdio.h>
   unsigned int soladondur(unsigned int sayi, int kaydir)
   {
   	
   	printf("Sayi kaydirma\nSayi=");
	scanf("%d",&sayi);
    printf("Kayma miktari=");
   	scanf("%d",&kaydir);
   	int sonuc=(sayi<<kaydir);
   	printf("Sola kaydirilmis hali=%d",sonuc); 
   	return sonuc;
   }
int main()
{   int sayi,kaydir;
   	soladondur(sayi,kaydir);
}
