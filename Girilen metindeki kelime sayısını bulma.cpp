//Girilen metin i�erisinde ka� kelime oldugunu bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	char cumle[100];
//sayac� 1 den ba�lat�yoruz ��nk� bir bo�luk iki kelime oldu�unu g�sterir ve gets ile al�yoruz bo�luklar�da alabilmek i�in.
	int sayac=1;
	printf("Metin Giriniz\n\n-->");
	gets(cumle);
	for(int i=0;cumle[i]!='\0';i++){
//girilien metinde dizinin �. indisi bo�luksa e�er sayac++ yap�yoruz.		
		if(cumle[i]==' ')sayac++;
	}
	printf("C�mleniz %d kelimeden olu�uyor.",sayac);
getch();
}

