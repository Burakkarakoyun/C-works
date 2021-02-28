#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int dizi[100];
	for(int i=0;i<100;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	for(int i=0;i<50;i++){//selection sort
		int gec,yedek=i;
		for(int j=i+1;j<50;j++){
			if(dizi[yedek]<dizi[j]){
				yedek=j;
			}
			gec=dizi[i];
			dizi[i]=dizi[yedek];
			dizi[yedek]=gec;
		}	
	}
	printf("\n\nselection hali\n");
	for(int i=0;i<50;i++){
		printf("%d ",dizi[i]);
	}
	for(int i=50;i<100;i++){//insertion sort
		int j,yedek=dizi[i];
		j=i;
		while(j>49 && yedek<dizi[j-1]){
			dizi[j]=dizi[j-1];
			j--;
		}
		dizi[j]=yedek;
	}
	printf("\n\ninsertion hali\n");
	for(int i=50;i<100;i++){
		printf("%d ",dizi[i]);
	}

	
}
