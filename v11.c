/* uzracunati prosjecnu potrosnju na 100 km ako je poznato:
koliko je ukupno km prijedjeno i koliko je goriva u  l ukupno potroseno 
pg= ukupno potroseno gofivo, pkm=prijedjeni km
ppg_100+prosjecna potrosnja goriva na 100 km */

#include <stdio.h>

main()
{
	float pg, pkm, ppg_100;

	printf("1. napunite rezervoar do kraja\n");
	printf("2. resetirajte kilometrazu!\n");
	printf("3. Vozite se malo po gradu te odite ponovo na neku BP!\n");
	printf("4. Unesite u program koliko ste presli kilometara: ");
	
	scanf("%f",&pkm);
	
	printf("5. Napunite opet rezervoar do kraja!\n");
	printf("6. Procitajte na agregatu koliko ste napunitli te unesite: ");
	
	scanf("%f",&pg);
	
	ppg_100=pg/pkm*100;

	if (ppg_100 < 5)
		printf("Wow, %.2fl/100km\n",ppg_100);
	else if (ppg_100 > 5 && ppg_100 <= 10)
		printf("Srednja zalost, %.2fl/100km\n",ppg_100);
	else
		printf("Previse ti trosi, %.2fl/100km\n",ppg_100);
	
	while ('\n' != getchar());
//		printf("Press enter to..");
		getchar();
}

	
