#include <stdio.h>
#include <string.h>

int main(){
	
	int Cred1, Cred2, Cred3, soma1, soma2, soma3;
			
	scanf("%d %d %d",&Cred1, &Cred2, &Cred3);
	
	soma1 = Cred1 + Cred2;
	soma2 = Cred1 + Cred3;
	soma3 = Cred2 + Cred3;
	
	if (Cred1 == Cred2 || Cred2 == Cred3 || Cred1 == Cred3)
		printf("S\n");
	else if(Cred1 == Cred2 || Cred1 == Cred3)
		printf("S\n");
	else if(soma1 == Cred3 || soma2 == Cred2 || soma3 == Cred1)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}