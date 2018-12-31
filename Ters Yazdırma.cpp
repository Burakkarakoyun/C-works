//girilen metni tersten yazdýrma.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,sayac=0;
	char ters[100];
	gets(ters);//scanf ile alsaydýk boþluðu almazdý yani 1 kelimeden fazlasýný hesaplayamazdý.
	for(i=0;ters[i]!=NULL;i++){
//sayi NULL('\0' da olabilir NULL yerine) olana kadar sayac sayýcak kaç karakterli bir dizi oldugunu bulacak.
		sayac++;
	}
	printf("%d karakterli\n",sayac);
	int deger=0;
	for(int i=sayac-1;i>=0;i--){
//sayacýn 1 eksiðinden baþlayarak geriye doðru gidecek ve tek tek karakterleri yazdýracak.		
		printf("%c",ters[i]);
	}
	
	
	
	
	
	
	
}

