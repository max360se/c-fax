/* Izracunavanje postotka ocjene iz bodova neke od obvez, npr. kolokvij 1
u polje unosimo ocjene studenata, program po formuli
unosi se 5 ostvarenih bodova te izracunava postotak ocjene za tih 5 bodova
5 bodova su ostvarenja od 5 studenata

formula:
%ocjene = OB - ((PR * MB) / 100)
*/

#include <stdio.h>

main()
{
	int bodovi[5], i;
	float p_ocjene[5];
	int MP, MB, PP, PR, OB;

	puts("Racunamo postotke ocjene od Kolokvija 1 teorija!!!\n");

	MP = 25;
	PR = 0;
	PP = 0;
	MB = 100;

	puts("Unesite sada ostvarenja studenata: ");
	for (i = 0; i <= 4; i++){
		scanf("%d",&bodovi[i]);
	}

	for (i = 0; i <= 4; i++){
		p_ocjene[i] = ((bodovi[i] - (PR * MB) / 100) / ((float) MB - (PR*MB) / 100)) * (MP-PP) + PP;
	}

	puts("BR BODOVA\tPOSTOTAK OCJENA\n");

	for (i = 0; i <= 4; i++){
		printf("%d\t\t%.2f\n",bodovi[i],p_ocjene[i]);
	}
}

