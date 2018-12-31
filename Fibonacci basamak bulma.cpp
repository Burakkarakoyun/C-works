//kullanýcýnýn istediði basamaktaki fibonacci sayýsýný bulan program
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int a=0,b=1,sayi,toplam;
	
	printf("Ýstediðiniz Basamaktaki Fibonacci Sayýsýný Hesaplama Programý\nHOÞGELDÝNÝZ...\nHesaplamak istediðiniz basamaðý giriniz...\n--->");
	scanf("%d",&sayi);
	if(sayi>43){
//int sonlu bir deðere sahip olduðundan ötürü 43.basamaktan sonrasýný hesaplayamaz negatif veya ram den rastgele bir deðer verir.		
		printf("Bu program bu kadar büyük bir Fibonacci Sayýsýný hesaplayamaz.");
	}
	else{
	printf("\n%d\n",b);
	for(int i=0;i<sayi-1;i++){
//deðiþken atama sistemiyle birebir ayný þekilde çalýþýyor deðer sürekli arttýðý için for içine alýp yineleme yapýyor diðer türlü sonsuz sayýda deðiþkene ihtiyacýmýz olur.
		printf("%d\n",a+b);
		toplam=a;
		a=b;
		b=toplam+b;
	}
}
//kullandýðýmýz getch fonksiyonu geriye deðer döndürür boþ olmasýnýn sebebi ise exe dosyasýný açtýðýmýzda iþlemi yaptýkdan sonra bizden komut beklemesidir komutu alýnca kapanýr.
	getch();
}
