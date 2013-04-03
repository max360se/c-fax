/* unesite parametre a i b, tako da mozete rijesiti jednadzbu
ax+b=0 .... a i b neka budu cijeli brojevi */
#include <stdio.h>

main()
{
	int a, b;
//	float x;

	printf("Unesite a\n");
	scanf("%d",&a);

	printf("Unesite b\n");
	scanf("%d",&b);


	float x=-b/(float)a;
	printf("varijabla x je: ");
	printf("%.2f\n",x);
}

