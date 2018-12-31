//2tane deðiþkeni al kullanýcýdan,bunlarý birbiriyle  deðiþtir
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
//Deðiþim yapabilmek için 1 tane fazladan atama deðeri koyuyoruz.
int girdi1,girdi2,atama;

printf("Girilen 2 tane sayý giriniz lütfen\n");
scanf("%d%d",&girdi1,&girdi2);								
//1.yi yedeðe atýyoruz. sonra 2.yi 1e daha sonrada atamayý 2ye.Atama soldan saða olur ve kodlar yukarýdan aþaðý doðru çalýþacaðý için küme sisteniyle çalýþýr. 
	atama=girdi1;
	girdi1=girdi2;
	girdi2=atama;
	
printf("Yeni Veriler\n%d\n%d",girdi1,girdi2);
	
}
