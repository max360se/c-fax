/* unesite znakove u neki string, a i neki string b,
spojite stringove te ih ispisite 
*/

#include <stdio.h>
#include <string.h>

main()
{
	char a[20], b[20], c[50];
	
	puts("Unesite vrijednost u niz a: ");
	gets(a);
	puts(a);

	puts("Unesite vrijednost u string b: ");
	strcpy(b, "Programiranje!!!");
	puts(b);
	puts("Spajamo dva stringa, a i b:");
	
	strcpy(c,a);
	strcat(c," ");
	strcat(c,b);
	puts(c);

	printf("Duljina niza c je %d\n", strlen(c));
}

