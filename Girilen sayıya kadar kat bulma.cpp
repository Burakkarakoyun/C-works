//girilen sayýya kadar olan 3 ve katlarýný bulma programý for döngüsü içindeki 3lerin yerine farklý bir sayý girilerek o sayý ve katlarý bulunabilir.
//Burak KARAKOYUN
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
//kullanýcadan sayi istiyoruz.	
	printf("Ýstenilen sayýya kadar 3 ve katlarýný bulan program\n\nHOÞGELDÝNÝZ\n\nSayý giriniz--->");
	scanf("%d",&sayi);
	for(int i=3;i<=sayi;i++){
//döngü 3den baþlayarak sayýlarý girilen sayýya kadar tek tek mod 3 te deneyecek eðerki 3 katýysa yazdýracak. 
	if(i%3==0){
	printf("%d\n",i);
		}
	}
	getch();
}

