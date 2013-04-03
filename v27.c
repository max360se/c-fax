/* korisnik bira dvije boje (R,G || B, kao red, green ili blue,
a program mu ispisuje koja se boja dobije mjesanjem tih dviju.
r+b = magenta, r+g = zuta, g+b = cijan
ukoliko korisnik greskom unese dva jednaka slova neka program ispise da je pogresan unos
*/

#include <stdio.h>

main()
{
	char boja1, boja2;

	printf("R, G or B\n");
/*	boja1 = getchar();
	printf("Prva boja je %c\n",boja1);
	do{
		boja2 = getchar();
		}
		while (boja2 == boja1);
*/
	if (boja1 == 'r' && boja2 == 'g' || boja1 == 'g' && boja2 == 'r')
		printf("r + g = yellow\n");
	else if (boja1 == 'r' && boja2 == 'b' || boja1 == 'b' && boja2 == 'r')
		printf("r + b = magenta\n");
	else if (boja1 == 'g' && boja2 == 'b' || boja1 == 'b' && boja2 == 'g')                                                     
        printf("g + b = cyan\n"); 	
}

