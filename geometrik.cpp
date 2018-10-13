//geometrik þekil analizi yapan program. kullanýcýdan ucgen mi dortgen mi oldugunu öðrenip üçgen belirtme, ikizkenar mý, eþkenar mý;dörtgense kare mi dikdörtgen mi öðren.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int input;
	printf("Ucgense 1, Dörtgense 2 girin.\n");
	scanf("%d",&input);
	//printf("%d",input);
	//ucgense 1 girsin 4gense 2
	
	if(input==1){
		printf("Üçgen seçtiniz.\nKenar uzunluklarýný giriniz.\n");
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(abs(a-b)<c<a+b &&abs(b-c)<a<b+c && abs(a-c)<b<a+c){
			if(a==b && b==c){
				printf("Üçgen eþkenar.");
			}
			else if(a==b||b==c){
				printf("üçgen ikizkenar.");
			}
			else{
				printf("Üçgen çeþitkenar.");
			}
		}
		else{
			printf("Üçgen belirtmez");
		}
		
	}

getch();

}

