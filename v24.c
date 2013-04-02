
#include <stdio.h>

main()
{
	int b;

	printf("Unesite broj dana u tjednu, od 1-7:");
	scanf("%d",&b);

	switch (b){
		case 1:
			printf("%d. dan u tjednu je ponedjeljak\n",b);
			break;

		case 2:                                                                                                               
            printf("%d. dan u tjednu je utorak\n",b);    
			break;

		case 3:                                                                                                               
            printf("%d. dan u tjednu je srijeda\n",b);    
			break;

		case 4:                                                                                                               
            printf("%d. dan u tjednu je cetvrtak\n",b);    
			break;

		case 5:                                                                                                               
            printf("%d. dan u tjednu je petak\n",b);    
			break;

		case 6:                                                                                                               
		case 7:
            printf("Vikend je \n",b);    
		default:
			printf("morate unijeti broj izmedju 1-7\n");
	}
}
