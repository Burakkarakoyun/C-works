#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void quicksort(int dizi[100],int sol,int sag){
   int i, j, pivot,yedek;

   if(sol<sag){
      pivot=sol;
      i=sol;
      j=sag;

      while(i<j){
         while(dizi[i]<=dizi[pivot]&&i<sag)
            i++;
         while(dizi[j]>dizi[pivot])
            j--;
         if(i<j){
            yedek=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=yedek;
         }
      }

      yedek=dizi[pivot];
      dizi[pivot]=dizi[j];
      dizi[j]=yedek;
      quicksort(dizi,sol,j-1);
      quicksort(dizi,j+1,sag);

   }
}

int main(){
   int say, dizi[100];
   srand(time(NULL));
   for(int i=0;i<100;i++){
		dizi[i]= rand()%100;
   }
   quicksort(dizi,0,50);
   quicksort(dizi,50,100);
   printf("Siralanmis Sayilar\n\nilk 50\n");
   for(int i=0;i<50;i++){
   	   printf("%d ",dizi[i]);
   }
    printf("\n\nson 50\n");
   for(int i=99;i>49;i--){
   	  printf("%d ",dizi[i]);
   }
}
