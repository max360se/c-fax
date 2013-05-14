/* unesite neku rijec te ispisite koliko ima samoglasnika,
a koliko suglasnika
*/

#include <stdio.h>
#include <string.h>

main()
{
	char rijec[40];
	int i, brsamo = 0, brsug = 0;
	
	puts("Unesite rijec: ");
	gets(rijec);

	for (i=0; i <= strlen(rijec)-1;i++){
		if (rijec[i] == 'a' || rijec[i] == 'e' || rijec[i] == 'i' || rijec[i] == 'o' || rijec[i] == 'u')
			brsamo++;
		else
			brsug++;
		}
	printf("Rijec %s ima %d suglasnika i %d samoglasnika\n", rijec,brsamo,brsug);
	
	if ((brsamo+brsug) == strlen(rijec))
		printf("Sve stima\n");
	else
		printf("Krivo ste napravili zadatak");
}

