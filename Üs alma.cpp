//us alma (math.h k�t�hanesinden pow(x,y) fonksiyonu ile yap�labilir fakat hat�rlanmad��� yerlerde faydal� olacakt�r.)
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,us,sayi,sonuc=1;
	printf("�s alma program\n\nSay� ve bulmak istedi�iniz �ss� giriniz.\n");
	scanf("%d%d",&sayi,&us);
//kullan�c� 0 girid�inde if olmazsan hesap yap�p random say� atayacakt�r.
	if(sayi==0){
		printf("0 �zeri %d = 1",us);
	}
	else{
		for(i=0;i<us;i++){
//Sayiyi �s say�s� kadar kendisi ile �arparak sonuc i�erisine atacak.
		sonuc*=sayi;
	}
	printf("%d �zeri %d = %d",sayi,us,sonuc);
	}	
}
	
