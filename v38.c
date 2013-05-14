/* unesite bilo kakav cijeli broj i ispisite mu znamenke odvojene sa zarezom
tada mu ispisite koliko je zbroj znamenki i koliko ima znamenki taj broj,
npr unesemeno -24001, program ispise slijedece: 2,4,0,0,1 sumazn = 7 i br zn = 5
*/
#include <stdio.h>

main()
{
	int broj, pamti, i, sumazn = 0, brzn = 0, zn[15];

	printf("Unesite neki broj;");
	scanf("%d",&broj);
	
	pamti  = broj;
	if (broj < 0) broj*=-1;
	
	while(broj != 0){

/* dobivanje zadnje znamenke */
		zn[i]=broj%10;
		sumazn+=zn[i];
/* rezanje zadnje znamenke broju */
		broj/=10;
		i++;
		brzn++;
	}
	printf("Broj %d ima %d cifri, a suma cifri je %d\n", pamti, brzn, sumazn);
	printf("Znamenke broja su:\n");
	for (i=brzn-1; i >= 1;i--)
		printf("%d,",zn[i]);
	printf("%d\n", zn[i]); // vrijednost od i nakon petlje je upravo brzn-1
	printf("Suma znamkenki = ");
	for (i=brzn-1;i >=1;i--)
		printf("%d+",zn[i]);
	printf("%d=%d\n",zn[i],sumazn);
}

/* suma znamenki = 3+2+1+0+0 = 6 */

