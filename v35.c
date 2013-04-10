/* ispisati 2 stupca, prvi: brojevi od 1 - 256, drugi stupac ASCII znakovi */
#include <stdio.h>

main()
{
	int i;
	
	for (i=1; i <= 256; i++){
		printf("%d\t%c\n",i,i);
	}
}

