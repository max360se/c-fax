/* unestie koordinate dvije tocke te izracunajte udaljenost tih tocaka
d=korijen((x2-x1) na kv+(y2-y1) na kv) */

#include <stdio.h>
#include <math.h>

main()
{
	int x1, x2, y1, y2;
	float d;
	
	printf("Unesite koordinate prve tocke:\n");
	printf("x1=");
	scanf("%d",&x1);

	printf("Unesite koordinate prve tocke:\n");
        printf("y1=");
        scanf("%d",&y1);

/*	printf("Unesite koordinate prve tocke:\n");
        printf("x1=");
        scanf("%d",&x1);
*/

	printf("T1(%d, %d)\n",x1,y1);

	printf("Unesite koordinate druge tocke:\n");
        printf("x2=");
        scanf("%d",&x2);
	printf("Unesite koordinate prve tocke:\n");
        printf("y2=");
        scanf("%d",&y2);

	printf("T2(%d, %d)\n",x2,y2);

	int m,n;x2-x1;n=y2=y1;
	d=sqrt(m*m+n*n);

	printf("Udaljenost tocaka je %.2f", d);

}

