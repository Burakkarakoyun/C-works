//Girilen say�ya kadar olan tek say�lar� bulma
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	printf("Girilen Say�ya Kadar Olan Tek Say�lar� Bulan Program\nL�tfen Say� giriniz...\n");
	scanf("%d",&sayi);
	for(int i=1;i<sayi;i++){
		if(i%2==1){
		
		printf("%d\n",i);
	}
	}
	getch();
}
