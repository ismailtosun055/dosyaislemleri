#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *dosya;
	dosya=fopen("can.txt","w");
	fclose(dosya);
	
	return 0;
}
