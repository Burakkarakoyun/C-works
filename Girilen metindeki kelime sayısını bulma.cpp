//Girilen metin içerisinde kaç kelime oldugunu bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	char cumle[100];
//sayacý 1 den baþlatýyoruz çünkü bir boþluk iki kelime olduðunu gösterir ve gets ile alýyoruz boþluklarýda alabilmek için.
	int sayac=1;
	printf("Metin Giriniz\n\n-->");
	gets(cumle);
	for(int i=0;cumle[i]!='\0';i++){
//girilien metinde dizinin Ý. indisi boþluksa eðer sayac++ yapýyoruz.		
		if(cumle[i]==' ')sayac++;
	}
	printf("Cümleniz %d kelimeden oluþuyor.",sayac);
getch();
}

