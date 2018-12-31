//girilen metinde kaç tane istenilen harften oldugunu bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
char harf(char cumle[100],char ara){
	int sayac=0;
	for(int i=0;cumle[i]!='\0';i++){
//bu kýsýmda girilen cümledeki karakterleri tek tek istenilen harfle ayný mý diye karþýlaþtýrýyoruz.aynýysa sayaç 1 artar.
		if(cumle[i]==ara){
		sayac++;
		}
	}	
	if(sayac==0)printf("Aradýðýnýz harf metin içerisinde bulunamadý.");
	printf("Aradýðýnýz harf metin içerisinde %d defa geçti.",sayac);
}
int main(){
	setlocale(LC_ALL,"Turkish");
	char cumle[100],ara;
	printf("Girilen metin içerisinde harf arama programý\n\nHOÞGELDÝNÝZ\nLütfen metni giriniz-->");gets(cumle);
	printf("Lütfen aranan harfi giriniz.--->");scanf("%c",&ara);
	harf(cumle,ara);
}
