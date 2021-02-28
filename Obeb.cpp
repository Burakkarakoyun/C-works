#include<stdio.h>
int obeb(int x,int y){
    if(x==y){
		return x;
	}
	else if(x%y==0){
		return y;
	}
	else{
		return obeb(y%x,x);
	}
}
int main(){
	int x,y;
	printf("Obeb Hesaplama\nSayilari giriniz.\n");
	scanf("%d%d",&x,&y);
	printf("(%d,%d)==>en buyuk ortak bolenleri:%d",x,y,obeb(x,y));
}
