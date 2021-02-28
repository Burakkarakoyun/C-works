//girilen metin içerisinde kaç kelime oldugunu bulan program
#include<stdio.h>
int main(){
	printf("Girilen cumledeki kelime sayisini bulan program.\n");
	char cumle[2000];
	int sayac=1;
	printf("Lutfen bir cumle giriniz.\n");
	gets(cumle);
	for(int i=0;cumle[i]!='\0';i++){
		if(cumle[i]==' ')sayac++;
	}
	printf("Cumleniz %d kelimeden olusmaktadir.",sayac);



}

