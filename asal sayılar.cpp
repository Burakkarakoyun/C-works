#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int bolen=0,asal;
	printf("Asal say� bulma program�\nSay� Giriniz\n ");
	scanf("%d",&asal);
	for(int i=2; i<asal ;i++){
		if(asal%i == 0){
			bolen++ ;
			break;
		}
	}
	if(bolen == 0){
		printf("Say�n�z asal\n");		
	}
	else{
		printf("Say�n�z asal de�il\n");
	}
	getch();	
			
}
	

