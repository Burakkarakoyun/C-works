//Vücut Kitle Ýndeksi Bulma Programý
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	float boy,kilo,indeks;
	printf("Vücut Kitle Ýndeksi Bulma Programý\n\nVücut Verilerinizi giriniz(boy(m,cm),kilo(kg))\n");
	scanf("%f%f",&boy,&kilo);
//kullanýcýdan verileri istiyoruz ve kitle indeks formulunu bir deðiþkene atýyoruz.
	indeks=kilo/(boy*boy);
	printf("indeksiniz %.2f\n",indeks);
//if bloklarýyla indekse göre yorum bloklarý açýyoruz yorumlamayý kendimize göre yapabiliriz.
	if(indeks<18.5){
		printf("Cýlýzsýn biraz kilo alýp,spor yapmalýsýn...");
	}	
	else if(indeks<25){
		printf("Normalsin,kilonu sabit tutup spor yapman yeterli...");
	}
	else if(indeks<30){
		printf("Yediðin yemekleri azaltmassan ölebilirsin,kilona ve yediklerine dikkat edip spor yapmalýsýn...");
	}
	else{
		printf("Böyle bir insan olamaz...");
	}
	getch();
}
