//Hesap makinesi hýzlý ve kolay olmasý adýna switch-case yapýsý kullandým if else ile de yapýlabilir.
//Burak KARAKOYUN	
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b,islem;
	printf("HESAP MAKÝNESÝ\n2 Sayý Giriniz.\n");scanf("%d%d",&a,&b);
	printf("iþlem giriniz\nToplama:1\nÇýkarma:2\nÇarpma:3\nBölme:4\n");scanf("%d",&islem);
	switch(islem){
		case 1:printf("%d",a+b);break;
		case 2:printf("%d",a-b);break;
		case 3:printf("%d",a*b);break;
//bu kýsýmda case ile durumlarý istiyoruz case sonuna break koymaz isek döngüsü devam eder break görene kadar yazar. 4.case deki float(type cast) ortalamalý deðer olabileceði için.
		case 4:printf("%.2f",(float)a/b);break;
		default:printf("Hatalý giriþ");break;
	} 
getch();
}
