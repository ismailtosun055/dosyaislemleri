#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *dosya;
	char karekter[10];
	int i;
	dosya=fopen("karekterokuma.txt","r");
	if(dosya!=NULL){
		for(i=0;i<30;i++){
	    	karekter[i]=fgetc(dosya); 
	        printf("%c",karekter[i]);
	   }
	}
	else{
		printf("404 HATA\ndosya bulunamadi!!!");
	}
	fclose(dosya);
	return 0;
}
