//V�cut Kitle �ndeksi Bulma Program�
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	float boy,kilo,indeks;
	printf("V�cut Kitle �ndeksi Bulma Program�\n\nV�cut Verilerinizi giriniz(boy(m,cm),kilo(kg))\n");
	scanf("%f%f",&boy,&kilo);
//kullan�c�dan verileri istiyoruz ve kitle indeks formulunu bir de�i�kene at�yoruz.
	indeks=kilo/(boy*boy);
	printf("indeksiniz %.2f\n",indeks);
//if bloklar�yla indekse g�re yorum bloklar� a��yoruz yorumlamay� kendimize g�re yapabiliriz.
	if(indeks<18.5){
		printf("C�l�zs�n biraz kilo al�p,spor yapmal�s�n...");
	}	
	else if(indeks<25){
		printf("Normalsin,kilonu sabit tutup spor yapman yeterli...");
	}
	else if(indeks<30){
		printf("Yedi�in yemekleri azaltmassan �lebilirsin,kilona ve yediklerine dikkat edip spor yapmal�s�n...");
	}
	else{
		printf("B�yle bir insan olamaz...");
	}
	getch();
}
