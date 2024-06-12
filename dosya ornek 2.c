#include<stdio.h>
#include<stdlib.h>

int main(){
	char isim[]="ismail";
	FILE *dosya;
	dosya=fopen("ilk dosyam.txt","w");
	fprintf(dosya,"bu dosya %s'in ilk dosyasi.",isim);
	fclose(dosya);
	
	return 0;
}
