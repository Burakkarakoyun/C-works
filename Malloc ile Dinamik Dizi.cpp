#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int *ptr,gec;
	ptr=(int *)malloc(20*sizeof(int));
	printf("Ilk hali\n");
	for(int i=0;i<20;i++){
		*(ptr+i)=rand()%100;
		printf("%d ",*(ptr+i));
	}
	for(int i=0;i<20;i++){
		for(int j=i+1;j<20;j++){
			if(*(ptr+i) < *(ptr+j)){
				gec=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=gec;
			}
		}
	}
	printf("\n\nSiralanmis hali\n");
	for(int i=0;i<20;i++){
		printf("%d ",*(ptr+i));
	}
}
