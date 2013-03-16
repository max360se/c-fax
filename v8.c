/* unesite stupnjeve celsije, a program neka ih convertira u kelvine i fahrenheite
K=C+273.15
F=9/5*C+32 */
#include <stdio.h>

main()
{
	int C;
	float K, F;
	
	printf("Unesite stupnjeve u Celsiusima\n");
	scanf("%d",&C);

	printf("U Kelvinima je je:\n");
	
	K=C+273.15;
	printf("%.2f\n",K);
	
	printf("U Fahrenheiteitima je\n");
	F=(9.0/5.0)*C+32;
	printf("%.2f\n",F);
}
	
