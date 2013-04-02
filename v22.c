/* unsesite neke 3 duljine te provjerite da li su to stranice trokuta. Ako jesu, kategorizirajte troku: da li je jednako
stranican, jednakokracan ili raznostranican. Ako je jednakokracan ili raznostranican moguce je da je pravokutan pa
neka se i ta opcija provjeri. Na kraju izracunati porvsinu trokuta P = sqrt (s(s-a) (s-b) (s-c))
*/

#include <stdio.h>
#include <math.h>

main()
{
	int a, b, c;
	float P, s;

	printf("Unesi prvu stranicu trokuta\n");
	scanf("%d",&a);

	printf("Unesi drugu stranicu\n");
	scanf("%d",&b);

	printf("Unesi trecu stranicu\n");
	scanf("%d",&c);	

	s = (a+b+c)/2.0;

	if (a+b>c && a+c>b && b+c>a){
		if (a==b && b==c)
			printf("trokut je jednakostranican\n");
		
		else if (a==b || b==c || a==c) {
			printf("Trokut je jednakokracan\n");	
			}
		
		else if (c = sqrt (pow(a,2)+pow(b,2)) || a = sqrt (pow(c,2)+pow(b,2)) || b = sqrt (pow(a,2)+pow(c,2))
		{	
		printf("Trokut je raznostranican i pravokutan!\n");

		else 
			printf("Trokut je raznostranican!\n");
		}
	P = sqrt(s*(s-a)*(s-b));
	printf("P=%.2f\n",P);
	}

	else 
		printf("To nisu stranice trokuta\a\a\a\n");
}
