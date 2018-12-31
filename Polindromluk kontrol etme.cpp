//Polindromluk test etme(tersten ve d�zden yaz�l��lar� e�it olma durumunu kontrol etme).
//Burak KARAKOYUN
#include<stdio.h>
#include<locale.h>
char ters(char dizi[100]){
	int sayac=0,kontrol=0;
	char yan[100];
//girilen dizinin ka� karakterden olu�tu�unu buluyoruz (string.h)k�t�phanesinden strlen fonksiyonu kullanarakta bulunabilir.	
	for(int i=0;dizi[i]!='\0';i++){
		sayac++;
	}	
//kontrol i�in bir yedek dizi olu�turuyoruz ve elimizdeki kullan�c�dan al�nan diziyi bu k�sma kopyal�yoruz.
	for(int i=0;i<sayac;i++){
		yan[i]=dizi[i];
	}
	for(int i=0,j=sayac-1;i<sayac-1;i++,j--){
//yedek dizimizi sondan as�l diziyide ba�tan ba�latarak kontrol ediyoruz.E�er diziler e�it ise kontrol 1 olacak.
		if(dizi[i]==yan[j]){
		kontrol=1;
		}
//E�er ki dizilerdeki elemanlarda uyu�mazl�k ol�u�ursa kontrol 0 olacak ve break yaparak dizi k�r�lacak.(performans a��s�ndan zaman ve enerji kazand�r�r.)
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
	printf("Girilen Metnin Polindromluk Durumunu Kontrol Eden Program\n\nHO�GELD�N�Z\n\nL�tfen Metin Giriniz\n---->");
//c�mlelerde bo�luk oldu�u i�in gets konumu ile almakta fayda var scanf ile alsayd�k ilk bo�luktan sonra diziyi bitirirdi. 
	gets(dizi);
//fonksiyonu if blo�u i�erisinde �a��rarak kontrol ediyoruz return 1 ald�ysa dizi polindrom olur.De�ilse return 0 verir.
	if(ters(dizi)==1)printf("Girdi�iniz Metin Polindrom.");
	else if(ters(dizi)==0) printf("Girdi�iniz Metin Polindrom De�il");
	}
//Bo�luk girilirse say� girilirse vb. durumlar i�in hata vermesini sa�layan if bloklar� kullanabiliriz fakat �uanl�k sistemi �al��t�racak d�zeyde yeterlidir.	
	


