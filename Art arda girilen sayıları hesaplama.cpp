//Artarda girilen sayýlarýn ortalamasýný bulan program 10 yazdým fakat 10 yerine n diye bir deðiþken atanýp dahada fonksiyonel hale getirilebilir.
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int toplam=0;
	printf("Art arda girilen 10 sayýnýn toplamýný ve ortalamasýný bulan program...\nSayý giriniz...\n");
	
	for(int i=1;i<=10;i++){
		int input;
		printf("%d.--->",i);
		scanf("%d",&input);
		toplam+=input;
	}
//Bu kýsýmda ise sayýlarýn toplamýný ve ortalamasýný buluyoruz 10 yerine fonksiyonel birþey gelirse n deðiþkeni yazýlarbilir.	
		printf("Sayýlarýn toplam %d\n",toplam);
		printf("Sayýlarýn ortalamasý %d",toplam/10);

	getch();
}
