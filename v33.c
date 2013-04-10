/* unesi bilo koja dva broja i ispisi brojeve izmedju njih
bez obzira da li je prvi broj veci od drugog ili ne, program uvijek
ispisuje od manjeg ka vecem */

#include <stdio.h>

main()
{
	int a, b, c;

	printf("Unesi prvi broj: ");
	scanf("%d",&a);

	printf("Unesi drugi broj: ");
	scanf("%d",&b);

	if (a <= b){
		for (c = a; c <= b; c++){
			printf("%d\n",c);	
			}
		}
	else
	{
		for (c = b; c <= a; c++){
			printf("%d\n",c);
			}
		}
	}
 

