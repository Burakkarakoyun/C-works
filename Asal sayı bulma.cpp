//Asal sayý bulma programý.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int bolen=0,asal;
	printf("Asal sayý bulma programý\nSayý Giriniz\n--->");
	scanf("%d",&asal);
//Sayi 1 veya 0 gelirse döngü ikiden baþlayacaðý için hesaplayamaz.
	if(asal==1 || asal==0){
		printf("Sayýnýz Asal Deðil.");
	}
//Kullanýcý negatif deðer girerse deðeri pozitif yapýp hesaplýyor.	
	else if(asal<0){
		asal=asal*-1;
	}
	for(int i=2; i<asal ;i++){
//döngü 2 den kendisinin 1 eksiðine kadar çünkü 0,1 ve kendisini böler..Ýf bloðunda sayýnýn mod i den bir sayýya bölünebilirliðine bakýyoruz bölünürse bolen(kontrol deðiþkeni)1 olur.
		if(asal%i == 0){
			bolen=1;
			break;
		}
	}
//sayý bir sayýya bölünebilirse bolen 1 olacak bolen 1 olursa sayýnýn asallýðý bozulur kontrol edip yazdýrýyoruz.
	if(bolen == 0){
		printf("Sayýnýz asal.\n");		
	}
	else{
		printf("Sayýnýz asal deðil.\n");
	}
	getch();	
			
}
	

