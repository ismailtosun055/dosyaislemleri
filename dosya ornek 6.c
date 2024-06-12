#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *belge_dosyasi;
	char karakter[10];
	belge_dosyasi=fopen("belgeler1.txt","a");
	printf("eklemek istediginiz yaziyi giriniz:");
	scanf("%s",karakter);
	printf("%s",karakter);
	//belge_dosyasi=karakter[1];
	//fscanf(belge_dosyasi,"%s",&karakter);
    fclose(belge_dosyasi);
	return 0;
}
