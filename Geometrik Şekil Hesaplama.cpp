//geometrik þekil analizi yapan program. kullanýcýdan ucgen mi dortgen mi oldugunu öðrenip üçgen belirtme, ikizkenar mý, eþkenar mý;dörtgense kare mi dikdörtgen mi öðren.
//Burak KARAKOYUN
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int input;
	printf("Üçgense 1, Dörtgense 2 girin.\n");
	scanf("%d",&input);
//Bu kýsýmda ucgense 1 girsin dörtgense 2 girsin if bloðuyla  yönetiyoruz .
//daha sonra if else þeklinde if else bloklarýnda dörtgen ve üçgenin durumlarýný kontrol ediyuoruz.	
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
	else if(input==2){
		int e,p,k,s;
		printf("Cisminiz Dörtgen uzunluklarýný giriniz.(Büyükten küçüðe doðru)\n");
		scanf("%f%f%f%f",&e,&p,&k,&s);
		if(e==p && k==s && e==k && p==s){
			printf("Dörtgeniniz kare...");
			
		}
		else if(e==p && k==s){
			printf("Dörtgeniniz dikdörtgen...");
		}
		else if(e==k && p==s){
			printf("Dörtgeniniz dikdörtgen...");
		}
	
		else{
			printf("Dörtgeniniz çeþitkenar dörtgen...");
		}
	}

getch();

}

