//çarpým tablosu
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
printf("Çarpým Tablosu\n\n");
//içi içe döngü kurarak i=1 iken j 10a kadar dolanýp yazdýracak daha sonra i=2 olacak ve j yeniden dolancak döngü tamamlanana kadar. 
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
		printf("%dx%d=%d\t",j,i,i*j);
	}
//\n komutu bir satýr alta geçme komutudur i=1 den sonra bir alt satýr i=2 daha sonra 3 4 5 diye ilerleyecek.
	printf("\n");
	}	
	getch();
}
