//FAKT�R�YEL HESAPLAMA 
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");	
//Burada dikkat etmemiz gereken bir husus faktoriyel de�i�keninin i�inde toplanaca�� i�in sonuc ve faktoriyel �arpma i�lemi oldu�u i�in 1 den ba�lamas� gerekir.
	int faktoriyel=1,sayi;
	printf("Fakt�riyel hesaplama program�na ho�geldiniz...\nHesaplamak istedi�iniz say�y� giriniz...\n");
	scanf("%ld",&sayi);
	for(int i=1;i<=sayi;i++){
//istenilen say�ya kadar say�y� kendisiyle �arp�p kendi i�ine atayacak yani sayi=sayi*2 sayi=2 oldu daha sonra say�(2)=sayi*3 yani 6 oldu b�yle devam edecek.	
		faktoriyel*=i;
	}
	printf("%d.Say�n�n�n fakt�riyeli %d",sayi,faktoriyel);
	getch();	
	
}
