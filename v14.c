/* unesi broj i vidi dali je paran ili nije, te ispisi prigodni text */

#include <stdio.h>

main()
{
	int br;
	printf("Unesite neki broj: ");
	scanf("%d",&br);
	
	if (br%2==0){
	
	if (br>=0)
		printf("Broj %d je paran i pozitivan\n",br);
	else
		printf("Broj %d je paran i negativan\n",br);
	}
// sada zavrsavamo pricu o parnim br

	else { // tu su nam neprarni
	if (br>=0)
		printf("Broj %d je neparan i pozitivan\n",br);
	else
		printf("Broj %d je neparan i negativan\n",br);
	} // zavrsava se i prica sa neparnim
	getchar();
}

