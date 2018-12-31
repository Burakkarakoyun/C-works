//FAKTÖRÝYEL HESAPLAMA 
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");	
//Burada dikkat etmemiz gereken bir husus faktoriyel deðiþkeninin içinde toplanacaðý için sonuc ve faktoriyel çarpma iþlemi olduðu için 1 den baþlamasý gerekir.
	int faktoriyel=1,sayi;
	printf("Faktöriyel hesaplama programýna hoþgeldiniz...\nHesaplamak istediðiniz sayýyý giriniz...\n");
	scanf("%ld",&sayi);
	for(int i=1;i<=sayi;i++){
//istenilen sayýya kadar sayýyý kendisiyle çarpýp kendi içine atayacak yani sayi=sayi*2 sayi=2 oldu daha sonra sayý(2)=sayi*3 yani 6 oldu böyle devam edecek.	
		faktoriyel*=i;
	}
	printf("%d.Sayýnýnýn faktöriyeli %d",sayi,faktoriyel);
	getch();	
	
}
