//�arp�m tablosu
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
printf("�arp�m Tablosu\n\n");
//i�i i�e d�ng� kurarak i=1 iken j 10a kadar dolan�p yazd�racak daha sonra i=2 olacak ve j yeniden dolancak d�ng� tamamlanana kadar. 
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
		printf("%dx%d=%d\t",j,i,i*j);
	}
//\n komutu bir sat�r alta ge�me komutudur i=1 den sonra bir alt sat�r i=2 daha sonra 3 4 5 diye ilerleyecek.
	printf("\n");
	}	
	getch();
}
