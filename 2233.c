#include <stdio.h>

int main() {
	
    long long int r,g,b,gaux,baux,total;
    
	scanf("%llx %llx %llx",&r,&g,&b);

    if(r >= g && g >= b){
        gaux = r / g;
        baux = g / b;
        total = (baux*baux)*(gaux*gaux)+(gaux*gaux)+1;
    }else
    if(r >= g && g < b){
        gaux = r / g;
        total = (gaux*gaux)+1;
    }else total = 1;

	printf("%llx\n",total);

    return 0;
}