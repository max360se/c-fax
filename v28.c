/* program generira cijenu bez kupnje bez pdv-a, sa pdv-om te konacnu cijenu koja ovisi o nacinu placanja, gotovina ili 
kartica te iznosu racuna sa pdv-om, Postoji mogucnost koristenja 2 kk, amex, rate od 1-12, te master, rate od 1-6. Ispisuje
se iznos novih bodova ako je kupac clan trgovine i to svakih 100kn je 1 bod
ako je cijena sa pdv-om veca od 1000kn kupac ima popust na gotovinu od 5%
*/

#include <stdio.h>
/* #include <ncurses.h>
*/
#define	PDV 0.25 
#define PG	0.05	/* popust na gotovinu */

int main(void)
{
	float cijenabezpdv, cijenasapdv, konacnacijena;
	int rate;
	char np;

	printf("cijena bez PDV-a iznosi: ");
	scanf("%f", &cijenabezpdv);

	cijenasapdv = cijenabezpdv * (1+PDV);

	printf("Cijena sa PDV-om iznosi %.2f\n", cijenasapdv);
	printf("Unesite g ako placate gotovinom i k ako karticom: ");

/* dok je getchar razlicit od \n ili EOF np uzme getchar */

	while ((np = getchar()) != '\n' && np != EOF);
		np = getchar();

	printf("\n");
	printf("Odabrali ste %c\n", np);

	switch(np){
		case 'g':
			case 'G':
				printf("Odabrali ste placanje gotovinom\n");
				
				if (cijenasapdv >= 1000){
					konacnacijena = cijenasapdv * (1-PG);
					}
				else {
					printf("Ostavili ste 5\%, konacna cijena je %.2f\n", konacnacijena);	
				}
				printf("konacna cijena je %.2f\n", cijenasapdv);
				break;
		case 'k':
			case 'K':
				printf("Odabrali ste placanje karticom\n");
				printf("Za placanje amexom odaberite 1, za mastercard odaberite 2: ");
				
				int kk;
				scanf("%d", &kk);

				if (kk == 1){
					printf("unesite broj rata od 1-12: ");
					scanf("%d", &rate);

						if (rate == 0)
							printf("Konacna cijena je %.2f", cijenasapdv);
						
					printf("Cijena je %.2f, a jedan obrok iznosi %.2f\n", cijenasapdv, cijenasapdv/rate);
					}

				if (kk == 2){                                                                                                  
                    printf("unesite broj rata od 1-6: ");                                                                     
                    scanf("%d", &rate);                                                                                        
                                                                                                                               
                        if (rate == 0)                                                                                         
                            printf("Konacna cijena je %.2f", cijenasapdv);                                                     
                                                                                                                               
                    printf("Cijena je %.2f, a jedan obrok iznosi %.2f\n", cijenasapdv, cijenasapdv/rate);     
					}
					break;
				default: printf("Unijeli ste pogresan znak za nacin plaacanja\n");
	}
}	
