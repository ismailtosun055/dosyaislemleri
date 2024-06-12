#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *dosya;
	dosya=fopen("carpim_tablosu.txt","w");
	
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			fprintf(dosya,"%d * %d= %d\n",i,j,i*j);
		}
		fprintf(dosya,"\n");
	}
	fclose(dosya);
	return 0;
}
