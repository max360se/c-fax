/* unesite 10 elemenata polja, ispisite njihovu sumu i prosjek
nakon toga ispisite dva stupca, prvi je broj, a drugi odstupanje
od prosjeka */
#include <stdio.h>

main()
{
	int i, suma, prosjek;
	int polje[10];

	suma = prosjek = 0;

	puts ("Unesite sada 10 izmjerenih visina u cm: ");

	for (i = 0; i <= 9; i++){
		scanf("%d", &polje[i]);
		suma+=polje[i];
	}		

	printf("Suma svih visina je %d, a prosjecna visina = %.2f\n",suma,suma/10.0);
	printf("BROJ\t\tODSTUPANJE\n__________________________\n");

	for (i=0; i <= 9; i++){
		printf("%d\t\t%.2f\n",polje[i],(suma/10.0)-polje[i]);
}
}
