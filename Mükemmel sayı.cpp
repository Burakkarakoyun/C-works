//kullan�c�dan ald�g�n�z say�n�z m�kemmel oldugunu bulmaya �al���n.(m�kemmel say� = kendi hari� �arpanlar�n�n yada b�lenlerininin toplam� kendisi(6=1+2+3))
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int toplam=0,mukemmel,inci;
	printf("M�kemmel say� hesaplama program�na ho�geldin day�.\nSay� giriniz.\n");
	scanf("%d",&mukemmel);
	inci=0;//sebebi x. b�lenin for i�inde yazd�rabilmek i�in.
	for(int i=1;i<mukemmel;i++){
//Bu k�s�mda say�m�z�n b�lenlerini bir de�i�kende toplay�p(ileride kontrol etmek i�in) yazd�r�yoruz.		
			if(mukemmel%i == 0){
			toplam=toplam+i;
			inci++;
			printf("%d.B�len-->%d\n",inci,i);
			}
		}
//if blo�unda say�n�n b�lenlerinin toplam�n�n say�ya e�it olup olma��n� kontrol ediyoruz. 		
	if(toplam==mukemmel){
		printf("Say�n�z m�kemmel.");
	}
	else{
		printf("Say�n�z m�kemmel de�il.");
	}
		
	getch();	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

