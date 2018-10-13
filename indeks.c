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
		printf("Cýlýzsýn biraz kilo alýp,spor yapmalýsýn...");

	}	
	else if(indeks<25){
		
		printf("Normalsin,kilonu sabit tutup spor yap...");
	}
	else if(indeks<30){
		
		printf("Yediðin yemekleri azaltmassan ölebilirsin,kilona ve yediklerine dikkat edip spor yapmalýsýn...");
	}
	else{
		printf("Davar,Yaþama geber...");
	}
	
	getch();
}
