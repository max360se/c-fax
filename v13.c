/* unesi broj i vidi dali je paran ili nije, te ispisi prigodni text */

#include <stdio.h>

main()
{
	int br;
	printf("Unesite neki broj: ");
	scanf("%d",&br);
	
	if (br%2==0)
		printf("Broj %d je paran\n",br);

	else
		printf("Broj %d je neparan\n",br);
}

