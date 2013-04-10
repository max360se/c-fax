#include <stdio.h>

main()
{
	int b, c;

	scanf("%d",&b);
	
	if (b >= 0){
		for (c = 0; c <= b; ++c){
			printf("%d\n",c);
		}
	}
	
	else
	{
		for (c = 0; c >= b; c--)
			printf("%d\n",c);
	}
}
	
