//vize ve final notuna g�re ortalama hesaplama
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL,"turkish");
	float vize,final,yilsonu;
	
	printf("vize ve final notlar�n� giriniz...(vize,final)\n");
	scanf("%f%f",&vize,&final);
//Kullan�c�dan verileri al�p form�le yerle�tiriyoruz onuda bir sonuca(yilsonu).
	yilsonu = (vize*4+final*6)/10;
	printf("Y�lsonu notunuz:%.2f\nHarf sistemine g�re-->",yilsonu);
	
//her not aral���na g�re if else bloklar� �eklinde ay�r�p yerle�tiriyoruz.
	if(yilsonu >= 90.0){
		printf("AA");
	}
	else if(yilsonu >= 85.0){
		printf("BA");
	}
	else if(yilsonu >= 80.0){
		printf("BB");
	}
	else if(yilsonu >= 75.0){
		printf("CB");
	}
	else if(yilsonu >= 75.0){
		printf("CC");
	}
	else if(yilsonu >= 70.0){
		printf("DC");
	}
	else if(yilsonu >= 65.0){
		printf("DD");
	}
	else if(yilsonu >= 60.0){
		printf("ED");
	}
	else if(yilsonu >= 55.0){
		printf("EE");
	}
	else if(yilsonu >= 50.0){
		printf("FE");
	}
	else{
		printf("FF");
	}
	
getch();
	
}
