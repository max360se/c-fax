/*
 unesite po zelji datum kao dan i mjesec u dvije zasebne varijable
ispisite u kojem je godisnjem dobu taj dan
*/
#include <stdio.h>

main()
{
	int d, m;

	printf("Dan\n");
	scanf("%d",&d);

	printf("Mjesec\n");
	scanf("%d",&m);

	if (d>= 1 && d <=31 && m >= 1 && m <= 12){

	if (m == 3 && d >= 21 || m == 4 || m == 5 || m == 6 && d < 21)
		printf("%d.%d je u Proljetnom razdoblju!!!\n",d,m);

	else if (m == 6 && d >= 21 || m == 7 || m == 8 || m == 9 && d < 23)
		printf("%d.%d je u Ljetnom razdoblju!\n",d,m);	

	else if (m == 9 && d >= 23 || m == 10 || m == 11 || m == 12 && d < 21)
		printf("%d.%d je u Jesenskom razdoblju\n",d,m);

	else
		printf("%d.%d je u Zimskom razdoblju\n",d,m);
	}

	else
		printf("%d.%d NE POSTOJI U NASEM KALENDARU\n",d,m);
}

