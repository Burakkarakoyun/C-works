#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
//kullanýcýdan aldýgýnýz sayýnýz mükemmel oldugunu bulmaya çalýþýn.(mükemmel sayý = kendi hariç çarpanlarýnýn yada bölenlerininin toplamý kendisi(6=1+2+3))
	int mukemmel;
	int toplam=0;
	printf("Mükemmel sayý hesaplama programýna hoþgeldin dayý.\nSayý giriniz.\n");
	scanf("%d",&mukemmel);
	for(int i=1;i<mukemmel;i++){
		
		if(mukemmel%i == 0){
			toplam=toplam+i;
			printf("Bölenler %d...\n",i);
			}
		}
	if(toplam==mukemmel){
		printf("Sayýnýz mükemmel.");
	}
	else{
		printf("Sayýnýz mükemmel deðil.");
	}
		
	getch();	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

