#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *belge_dosyasi;
	char karakter;
	belge_dosyasi=fopen("belgeler.txt","r");
	if((belge_dosyasi=fopen("belgeler.txt","r")) != NULL){
	    do{
	       karakter=fgetc(belge_dosyasi);
	       printf("%c",karakter);
        }while(!feof(belge_dosyasi));
	}
    else{
	    printf("dosya bos veya bulunamadi!!!");
	}
    fclose(belge_dosyasi);
	return 0;
}
