//girilen metinden aranan bir kelimeyi bulan program
#include <stdio.h>
int main()
{
  	char cumle[1000], aranan[50];
  	int i,j,kontrol,sayac;
  	printf("Cumle giriniz-->");
  	gets(cumle);
	printf("\nAranan kelimeyi giriniz-->");
  	gets(aranan);
  	for(int i=0;aranan[i]!='\0';i++){
  		sayac++;
	  }
	
  	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i] == aranan[0]){
			kontrol = 1;
			
			for(j=0;aranan[j]!='\0';j++){
				if(cumle[i+j]!= aranan[j]){
					kontrol = 0;
					break;
				}
			}	
		}
		if(kontrol == 1){
			break;
		} 
	}
	if(kontrol == 0){
  		printf("\n Aradiginiz kelime bulunamadý.'%s' ",aranan);
	}
	else if(kontrol==1) {
		printf("\n'%s' kelimesi  %d.sirasindan %d.siraya kadar",aranan, i + 1,i+sayac);
	}	
}
