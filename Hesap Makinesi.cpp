//Hesap makinesi h�zl� ve kolay olmas� ad�na switch-case yap�s� kulland�m if else ile de yap�labilir.
//Burak KARAKOYUN	
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b,islem;
	printf("HESAP MAK�NES�\n2 Say� Giriniz.\n");scanf("%d%d",&a,&b);
	printf("i�lem giriniz\nToplama:1\n��karma:2\n�arpma:3\nB�lme:4\n");scanf("%d",&islem);
	switch(islem){
		case 1:printf("%d",a+b);break;
		case 2:printf("%d",a-b);break;
		case 3:printf("%d",a*b);break;
//bu k�s�mda case ile durumlar� istiyoruz case sonuna break koymaz isek d�ng�s� devam eder break g�rene kadar yazar. 4.case deki float(type cast) ortalamal� de�er olabilece�i i�in.
		case 4:printf("%.2f",(float)a/b);break;
		default:printf("Hatal� giri�");break;
	} 
getch();
}
