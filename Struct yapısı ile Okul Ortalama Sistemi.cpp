//struct yap�s�n� kullanarak ��renci verilerini girerek not ve ortalama ge�me notu.
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>

struct{
	char isim[20];
	char soyisim[20];
	struct{
			int ders;
			int vize;
			int final;
			int gecme;
	}ders;
	
}talebe[2];

int ort(int vize,int final){
	float ort;
	ort=(vize*4+final*6)/10;
	return ort;
}

int main(){
	setlocale(LC_ALL,"Turkish");
	printf("��reni Ortalama Sistemine Ho�geldiniz.\n\nL�tfen verileri tek tek giriniz.\n");
	for(int i=0;i<2;i++){
		printf("%d.��renci\n�sim-->",i+1);gets(talebe[i].isim);
		printf("Soyisim-->");gets(talebe[i].soyisim);
		printf("\n");
	}
	for(int i=0;i<2;i++){
		printf("%s %s\n",talebe[i].isim,talebe[i].soyisim);
		for(int j=0;j<2;j++){
			printf("%d.Ders\nVize Notu-->",j+1);scanf("%d",&talebe[j].ders.vize);
			printf("Final Notu-->");scanf("%d",&talebe[j].ders.final);
		}
		printf("\n");
	}
	for(int i=0;i<2;i++){
		printf("%d.Ders\nGe�me Notunu Giriniz->",i+1);scanf("%d",&talebe[i].ders.gecme);
	}
	
	printf("\n");
	for(int i=0;i<2;i++){
		printf("%d.��renci\n�sim-->%s\nSoyisim-->%s\n",i+1,talebe[i].isim,talebe[i].soyisim);
		for(int j=0;j<2;j++){
			if(ort(talebe[j].ders.vize,talebe[j].ders.final)>=talebe[j].ders.gecme)printf("%d.Ders-->Ge�ti.(%d)\n",j+1,ort(talebe[j].ders.vize,talebe[j].ders.final));
			else printf("%d.Ders-->Kald�.(%d)\n",j+1,ort(talebe[j].ders.vize,talebe[j].ders.final));
		}
		printf("\n");
		}
		
	
	getch();
}
