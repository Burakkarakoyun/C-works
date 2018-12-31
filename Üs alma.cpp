//us alma (math.h kütühanesinden pow(x,y) fonksiyonu ile yapýlabilir fakat hatýrlanmadýðý yerlerde faydalý olacaktýr.)
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,us,sayi,sonuc=1;
	printf("Üs alma program\n\nSayý ve bulmak istediðiniz üssü giriniz.\n");
	scanf("%d%d",&sayi,&us);
//kullanýcý 0 giridðinde if olmazsan hesap yapýp random sayý atayacaktýr.
	if(sayi==0){
		printf("0 üzeri %d = 1",us);
	}
	else{
		for(i=0;i<us;i++){
//Sayiyi üs sayýsý kadar kendisi ile çarparak sonuc içerisine atacak.
		sonuc*=sayi;
	}
	printf("%d üzeri %d = %d",sayi,us,sonuc);
	}	
}
	
