#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	float boy,kilo,indeks;
	printf("Vucut Verilerinizi giriniz(boy(m,cm),kilo)\n");
	scanf("%f%f",&boy,&kilo);
	indeks = kilo / (boy * boy);
	printf("indeksiniz %.2f\n",indeks);
	if(indeks<18.5){
		printf("C�l�zs�n biraz kilo al�p,spor yapmal�s�n...");

	}	
	else if(indeks<25){
		
		printf("Normalsin,kilonu sabit tutup spor yap...");
	}
	else if(indeks<30){
		
		printf("Yedi�in yemekleri azaltmassan �lebilirsin,kilona ve yediklerine dikkat edip spor yapmal�s�n...");
	}
	else{
		printf("Davar,Ya�ama geber...");
	}
	
	getch();
}
