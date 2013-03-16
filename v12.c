/* unesite neki broj te ispisite da li je taj broj pozitivan
ili negativan */

#include <stdio.h>

main()
{
	int br;
	printf("unesite neki broj: ");
	scanf("%d",&br);
	
	if (br > 0)
		printf("%d je pozitivan!\n",br);
	
	else if (br < 0)
		printf("%d je negativan!\n",br);
	
	else
		printf("%d je jednak 0\n",br);
}

