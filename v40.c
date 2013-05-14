/* unesite dva imena, ispisite odnos duljina imena */

#include <stdio.h>
#include <string.h>

main()
{
	char ime1[20], ime2[20];

	printf("Unesite prvo ime: ");
	gets(ime1);

	printf("Unesite drugo ime: ");
	gets(ime2);

	if (strlen(ime1)>strlen(ime2))
		printf("%s je duze od imena %s\n",ime1,ime2);
	else if (strlen(ime1)<strlen(ime2))
        printf("%s je duze od imena %s\n",ime2,ime1);
	else
        printf("Duljina imena %s je jednaka %s\n",ime1,ime2);
}

