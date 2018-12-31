#include<stdio.h>
#include<conio.h>
int main(){
	int n,yildiz,bosluk=0;
	scanf("%d",&yildiz);
	n=yildiz;
	for(int i=0;i<=n;i++){	
		
		for(int j=0;j<bosluk;j++){
		 printf(" ");
		}
		for(int j=0;j<yildiz;j++){
			printf("*");
		}
		
		
	
	printf("\n");
	yildiz--;
	bosluk++;
	}
	
}
