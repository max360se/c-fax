/*
unesite jedan od znakova binarnih operacija +,-,*,/,m
m je oznaka modulo, tj ostatka pri djeljenju
*/

#include <stdio.h>

main()
{
	int prvi, drugi;
	char o;
	
	printf("unesite oznaku operacije:+,-,*,/,m(za modulo)\n" );
	o = getchar();
	printf("odabrali ste %c\n",o);
	
	printf("Unesite prvi operator: ");
	scanf("%d",&prvi);

	printf("Unesite drugi operator: ");
	scanf("%d",&drugi);

	switch(o){
		case '+':
			printf("odabrali ste zbrajanje: %d+%d=%d",prvi,drugi,prvi+drugi);
			break;
                                                                                                               
        case '-':                                                                                                              
            printf("odabrali ste oduzimanje: %d-%d=%d",prvi,drugi,prvi-drugi);                                                   
            break;                                                                                                             
                                                                                                                       
        case '*':                                                                                                              
            printf("odabrali ste mnozenje: %d*%d=%d",prvi,drugi,prvi*drugi);                                                   
            break;                                                                                                             
                                                                                    
        case '/':                                                                                                              
            printf("odabrali ste djeljenje: %d/%d=%.2f",prvi,drugi,float(prvi)/float(drugi));                                                   
            break;                                                                                                             
                     
		case 'm':                                                                                                              
            printf("odabrali ste ostatak: %dmodulo%d=%d",prvi,drugi,prvi%drugi);                                                   		
			break;    
		default:
			printf("Niste unijeli pravi znak\n";
	}
}

