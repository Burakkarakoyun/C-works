#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
//kullan�c�dan ald�g�n�z say�n�z m�kemmel oldugunu bulmaya �al���n.(m�kemmel say� = kendi hari� �arpanlar�n�n yada b�lenlerininin toplam� kendisi(6=1+2+3))
	int mukemmel;
	int toplam=0;
	printf("M�kemmel say� hesaplama program�na ho�geldin day�.\nSay� giriniz.\n");
	scanf("%d",&mukemmel);
	for(int i=1;i<mukemmel;i++){
		
		if(mukemmel%i == 0){
			toplam=toplam+i;
			printf("B�lenler %d...\n",i);
			}
		}
	if(toplam==mukemmel){
		printf("Say�n�z m�kemmel.");
	}
	else{
		printf("Say�n�z m�kemmel de�il.");
	}
		
	getch();	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

