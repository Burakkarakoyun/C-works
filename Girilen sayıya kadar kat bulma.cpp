//girilen say�ya kadar olan 3 ve katlar�n� bulma program� for d�ng�s� i�indeki 3lerin yerine farkl� bir say� girilerek o say� ve katlar� bulunabilir.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
//kullan�cadan sayi istiyoruz.	
	printf("�stenilen say�ya kadar 3 ve katlar�n� bulan program\n\nHO�GELD�N�Z\n\nSay� giriniz--->");
	scanf("%d",&sayi);
	for(int i=3;i<=sayi;i++){
//d�ng� 3den ba�layarak say�lar� girilen say�ya kadar tek tek mod 3 te deneyecek e�erki 3 kat�ysa yazd�racak. 
	if(i%3==0){
	printf("%d\n",i);
		}
	}
	getch();
}

