//Asal say� bulma program�.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int bolen=0,asal;
	printf("Asal say� bulma program�\nSay� Giriniz\n--->");
	scanf("%d",&asal);
//Sayi 1 veya 0 gelirse d�ng� ikiden ba�layaca�� i�in hesaplayamaz.
	if(asal==1 || asal==0){
		printf("Say�n�z Asal De�il.");
	}
//Kullan�c� negatif de�er girerse de�eri pozitif yap�p hesapl�yor.	
	else if(asal<0){
		asal=asal*-1;
	}
	for(int i=2; i<asal ;i++){
//d�ng� 2 den kendisinin 1 eksi�ine kadar ��nk� 0,1 ve kendisini b�ler..�f blo�unda say�n�n mod i den bir say�ya b�l�nebilirli�ine bak�yoruz b�l�n�rse bolen(kontrol de�i�keni)1 olur.
		if(asal%i == 0){
			bolen=1;
			break;
		}
	}
//say� bir say�ya b�l�nebilirse bolen 1 olacak bolen 1 olursa say�n�n asall��� bozulur kontrol edip yazd�r�yoruz.
	if(bolen == 0){
		printf("Say�n�z asal.\n");		
	}
	else{
		printf("Say�n�z asal de�il.\n");
	}
	getch();	
			
}
	

