#include<stdio.h>
int main(){
	char cumle[100];
	int kb;
	printf("Girilen cumledeki karakterleri kuculten/buyulten program.\nCumle giriniz.\n");
	gets(cumle);
	for(int i=0;cumle[i]!='\0';i++){
		kb=cumle[i];
		if(kb>=65 && kb<=90){
			kb+=32;
			cumle[i]=kb;
		}
		else if(kb>=97 && kb<=122){
			kb-=32;
			cumle[i]=kb;
		}
		
	}
	printf("Yeni cumleniz\n");
	printf("%s",cumle);
	
	
}
