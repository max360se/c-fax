/*ispisati sve brjeve od 0 do unesenog broja*/

#include <stdio.h>

int main()
{
	int broj, brojac;

	brojac = 0;
	broj = getchar();
	while (brojac <= broj){
		printf("%d\n", broj);
			brojac = brojac + 1;
	}
}

