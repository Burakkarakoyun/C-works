//kullan�c�n�n istedi�i basamaktaki fibonacci say�s�n� bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int a=0,b=1,sayi,toplam;
	
	printf("�stedi�iniz Basamaktaki Fibonacci Say�s�n� Hesaplama Program�\nHO�GELD�N�Z...\nHesaplamak istedi�iniz basama�� giriniz...\n--->");
	scanf("%d",&sayi);
	if(sayi>43){
//int sonlu bir de�ere sahip oldu�undan �t�r� 43.basamaktan sonras�n� hesaplayamaz negatif veya ram den rastgele bir de�er verir.		
		printf("Bu program bu kadar b�y�k bir Fibonacci Say�s�n� hesaplayamaz.");
	}
	else{
	printf("\n%d\n",b);
	for(int i=0;i<sayi-1;i++){
//de�i�ken atama sistemiyle birebir ayn� �ekilde �al���yor de�er s�rekli artt��� i�in for i�ine al�p yineleme yap�yor di�er t�rl� sonsuz say�da de�i�kene ihtiyac�m�z olur.
		printf("%d\n",a+b);
		toplam=a;
		a=b;
		b=toplam+b;
	}
}
//kulland���m�z getch fonksiyonu geriye de�er d�nd�r�r bo� olmas�n�n sebebi ise exe dosyas�n� a�t���m�zda i�lemi yapt�kdan sonra bizden komut beklemesidir komutu al�nca kapan�r.
	getch();
}
