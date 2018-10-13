#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int bolen=0,asal;
	printf("Asal sayý bulma programý\nSayý Giriniz\n ");
	scanf("%d",&asal);
	for(int i=2; i<asal ;i++){
		if(asal%i == 0){
			bolen++ ;
			break;
		}
	}
	if(bolen == 0){
		printf("Sayýnýz asal\n");		
	}
	else{
		printf("Sayýnýz asal deðil\n");
	}
	getch();	
			
}
	

