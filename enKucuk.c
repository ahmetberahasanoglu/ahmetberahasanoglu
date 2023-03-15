#include <stdio.h>
#include <stdlib.h>


int kucukdeger(int diz[],int index){
	int enKucuk,enBuyuk,i;
	enKucuk=diz[0];//1
	for(i=1;i<=index;i++){//1+n+n=2n+1
		if(diz[i]<enKucuk){//n
			enKucuk=diz[i];
		}
	}
	return enKucuk;//1
}// Hepsini topladýgýmýzda T(n)=3n+3 oluyor
int main(int argc, char *argv[]) {
	int dizi[5]={5,10,4,123,32};
    printf("Dizinin en kucuk degeri: %d ",kucukdeger(dizi,4));


	return 0;
}
