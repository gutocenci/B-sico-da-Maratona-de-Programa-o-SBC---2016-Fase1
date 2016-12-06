#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int c,c2,tamanho;
	char palavra1[52],palavra2[52],palavra3[52];
	
	scanf("%s",palavra1);
	
	tamanho=strlen(palavra1);
	
	for(c=0,c2=0;c<tamanho;c++){
		if(palavra1[c]=='a'|| palavra1[c]=='e' || palavra1[c]=='i' || palavra1[c]=='o'||palavra1[c]=='u'){
			palavra2[c2]=palavra1[c];
			c2++;
		}
	}
	
	palavra2[c2]='\0';
	
	tamanho=strlen(palavra2);

	for(c=tamanho-1,c2=0;c>=0;c--,c2++){
		palavra3[c2]=palavra2[c];
	}
	
	palavra3[c2]='\0';
	
	if(strcmp(palavra2,palavra3)==0)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}