//0-100 aras�nda olu�an 100 say�dan 5.bitleri 0 olan�n 4.bitini 1 yap say�lar0.txt
//5.biti 1 olan� 3.bitini0 yap sayilar1.txt
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(){
	int sayi;
	srand(time(NULL));
	FILE *dosya0=fopen("sayilar0.txt","w"),*dosya1=fopen("sayilar1.txt","w");
    int maske1=16,maske2=55;
	int dizi[100];
		for(int i=1;i<=100;i++){
		sayi=rand()%100;
		if(sayi&1 << 5 ){
			printf("%d.Sayi------%d-->5.bit 1\n",i,sayi);
			fprintf(dosya1,"%d\n",sayi&maske2);
		}
		else if(sayi<17){
			printf("%d.Sayi------%d-->5.bit 0\n",i,sayi);
			fprintf(dosya0,"%d\n",sayi|maske1);
		}
		else {printf("%d.Sayi------%d-->5.bit 0\n",i,sayi);
			fprintf(dosya0,"%d\n",sayi|maske1);
		}
	}
	fclose(dosya0);
	fclose(dosya1);
}
