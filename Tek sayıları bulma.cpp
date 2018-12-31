//Girilen sayýya kadar olan tek sayýlarý bulma
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	printf("Girilen Sayýya Kadar Olan Tek Sayýlarý Bulan Program\nLütfen Sayý giriniz...\n");
	scanf("%d",&sayi);
	for(int i=1;i<sayi;i++){
		if(i%2==1){
		
		printf("%d\n",i);
	}
	}
	getch();
}
