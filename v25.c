
#include <stdio.h>

main()
{
	char b;

	printf("Unesite broj dana u tjednu, od 1-7:");
	scanf("%c",&b);

	switch (b){
		case 'a':
		case 'A'
			printf("Ocjena A je izvrstan(5)\n",b);
			break;
		case 'b':                                                                                                              
        case 'B':                                                                                                               
            printf("Ocjena B je vrlo dobar (4)\n",b);	
			break; 

		case 'c':                                                                                                              
        case 'C':                                                                                                               
            printf("Ocjena C je dobar(3)\n",b);                                                                             
            break; 

		case 'd':                                                                                                              
        case 'D':                                                                                                               
            printf("Ocjena D je dovoljan(2)\n",b);                                                                             
            break; 

		case 'e':                                                                                                              
        case 'E':                                                                                                               
            printf("Ocjena E je mrsavi dovoljan(2)\n",b);                                                                             
            break; 

		case 'f':                                                                                                              
        case 'F':                                                                                                               
            printf("Ocjena F je nedovoljan(1)\n",b);                                                                             
            break; 
                                                                                                               
   		default:
			printf("morate unijeti broj izmedju 1-7\n");
	}
}
