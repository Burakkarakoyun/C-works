//Polindromluk test etme(tersten ve düzden yazýlýþlarý eþit olma durumunu kontrol etme).
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
char ters(char dizi[100]){
	int sayac=0,kontrol=0;
	char yan[100];
//girilen dizinin kaç karakterden oluþtuðunu buluyoruz (string.h)kütüphanesinden strlen fonksiyonu kullanarakta bulunabilir.	
	for(int i=0;dizi[i]!='\0';i++){
		sayac++;
	}	
//kontrol için bir yedek dizi oluþturuyoruz ve elimizdeki kullanýcýdan alýnan diziyi bu kýsma kopyalýyoruz.
	for(int i=0;i<sayac;i++){
		yan[i]=dizi[i];
	}
	for(int i=0,j=sayac-1;i<sayac-1;i++,j--){
//yedek dizimizi sondan asýl diziyide baþtan baþlatarak kontrol ediyoruz.Eðer diziler eþit ise kontrol 1 olacak.
		if(dizi[i]==yan[j]){
		kontrol=1;
		}
//Eðer ki dizilerdeki elemanlarda uyuþmazlýk olþuþursa kontrol 0 olacak ve break yaparak dizi kýrýlacak.(performans açýsýndan zaman ve enerji kazandýrýr.)
		else{
		kontrol=0;	
		break;
		} 
	}
//kontrol 1 ise return 1 verekek fonksiyonu bitirecek.
	if(kontrol==1)return 1;
	else return 0;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	char dizi[100];
	printf("Girilen Metnin Polindromluk Durumunu Kontrol Eden Program\n\nHOÞGELDÝNÝZ\n\nLütfen Metin Giriniz\n---->");
//cümlelerde boþluk olduðu için gets konumu ile almakta fayda var scanf ile alsaydýk ilk boþluktan sonra diziyi bitirirdi. 
	gets(dizi);
//fonksiyonu if bloðu içerisinde çaðýrarak kontrol ediyoruz return 1 aldýysa dizi polindrom olur.Deðilse return 0 verir.
	if(ters(dizi)==1)printf("Girdiðiniz Metin Polindrom.");
	else if(ters(dizi)==0) printf("Girdiðiniz Metin Polindrom Deðil");
	}
//Boþluk girilirse sayý girilirse vb. durumlar için hata vermesini saðlayan if bloklarý kullanabiliriz fakat þuanlýk sistemi çalýþtýracak düzeyde yeterlidir.	
	


