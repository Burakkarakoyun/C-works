//geometrik �ekil analizi yapan program. kullan�c�dan ucgen mi dortgen mi oldugunu ��renip ��gen belirtme, ikizkenar m�, e�kenar m�;d�rtgense kare mi dikd�rtgen mi ��ren.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int input;
	printf("Ucgense 1, D�rtgense 2 girin.\n");
	scanf("%d",&input);
	//printf("%d",input);
	//ucgense 1 girsin 4gense 2
	
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

getch();

}

