#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	FILE *sayilar=fopen("sayilar.txt","w");
	int sayi,dizi[100];
	
	for(int i=1;i<=100;i++){
		sayi=rand()%1000;
	fprintf(sayilar,"%d\n",sayi);
	}
	fclose(sayilar);	
	
}
