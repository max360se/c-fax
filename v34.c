/* ispisati 3 stupca, prvi: brjevi od 1-20, drugi stupac kvadrati brojeva
treci stupac korijeni brojev */

#include <stdio.h>
#include <math.h>

main()
{
	int i;
	
	printf("Broj\tKvadrat\tKorijen\n");
	printf("======================\n");

	for (i=1; i <= 20; i++){
		printf("%2d\t%2d\t%4.2f\n",i,i*i,sqrt(i));
	}
}

