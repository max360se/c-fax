/* iscrtati pravokutnik (samo rubovi) sa oznakom x, sirina i visina pravokutnika je broj x-eva koji se ispisuje
npr sirina 5, visina 5
	xxxxx
	x   x
	x   x
	x   x
	xxxxx

*/

#include <stdio.h>

main()
{
	int s, v, i, j;

	puts("Unesite sirinu pravokutnika: ");
	scanf("%d",&s);

	puts("Unesite visinu pravokutnika: ");
    scanf("%d",&v);

	for (i = 1; i <=v; i++){
		for (j = 1; j<=s; j++){
			if(i==1 || i==v || j==1 || j==s){
				printf("x");
			}
			else printf(" ");
		}
		printf("\n");
	}
}


