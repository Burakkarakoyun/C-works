//girilen metinde ka� tane istenilen harften oldugunu bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
char harf(char cumle[100],char ara){
	int sayac=0;
	for(int i=0;cumle[i]!='\0';i++){
//bu k�s�mda girilen c�mledeki karakterleri tek tek istenilen harfle ayn� m� diye kar��la�t�r�yoruz.ayn�ysa saya� 1 artar.
		if(cumle[i]==ara){
		sayac++;
		}
	}	
	if(sayac==0)printf("Arad���n�z harf metin i�erisinde bulunamad�.");
	printf("Arad���n�z harf metin i�erisinde %d defa ge�ti.",sayac);
}
int main(){
	setlocale(LC_ALL,"Turkish");
	char cumle[100],ara;
	printf("Girilen metin i�erisinde harf arama program�\n\nHO�GELD�N�Z\nL�tfen metni giriniz-->");gets(cumle);
	printf("L�tfen aranan harfi giriniz.--->");scanf("%c",&ara);
	harf(cumle,ara);
}
