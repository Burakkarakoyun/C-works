//2tane de�i�keni al kullan�c�dan,bunlar� birbiriyle  de�i�tir
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
//De�i�im yapabilmek i�in 1 tane fazladan atama de�eri koyuyoruz.
int girdi1,girdi2,atama;

printf("Girilen 2 tane say� giriniz l�tfen\n");
scanf("%d%d",&girdi1,&girdi2);								
//1.yi yede�e at�yoruz. sonra 2.yi 1e daha sonrada atamay� 2ye.Atama soldan sa�a olur ve kodlar yukar�dan a�a�� do�ru �al��aca�� i�in k�me sisteniyle �al���r. 
	atama=girdi1;
	girdi1=girdi2;
	girdi2=atama;
	
printf("Yeni Veriler\n%d\n%d",girdi1,girdi2);
	
}
