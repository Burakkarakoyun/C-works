//geometrik �ekil analizi yapan program. kullan�c�dan ucgen mi dortgen mi oldugunu ��renip ��gen belirtme, ikizkenar m�, e�kenar m�;d�rtgense kare mi dikd�rtgen mi ��ren.
//Burak KARAKOYUN
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int input;
	printf("��gense 1, D�rtgense 2 girin.\n");
	scanf("%d",&input);
//Bu k�s�mda ucgense 1 girsin d�rtgense 2 girsin if blo�uyla  y�netiyoruz .
//daha sonra if else �eklinde if else bloklar�nda d�rtgen ve ��genin durumlar�n� kontrol ediyuoruz.	
	if(input==1){
		printf("��gen se�tiniz.\nKenar uzunluklar�n� giriniz.\n");
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(abs(a-b)<c<a+b &&abs(b-c)<a<b+c && abs(a-c)<b<a+c){
			if(a==b && b==c){
				printf("��gen e�kenar.");
			}
			else if(a==b||b==c){
				printf("��gen ikizkenar.");
			}
			else{
				printf("��gen �e�itkenar.");
			}
		}
		else{
			printf("��gen belirtmez");
		}
		
	}
	else if(input==2){
		int e,p,k,s;
		printf("Cisminiz D�rtgen uzunluklar�n� giriniz.(B�y�kten k����e do�ru)\n");
		scanf("%f%f%f%f",&e,&p,&k,&s);
		if(e==p && k==s && e==k && p==s){
			printf("D�rtgeniniz kare...");
			
		}
		else if(e==p && k==s){
			printf("D�rtgeniniz dikd�rtgen...");
		}
		else if(e==k && p==s){
			printf("D�rtgeniniz dikd�rtgen...");
		}
	
		else{
			printf("D�rtgeniniz �e�itkenar d�rtgen...");
		}
	}

getch();

}

