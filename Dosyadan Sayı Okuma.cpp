#include<stdio.h>
#include<conio.h>
int asal(int sayi){
	for(int i=2;i<sayi;i++){
		if(sayi%i==0){
		return 0;
		}
	}
	return 1;
}
int main(){
	FILE *dosya2=fopen("sayilar2.txt","w");
	FILE *dosya=fopen("sayilar.txt.","r");
	int sayi[100];
	if(dosya!=NULL){
		while(!feof(dosya)){
			for(int i=1;i<=100;i++){
			fscanf(dosya,"%d",&sayi[i]);
			}
		}
	}
	else{
		printf("istenilen .txt uzantili dosya bulunamadi");
		return 0;
	}
		for(int i=1;i<=100;i++){
		if(asal(sayi[i])==1){
			fprintf(dosya2,"%d\n",sayi[i]);
			printf("%d(%d.eleman)\n",sayi[i],i);
		}
	}
	fclose(dosya);
	fclose(dosya2);
	getch();
}
