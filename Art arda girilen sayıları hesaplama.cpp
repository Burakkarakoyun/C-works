//Artarda girilen say�lar�n ortalamas�n� bulan program 10 yazd�m fakat 10 yerine n diye bir de�i�ken atan�p dahada fonksiyonel hale getirilebilir.
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int toplam=0;
	printf("Art arda girilen 10 say�n�n toplam�n� ve ortalamas�n� bulan program...\nSay� giriniz...\n");
	
	for(int i=1;i<=10;i++){
		int input;
		printf("%d.--->",i);
		scanf("%d",&input);
		toplam+=input;
	}
//Bu k�s�mda ise say�lar�n toplam�n� ve ortalamas�n� buluyoruz 10 yerine fonksiyonel bir�ey gelirse n de�i�keni yaz�larbilir.	
		printf("Say�lar�n toplam %d\n",toplam);
		printf("Say�lar�n ortalamas� %d",toplam/10);

	getch();
}
