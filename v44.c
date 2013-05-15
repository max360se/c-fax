/* test osobnosti 
http://psihijatrija.forumhr.com/t217-test-osobnosti

*/

#include <stdio.h>
#include <ncurses.h>

main()
{
	char odg_1, odg_2, odg_3, odg_4, odg_5, odg_6, odg_7, odg_8, odg_9, odg_10;
	int ukupno = 0;

	puts ("Odaberite jedan od odgovora i unesite ga preko tipkovnice:\n");
	
	puts ("Kad se osjecate najbolje?\na. Ujutro (2 boda)\nb. Poslije podne i prevecer (4 boda)\nc. Kasno navecer (6 bodova)\n");

	odg_1 = getch();
	printf("Unijeli ste %c\n_________________________________\n",odg_1);

	switch(odg_1){
		case 'a':
			ukupno+=2;
				break;
		case 'b':
			ukupno+=4;
				break;
		case 'c';
			ukupno+=6;
				break;
	}

	puts("2. Kad hodate, hodate...\na. Dosta brzo, dugim koracima (6 bodova)\nb. Relativno brzo, sitnim koracima (4 boda)\nc. Ne bas brzo, uspravne glave, gledajuci ispred sebe (7 bodova)\nd. Ne bas brzo, sagnute glave (2 boda)\ne. Vrlo polako (1 bod)\n");

	switch(odg_2){
		case 'a':
			ukupno+=6;
				break;
		case 'b':
			ukupno+=4;
				break;
		case 'c':
			ukupno+=7;
				break;
		case 'd':
			ukupno+=2;
				break;
		case 'e':
			ukupno+=1;
				break;
	}

	puts("3. Kad pricate s ljudima...\na. Stojite prekrizenih ruku (4 boda)\nb. Imate sklopljene ruke (2 boda)\nc. Jednu ili obje ruke drzite na bokovima (5 bodova)\nd. Dodirujete ili gurkate osobu s kojom razgovarate (7 bodova)\ne. Igrate se sa svojim uhom, dodirujete bradu ili uvijate kosu (6 bodova)\n");

	switch(odg_3){
		case 'a':
			ukupno+=4;
				break;
		case 'b':
			ukupno+=2;
				break;
		case 'c':
			ukupno+=5;
				break;
		case 'd':
			ukupno+=7;
				break;
		case 'e':
			ukupno+=6;
				break;
	}

	puts("4. Kad se odmarate, sjedite...\na. Savinutih koljena, noge su opustene jedna uz drugu (4 boda)\nb. Prekrizenih nogu (6 bodova)\nc. Ravno ispruzenih nogu (2 boda)\nd. Na jednoj nozi savinutoj ispod vas (1 bod)\n");

	switch(odg_4){
		case 'a':
			ukupno+=4;
				break;
		case 'b':
			ukupno+=6;
				break;
		case 'c':
			ukupno+=2;
				break;
		case 'd':
			ukupno+=1;
				break;
	}

	puts("5. Kad vas nesto uistinu zabavlja, reagirate...\na. Glasnim smijehom (6 bodova)\nb. Smijehom, ali ne glasnim (4 boda)\nc. Tihim smijuckanjem (3 boda)\nd. Sramezljivim smijeskom (2 boda)\n");

	switch(odg_5){
		case 'a':
            ukupno+=6;
                break;
        case 'b':
            ukupno+=4;
                break;
        case 'c':
            ukupno+=3;
                break;
        case 'd':
            ukupno+=2;
                break;
    }

	puts("6. Kad idete na neko drustveno okupljanje...\na. Glasni ste pri dolasku, tako da vas svatko uoci (6 bodova)\nb. Dolazite nezapazeno i gledate uokolo u potrazi za poznatim ljudima (4 boda)\nc. Potpuno ste neprimjetni i pokusavate da vas se ne zapazi (2 boda)\n");

	switch(odg_6){
        case 'a':
            ukupno+=6;
                break;
        case 'b':
            ukupno+=4;
                break;
        case 'c':
            ukupno+=2;
                break;
	}

	puts("7. Jako ste se udubili u nesto, vrlo ste zaposleni i netko vas prekida...\na. Sretni ste zbog prekida (6 bodova)\nb. Krajnje ste iznervirani zbog toga (2 boda)\nc. Negdje ste između te dvije krajnosti (4 boda)\n");

	switch(odg_7){
        case 'a':
            ukupno+=6;
                break;
        case 'b':
            ukupno+=2;
                break;
        case 'c':
            ukupno+=4;
                break;
    }

	puts("8. Koja vam je boja najdraza?\na. Crvena ili narancasta (6 bodova)\nb. Crna (7 bodova)\nc. Zuta ili svjetloplava (5 bodova)\nd. Zelena (4 boda)\ne. Tamnoplava ili ljubicasta (3 boda)\nf. Bijela (2 boda)\ng. Smedja ili siva (1 bod)\n");

	switch(odg_8){
        case 'a':
            ukupno+=6;
                break;
        case 'b':
            ukupno+=7;
                break;
        case 'c':
            ukupno+=5;
                break;	
		case 'd':
            ukupno+=4;
                break;
		case 'e':
            ukupno+=3;
                break;
		case 'f':
            ukupno+=2;
                break;
		case 'g':
            ukupno+=1;
                break;
	}

	puts("9. Kad ste navecer u krevetu, nekoliko trenutaka prije nego sto cete zaspati...\na. Ispruzeni ste na ledjima (7 bodova)\nb. Ispruzeni ste potrbuske (6 bodova)\nc. Lagano ste se savinuli na boku (4 boda)\nd. Glavu ste oslonili na jednu ruku (2 boda)\ne. Glava vam je ispod pokrivaca (1 bod)\n");

	switch(odg_9){
        case 'a':
            ukupno+=7;
                break;
        case 'b':
            ukupno+=6;
                break;
        case 'c':
            ukupno+=4;
                break;
        case 'd':
            ukupno+=2;
                break;
        case 'e':
            ukupno+=1;
                break;
	}

	puts("10. Često sanjate da...
a. Padate (4 boda)
b. Se tučete ili borite (2 boda)
c. Nešto ili nekoga tražite (3 boda)
d. Da letite ili lebdite (5 bodova)
e. Uglavnom ne sanjate (6 bodova)
f. Snovi su vam uvijek ugodni (1 bod)
