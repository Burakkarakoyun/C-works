//girilen metni tersten yazd�rma.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,sayac=0;
	char ters[100];
	gets(ters);//scanf ile alsayd�k bo�lu�u almazd� yani 1 kelimeden fazlas�n� hesaplayamazd�.
	for(i=0;ters[i]!=NULL;i++){
//sayi NULL('\0' da olabilir NULL yerine) olana kadar sayac say�cak ka� karakterli bir dizi oldugunu bulacak.
		sayac++;
	}
	printf("%d karakterli\n",sayac);
	int deger=0;
	for(int i=sayac-1;i>=0;i--){
//sayac�n 1 eksi�inden ba�layarak geriye do�ru gidecek ve tek tek karakterleri yazd�racak.		
		printf("%c",ters[i]);
	}
	
	
	
	
	
	
	
}

