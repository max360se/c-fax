/* u jedan niz unosi se ime i prezime odvojeno sa _
program ispisuje duljinu imena, duljinu prezimena
te ispisuje ime i prezime naopako
*/

#include <stdio.h>
#include <string.h>

main()
{
	char ime[40];

	int i, dime=0;

	puts("Unesite ime i prezime odvojeno sa znakom _ ");
	gets(ime);

	for(i=0;i <= strlen(ime)-1;i++){
		if (ime[i] != '_') dime++;
		else break;
	}

	printf("Ime ima %d slova, a prezima %d\n", dime, (strlen(ime)-dime-1));
	printf("Ime i prezime naopako glasi: ");
	
	for (i=strlen(ime)-1; i >=0; i--)
		printf("%c",ime[i]);
	puts("\nIme naopako je: ");
	for (i=dime-1;i>=0;i--)
		printf("%c",ime[i]);
	puts("\nPrezime naopako je: ");
	for (i=strlen(ime)-1;i >= dime+1; i--)
		printf("%c",ime[i]);
	puts("\n");
}

