#include <stdio.h> 
#include <stdlib.h>


struct ogrenci {
char isim[20];
char soyisim[20];
char adres[100];
int numara;
}ogrenciler[5]={	{"Sefer","Ozcelik","SeferhisarCaddesi",12205123},	{"Salih","Korkut","NiluferSok",3123123},
	{"Talat","Teksoz","TalihCaddesi",1152152},	{"Kamil","Canvuran","BulbulSok",125235},	{"Ahmet","Hasanoglu","AkcayMah",1220505041}
	

} ;

int main(){
int j;
/*struct ogrenci ogrenciler[5];
for(s=0;s<=4;s++){
printf("%d. ogrencinin sirasiyla ve bosluk birakmadn isim, soyisim, adres, numara(sayi) bilgilerini giriniz: \n",s+1);
scanf("%s %s %s %d",&ogrenciler[s].isim,&ogrenciler[s].soyisim,&ogrenciler[s].adres,&ogrenciler[s].numara);
}*/
for(j=0;j<=4;j++){
printf("%d. Ogrencinin bilgileri: Isim:  %s Soyisim:  %s  Adres:  %s    Numara:  %d \n",j+1,ogrenciler[j].isim,ogrenciler[j].soyisim,ogrenciler[j].adres,ogrenciler[j].numara);
}

}
