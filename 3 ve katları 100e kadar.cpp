#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int toplam;
	printf("1 den 100e kadar 3 ve katlarý:\n");
	for(int i=3;i<101;i++){
	if(i%3==0){
	
	printf("%d\n",i);
	
		}
		
	}
	getch();
}

