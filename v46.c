/*
nacrtati slijedeci lik

xxxxxxxx
xxxxxxx
xxxxxx
xxxxx
xxxx
xxx
xx
x

*/
#include <stdio.h>

main()
{
	int s, v, i, j;

	puts("Unesite sirinu: ");
	scanf("%d",&s);

	puts("Unesite visinu: ");
    scanf("%d",&v);

	for (i = 1; i <=v; i++){
		for (j = 1; j<=s-i; j++){
				printf("x");
			}
		printf("\n");
	}
}

