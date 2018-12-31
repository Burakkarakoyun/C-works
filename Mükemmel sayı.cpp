//kullanýcýdan aldýgýnýz sayýnýz mükemmel oldugunu bulmaya çalýþýn.(mükemmel sayý = kendi hariç çarpanlarýnýn yada bölenlerininin toplamý kendisi(6=1+2+3))
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int toplam=0,mukemmel,inci;
	printf("Mükemmel sayý hesaplama programýna hoþgeldin dayý.\nSayý giriniz.\n");
	scanf("%d",&mukemmel);
	inci=0;//sebebi x. bölenin for içinde yazdýrabilmek için.
	for(int i=1;i<mukemmel;i++){
//Bu kýsýmda sayýmýzýn bölenlerini bir deðiþkende toplayýp(ileride kontrol etmek için) yazdýrýyoruz.		
			if(mukemmel%i == 0){
			toplam=toplam+i;
			inci++;
			printf("%d.Bölen-->%d\n",inci,i);
			}
		}
//if bloðunda sayýnýn bölenlerinin toplamýnýn sayýya eþit olup olmaðýný kontrol ediyoruz. 		
	if(toplam==mukemmel){
		printf("Sayýnýz mükemmel.");
	}
	else{
		printf("Sayýnýz mükemmel deðil.");
	}
		
	getch();	
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

