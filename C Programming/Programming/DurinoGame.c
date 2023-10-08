#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int random(int a,int b)
{
   return a + rand() % (b - a + 1);
}

int main(){

	bool gmode = true;
	int x;

	sleep(1);

	do{

    char decision;
	char mode;

    title();
    printf("\n");
	sleep(1);
	menu();
	printf("\n\n");
	for(x = 1; x <= 22; x++){
		printf("  ");
	}
	printf("INPUT HERE: ");
	scanf(" %c", &mode);
	system("cls");

	if(mode == 'Q' || mode == 'q'){
		loading();
		story();
		battle();
		system("cls");
		prompt();
			printf("\n");
			for(x = 1; x <= 20; x++){printf("  ");}
			printf("Input here: ");
			scanf(" %c", &decision);
			if(decision == 'Q' || decision == 'q'){
                system("cls");
                gmode = true;
			}
                else{
                    system("cls");
                    bye();
                    gmode = false;
                }
	}
		else if(mode == 'W' || mode == 'w'){
			loading();
			pve();
			system("cls");
			prompt();
			printf("\n");
			for(x = 1; x <= 20; x++){printf("  ");}
			printf("Input here: ");
			scanf(" %c", &decision);
			if(decision == 'Q' || decision == 'q'){
                system("cls");
                gmode = true;
			}
                else{
                    system("cls");
                    bye();
                    gmode = false;
                }
		}
			else if(mode == 'E' || mode == 'e'){
				loading();
				help();
				prompt();
                printf("\n");
                for(x = 1; x <= 20; x++){printf("  ");}
                printf("Input here: ");
                scanf(" %c", &decision);
                if(decision == 'Q' || decision == 'q'){
                    system("cls");
                    gmode = true;
                }
                    else{
                        system("cls");
                        bye();
                        gmode = false;
                    }
                }
				else if(mode == 'R' || mode == 'r'){
					system("cls");
					bye();
					gmode = false;
				}

	}while(gmode);

}


//zeus
void loading(){
	int i, x;


	for(i = 0; i <= 1; i++){
		for(x = 0; x < 11; x++){
			printf("\n");
		}
		for(x = 1; x <= 26; x++){
			printf("  ");
		}
	speak("L O A D I N G ");
	usleep(700000);
	printf(". ");
	usleep(700000);
	printf(". ");
	usleep(700000);
	printf(".");
	usleep(700000);
	system("cls");

	}
}

void title(){
	int x;

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 26; x++){
		printf("  ");
	}
	speak("W E L C O M E");
	sleep(1);
	system("cls");
	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 29; x++){
		printf("  ");
	}
	printf("T O");
	sleep(1);
	system("cls");

	for(x = 0; x < 6; x++){
		printf("\n");
	}
	for(x = 1; x <= 20; x++){
		printf("  ");
	}
	printf("q=p");
	for(x = 1; x <= 29; x++){
		printf("~");
	}
	printf("q=p\n");
	for(x = 1; x <= 20; x++){
		printf("  ");
	}
	printf("|||");
	for(x = 1; x <= 11; x++){
		printf(" ");
	}
	speak("LEGENDS");
	for(x = 1; x <= 11; x++){
		printf(" ");
	}
	printf("|||\n");

	for(x = 1; x <= 20; x++){
		printf("  ");
	}
	printf("|||");
	for(x = 1; x <= 13; x++){
		printf(" ");
	}
	speak("O F");
	for(x = 1; x <= 13; x++){
		printf(" ");
	}
	printf("|||\n");
		for(x = 1; x <= 20; x++){
		printf("  ");
	}
	printf("|||");
	for(x = 1; x <= 12; x++){
		printf(" ");
	}
	speak("DREUS");
	for(x = 1; x <= 12; x++){
		printf(" ");
	}
	printf("|||\n");

	for(x = 1; x <= 20; x++){
		printf("  ");
	}
	printf("d=b");
	for(x = 1; x <= 29; x++){
		printf("~");
	}
	printf("d=b\n");
}

void menu(){

	int x;

	for(x = 1; x <= 22; x++){
		printf("  ");
	}
	speak("INPUT [Q] BEGIN STORY\n");
	for(x = 1; x <= 22; x++){
		printf("  ");
	}
	usleep(100);
	speak("INPUT [W] PLAY PvE\n");
	for(x = 1; x <= 22; x++){
		printf("  ");
	}
	usleep(100);
	speak("INPUT [E] HELP & INFO\n");
	for(x = 1; x <= 22; x++){
		printf("  ");
	}
	usleep(100);
	speak("INPUT [R] TO EXIT\n");
}

void bye(){

    system("cls");

	int x;

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 38; x++){
 		printf(" ");
	}
	printf("q=p");
	for(x = 1; x <= 37; x++){
		printf("~");
	}
	printf("q=p\n");
	for(x = 1; x <= 38; x++){
		printf(" ");
	}
	printf("||| ");
	printf(" Hope we meet again hero/n't . . . ");
	printf(" |||\n");
	for(x = 1; x <= 38; x++){
		printf(" ");
	}
	printf("d=b");
	for(x = 1; x <= 37; x++){
		printf("~");
	}
	printf("d=b");
	for(x = 0; x < 11; x++){
		printf("\n");
	}
}

void help(){

    int x;

	for(x = 0; x < 2; x++){
		printf("\n");
	}
	for(x = 1; x <= 15; x++){printf("  ");}

	printf("+ This program is a short story boss battle game,\n");
	for(x = 1; x <= 15; x++){printf("  ");}printf("  where the battle is based on your luck and wits.\n\n");

	for(x = 1; x <= 15; x++){printf("  ");}printf("+ This program's main keys are Q,W,E and R keys\n\n");
	for(x = 1; x <= 15; x++){printf("  ");}printf("+ Battle Key Binds: Q - is for normal attack || W - is for Heavy Slash\n");
    for(x = 1; x <= 15; x++){printf("  ");}printf("  E - is for Parry & Slash || R - is for Ultimate.\n\n");
    for(x = 1; x <= 15; x++){printf("  ");}printf("+ The Heavy Slash and Parry & Slash is limited to 3 uses only\n\n");
    for(x = 1; x <= 15; x++){printf("  ");}printf("+ Your ultimate skill is usable only once and when you are 30 HP below\n\n");
    for(x = 1; x <= 15; x++){printf("  ");}printf("+ The boss deals higher damage when he is 35 HP below\n\n");
}

void prompt(){

    int x;

    for(x = 0; x < 11; x++){
        printf("\n");
    }
    for(x = 1; x <= 20; x++){
        printf("  ");
    }
    printf("[Q] MAIN MENU ~~~~~()=O\n\n");
    for(x = 1; x <= 20; x++){printf("  ");}printf("[W] EXIT GAME ~~~~~()=O\n");
}


//adrian
void story(){

	int x;

	for(x = 0; x < 8; x++){
		printf("\n");
	}
	for(x = 1; x <= 20; x++){
		printf(" ");
	}

printf("	        _    .  ,   .           .  \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf("    *  / \\_ *  / \\_      _  *        *   /\\'__        *   \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf("      /   \\  /    \\,   ((        .    _/  /  \\  *'.  \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf(" .   /\\/\\  /\\/ :' __ \\_  `          _^/  ^/    `--. \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf("    /    \\/  \\  _/  \\-'\\      *    /.' ^_   \\_   .'\\  * \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf("  /\\  .-   `. \\/     \\ /==~=-=~=-=-;.  _/ \\ -. `_/   \\ \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf(" /  `-.__ ^   / .-'.--\\ =-=~_=-=~=^/  _ `--./ .-'  `-  \n");
	for(x = 1; x <= 20; x++){
		printf(" ");
	}
printf("/        `.  / /       `.~-^=-=~=^=.-'      '-._ `._  \n\n");

	for(x = 1; x <= 20; x++){
		printf(" ");
	}

	speak("Once upon a time, ");
	sleep(1);
	speak("in a land named Dreus . . .");
	sleep(1);
	system("cls");

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	speak("Where the last remaining Legend can be found, named Zeus\n");
	for(x = 1; x <= 10; x++){
		printf("  ");
	}
	sleep(1);
	speak("Zeus, was a mighty, brave and powerful Legend . . .");
	sleep(2);
	system("cls");

	for(x = 0; x < 2; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){		printf("  ");}

    printf("                      _,-._ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                     /  |  \\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                    []--|--[] \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                     \\  |  / \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                     .'-.-'. \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                 _,-'  ,-.  '-,_ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                / {-, /\\+/\\ ,-} \\\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("               | |++]/:/ \\:\\[++| | \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("               | /:| \\_____/ |:\\ | \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("              /  \\-| | ___ | |-/  \\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("    \\  ,,--``\\     \\ ||___|| / \\   /``--,,  / \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf(" .,__*-\\ # #  \\  /  \\:|:::|:/   \\ / # #  /-*_ ,. \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf(" `.~    \\,,--``./   /*-,_,-*|    .``--,,/     ~' \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("   `\\__~  ,--'/\\   /        |    /\\`--. `,__,` \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("      `--'  //:/  /     `   \\    \\:\\  `--` \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("            /:/   /     `   \\     \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("           /:/   /      ``   \\     \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          /:/    /      ``   \\      \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          `,    /      ``     \\      \\, \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("           /    /      ``     \\       \\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          /    /        ``     \\       \\  \n\n");

    for(x = 1; x <= 10; x++){printf("  ");}
	speak("He has saved the land of Dreus from disasters and invasions,\n");
	for(x = 1; x <= 10; x++){
		printf("  ");
	}
	sleep(1);
	speak("too many times that made him worthy to lead the people of Dreus . . .");
	sleep(2);
	system("cls");

    for(x = 0; x < 2; x++){
		printf("\n");
	}


for(x = 1; x <= 10; x++){printf("  ");}printf("                                                                _ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("                                                              _( (~\\ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("       _ _                        /                          ( \\> > \\ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("   -/~/ / ~\\                     :;                \\       _  > /(~\\/ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  || | | /\\ ;\\                   |l      _____     |;     ( \\/    > > \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  _\\\\)\\)\\)/ ;;;                  `8o __-~     ~\\   d|      \      // \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" ///(())(__/~;;\\                  \"88p;.  -. _\\_;.oP        (_._/ / \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("(((__   __ \\\\   \\                  `>,% (\\  (\\\\./)8\"         ;:'  i \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(")))--`.'-- (( ;,8 \\               ,;%%%:  ./V^^^V'          ;.   ;. \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("((\\   |   /)) .,88  `: ..,,;;;;,-::::::'_::\\   ||\\         ;[8:   ; \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" )|  ~-~  |(|(888; ..``'::::8888oooooo.  :\\`^^^/,,~--._    |88::  | \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" |\\ -===- /|  \8;; ``:.      oo.8888888888:`((( o.ooo8888Oo;:;:'  | \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" |_~-___-~_|   `-\\.   `        `o`88888888b` )) 888b88888P""'     ; \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" ; ~~~~;~~         \"`--_`.       b`888888888;(.,\"888b888\"  ..::;-' \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("   ;      ;              ~\"-....  b`8888888:::::.`8888. .:;;;'' \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("      ;    ;                 `:::. `:::OOO:::::::.`OO' ;;;'' \n");
for(x = 1; x <= 10; x++){printf("  ");}printf(" :       ;                     `.      \"``::::::''    .' \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ;                           `.   \\_              / \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  ;       ;                       +:   ~~--  `:'  -'; \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("                                   `:         : .::/   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("      ;                            ;;+_  :::. :..;;;   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("                                   ;;;;;;,;;;;;;;;,; \n\n");

    for(x = 1; x <= 10; x++){
		speak("  ");
	}
	speak("Up until one night, chaos came and caused havoc to the city\n");
	for(x = 1; x <= 10; x++){
		speak("  ");
	}
	sleep(1);
	speak("Zeus was furiously battling against the Minions of Comfrogu . . .");
	sleep(2);
	system("cls");

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	speak("Zeus thought the battle would be victorious . . .\n");
	for(x = 1; x <= 10; x++){
		speak("  ");
	}
	sleep(1);
	speak("Unfortunately, the invader's last minion, a Dark Sorcerer\n");
	for(x = 1; x <= 10; x++){
		speak("  ");
	}
	speak("Used a dark spell that can possess the mind of anyone within its range . . .\n");
	sleep(2);
	system("cls");

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	speak("Which ended up Zeus using a forbidden skill called Gluttony\n");
	for(x = 1; x <= 10; x++){
		speak("  ");
	}
	sleep(1);
	speak("Gluttony can absorb anything that the user wants to . . .\n");

	sleep(2);
	system("cls");

	for(x = 0; x < 2; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	printf("                  *  (_,-._)  *\n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                   \\_/  |  \\_/ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                    []~~|~~[] \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                     \\  |  / \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                     .'-.-'. \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                 _,-'  ,-.  '-,_ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("                / {-, /\\#/\\ ,-} \\\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("               | |^^]/:/ \\:\\[^^| | \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("               | /:| \\_____/ |:\\ | \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("              /  \\-| | ___ | |-/  \\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("    \\  ,,--``\\     \\ ||___|| / \\   /``--,,  / \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf(" .,__*-\\ ^ ^  \\  /  \\:|:::|:/   \\ / ^ ^  /-*_ ,. \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf(" `.~    \\,,--``./   /*-,_,-*|    .``--,,/     ~' \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("   `\\__~  ,--'/\\   /        |    /\\`--. `,__,` \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("      `--'  //:/  /     `   \\    \\:\\  `--` \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("            /:/   /     `   \\     \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("           /:/   /      ``   \\     \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          /:/    /      ``   \\      \\:\\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          `,    /      ``     \\      \\, \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("           /    /      ``     \\       \\ \n");
    for(x = 1; x <= 10; x++){printf("  ");}printf("          /    /        ``     \\       \\  \n");

    for(x = 1; x <= 10; x++){
		speak("  ");
	}
	speak("Which made Zeus possessed by the dark spell,\n");
	for(x = 1; x <= 10; x++){
		speak("  ");
	}
	sleep(1);
	speak("making him unable to control himself and attack the people of Dreus . . .\n");
	sleep(2);
	system("cls");

    for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	speak("Suddenly a shining light appeared on the battlefield!\n");
	for(x = 1; x <= 10; x++){
		printf("  ");
	}
	sleep(2);
	speak("This shining light came from an unknown warrior . . .");
	sleep(2);
	system("cls");

	for(x = 0; x < 11; x++){
		printf("\n");
	}
	for(x = 1; x <= 10; x++){
		printf("  ");
	}

	speak("Miraculously! The unknown warrior was YOU!\n");
	for(x = 1; x <= 10; x++){
		printf("  ");
	}
	sleep(2);

}

void battle(){

    system("cls");

	int hp = 100;
	int ehp = 100;
	int evd = 3;
	int hvy = 3;
	int ult = 1;
	int dmg, edmg, qt;
	int x, y, i;
	char atk;
	char p1[60];

    for(i = 0; i < 2; i++){
		printf("\n");
	}

for(x = 1; x <= 10; x++){printf("  ");}printf("               _,._ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("   .||,       /_ _\\\\ \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  \\.`',/      |'L'| | \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  = ,. =      | -,| L  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("  / || \\    ,-'\\\"/,'`. \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||     ,'   `,,. `. \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ,|____,' , ,;' \\| |  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("   (3|\\    _/|/'   _| |   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("   ||/,-''  | >-'' _,\\\\  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||'      ==\\ ,-'  ,'  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |  V \\ ,|   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |    |` |   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |    |   \\  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |    \\    \\  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |     |    \  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |      \_,-'   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||       |___,,--\")_\\   \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||         |_|   ccc/  \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||        ccc/         \n");
for(x = 1; x <= 10; x++){printf("  ");}printf("    ||                  \n\n");
	for(i = 1; i <= 12; i++){printf("  ");}printf("Dreussian Wizard: ");
	speak("Kindly state your name stranger . . .\n\n");
	for(i = 1; i <= 12; i++){printf("  ");}speak("Note: Use underscore as space.\n");
	for(i = 1; i <= 12; i++){printf("  ");}printf("Enter Name: ");
	scanf(" %s", &p1);
	system("cls");

	for(x = y; x != 0; x){

    for(i = 0; i < 9; i++){
		printf("\n");
	}
	for(i = 1; i <= 12; i++){printf("  ");}printf("[%d] ~~~~~()=O %s's HP \n\n", hp, p1);
	for(i = 1; i <= 12; i++){printf("  ");}printf("[%d] ~~~~~()=O Possessed Zeus's HP\n\n", ehp);
	for(i = 1; i <= 12; i++){printf("  ");}printf("[Q] NORMAL ATTACK\t\t");
    printf("[W] HEAVY SLASH (%d) - left\n", hvy);
    for(i = 1; i <= 12; i++){printf("  ");}printf("[E] PARRY & SLASH (%d) - left\t", evd);
    printf("[R] %s's LEGENDARY MIGHT\n\n", p1);
	for(i = 1; i <= 12; i++){printf("  ");}printf("Input here: ");
	scanf(" %c", &atk);
	printf("\n");

	if(atk == 'Q' || atk == 'q'){
        if(ehp < 35){
            srand(time(NULL));
            dmg = random(4, 6);
            edmg = random(7, 9);

            ehp -= dmg;
            hp -= edmg;
        }
            else{
                srand(time(NULL));
                dmg = random(4, 6);
                edmg = random(5, 7);

                ehp -= dmg;
                hp -= edmg;
            }
	}
		else if(atk == 'W' || atk == 'w'){
            if(hvy > 0){
                if(ehp <= 35){
                    srand(time(NULL));
                    dmg = random(6, 8);
                    edmg = random(7, 9);

                    ehp -= dmg;
                    hp -= edmg;
                    hvy--;
                }
                    else{
                        srand(time(NULL));
                        dmg = random(6, 8);
                        edmg = random(5, 7);

                        ehp -= dmg;
                        hp -= edmg;
                        hvy--;
                    }
            }
                else{
                    if(ehp <= 35){
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(7, 9);

                        ehp -= dmg;
                        hp -= edmg;
                    }
                    else{
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(5, 7);

                        ehp -= dmg;
                        hp -= edmg;
                    }
                }
		}
			else if(atk == 'E' || atk == 'e'){
                if(evd > 0){
                    if(ehp <= 35){
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(2, 4);

                        ehp -= dmg;
                        hp -= edmg;
                        evd--;
                    }
                        else{
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(0, 3);

                            ehp -= dmg;
                            hp -= edmg;
                            evd--;
                        }
                }
                    else{
                        if(ehp <= 35){
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(7, 9);

                            ehp -= dmg;
                            hp -= edmg;
                        }
                        else{
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(5, 7);

                            ehp -= dmg;
                            hp -= edmg;
                        }
                    }
			}
				else if(atk == 'R' || atk == 'r'){
                    if(ehp <= 35){
                        if(hp <= 30 && ult == 1){
                                srand(time(NULL));
                                dmg = random(10, 12);
                                edmg = random(7, 9);

                                ehp -= dmg;
                                hp -= edmg;
                                ult--;
                                hp += 9;
                            }
                            else{
                                srand(time(NULL));
                                dmg = random(4, 6);
                                edmg = random(7, 9);

                                ehp -= dmg;
                                hp -= edmg;
                            }
                    }
                        else{
                            if(hp <= 30 && ult == 1){
                                srand(time(NULL));
                                dmg = random(10, 12);
                                edmg = random(5, 7);

                                ehp -= dmg;
                                hp -= edmg;
                                ult--;
                                hp += 9;
                            }
                            else{
                                srand(time(NULL));
                                dmg = random(4, 6);
                                edmg = random(5, 7);

                                ehp -= dmg;
                                hp -= edmg;
                            }
                        }
				}
				else{
                    system("cls");
                    y = 1;
				}


		if(hp < 1){
            system("cls");
            defeat();
            sleep(2);
			y = 0;
		}
			else if(ehp < 1){
                system("cls");
				victory();
				sleep(2);
				y = 0;
			}
				else if(ehp > 0){
					y = 1;
				}
					else if(hp > 0){
						y = 1;
					}
					else{
						printf("\nHow come you've reached the Land of Yusi Bii");
					}
		system("cls");
		x = y;
	}
}

void pve(){

	int hp = 100;
	int ehp = 100;
	int evd = 3;
	int hvy = 3;
	int ult = 1;
	int dmg, edmg, qt;
	int x, y, i;
	char atk;

    for(i = 0; i < 11; i++){
		printf("\n");
	}
	for(i = 1; i <= 12; i++){
		printf("  ");
	}

	speak("You are unworthy to name yourself yet stranger\n");
	for(i = 1; i <= 12; i++){printf("  ");}speak("For you don't know the story yet . . .\n");
	sleep(1);
	system("cls");

	for(x = y; x != 0; x){

    for(i = 0; i < 9; i++){
		printf("\n");
	}
	for(i = 1; i <= 12; i++){printf("  ");}printf("[%d] ~~~~~()=O Stranger's(YOU) HP \n\n", hp);
	for(i = 1; i <= 12; i++){printf("  ");}printf("[%d] ~~~~~()=O Possessed Zeus's HP\n\n", ehp);
	for(i = 1; i <= 12; i++){printf("  ");}printf("[Q] NORMAL ATTACK\t\t");
    printf("[W] HEAVY SLASH (%d) - left\n", hvy);
    for(i = 1; i <= 12; i++){printf("  ");}printf("[E] PARRY & SLASH (%d) - left\t", evd);
    printf("[R] ULTIMATE\n\n");
	for(i = 1; i <= 12; i++){printf("  ");}printf("Input here: ");
	scanf(" %c", &atk);
	printf("\n");

	if(atk == 'Q' || atk == 'q'){
        if(ehp <= 35){
            srand(time(NULL));
            dmg = random(4, 6);
            edmg = random(6, 9);

            ehp -= dmg;
            hp -= edmg;
        }
            else{
                srand(time(NULL));
                dmg = random(4, 6);
                edmg = random(5, 7);

                ehp -= dmg;
                hp -= edmg;
            }
	}
		else if(atk == 'W' || atk == 'w'){
            if(hvy > 0){
                if(ehp <= 35){
                    srand(time(NULL));
                    dmg = random(6, 8);
                    edmg = random(7, 9);

                    ehp -= dmg;
                    hp -= edmg;
                    hvy--;
                }
                    else{
                        srand(time(NULL));
                        dmg = random(6, 8);
                        edmg = random(5, 7);

                        ehp -= dmg;
                        hp -= edmg;
                        hvy--;
                    }
            }
                else{
                    if(ehp <= 35){
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(7, 9);

                        ehp -= dmg;
                        hp -= edmg;
                    }
                    else{
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(5, 7);

                        ehp -= dmg;
                        hp -= edmg;
                    }
                }
		}
			else if(atk == 'E' || atk == 'e'){
                if(evd > 0){
                    if(ehp <= 35){
                        srand(time(NULL));
                        dmg = random(4, 6);
                        edmg = random(2, 4);

                        ehp -= dmg;
                        hp -= edmg;
                        evd--;
                    }
                        else{
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(0, 3);

                            ehp -= dmg;
                            hp -= edmg;
                            evd--;
                        }
                }
                    else{
                        if(ehp <= 35){
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(7, 9);

                            ehp -= dmg;
                            hp -= edmg;
                        }
                        else{
                            srand(time(NULL));
                            dmg = random(4, 6);
                            edmg = random(5, 7);

                            ehp -= dmg;
                            hp -= edmg;
                        }
                    }
			}
				else if(atk == 'R' || atk == 'r'){
                    if(ehp <= 35){
                        if(hp <= 30 && ult == 1){
                                srand(time(NULL));
                                dmg = random(10, 12);
                                edmg = random(7, 9);

                                ehp -= dmg;
                                hp -= edmg;
                                ult--;
                                hp += 9;
                            }
                            else{
                                srand(time(NULL));
                                dmg = random(4, 6);
                                edmg = random(6, 9);

                                ehp -= dmg;
                                hp -= edmg;
                            }
                    }
                        else{
                            if(hp <= 30 && ult == 1){
                                srand(time(NULL));
                                dmg = random(10, 12);
                                edmg = random(5, 7);

                                ehp -= dmg;
                                hp -= edmg;
                                ult--;
                                hp += 9;
                            }
                            else{
                                srand(time(NULL));
                                dmg = random(4, 6);
                                edmg = random(5, 7);

                                ehp -= dmg;
                                hp -= edmg;
                            }
                        }
				}
				else{
                    system("cls");
                    y = 1;
				}


		if(hp < 1){
            system("cls");
            defeat();
            sleep(2);
			y = 0;
		}
			else if(ehp < 1){
                system("cls");
				victory();
				sleep(2);
				y = 0;
			}
				else if(ehp > 0){
					y = 1;
				}
					else if(hp > 0){
						y = 1;
					}
					else{
						printf("\nHow come you've reached the Land of Yusi Bii");
					}
		system("cls");
		x = y;
	}
}

void victory(){
    int x;

    for(x = 0; x < 11; x++){
            printf("\n");
    }
    for(x = 1; x <= 30; x++){
        printf(" ");
    }
    printf("q=p");
    for(x = 1; x <= 42; x++){
        printf("~");
    }
    printf("q=p\n");
    for(x = 1; x <= 30; x++){
        printf(" ");
    }
    printf("||| ");
    printf(" You defeated Dark Zeus and saved Dreus ");
    printf(" |||\n");
    for(x = 1; x <= 30; x++){
        printf(" ");
    }
    printf("d=b");
    for(x = 1; x <= 42; x++){
        printf("~");
    }
    printf("d=b");
    for(x = 0; x < 11; x++){
        printf("\n");
    }

    sleep(2);
}

void defeat(){
    int x, qt;

    srand(time(NULL));

    qt = random(1, 3);

    switch(qt){
        case 1:
            for(x = 0; x < 11; x++){
                printf("\n");
            }
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("q=p");
            for(x = 1; x <= 41; x++){
                printf("~");
            }
            printf("q=p\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf(" While one may encounter many defeats, ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf("       one must not be defeated.       ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("d=b");
            for(x = 1; x <= 41; x++){
                printf("~");
            }
            printf("d=b");
            for(x = 0; x < 11; x++){
                printf("\n");
            }

            sleep(2);
            break;
        case 2:
            for(x = 0; x < 11; x++){
                printf("\n");
            }
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("q=p");
            for(x = 1; x <= 43; x++){
                printf("~");
            }
            printf("q=p\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf("  Defeat is not the worst of failures.  ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf(" Not to have tried is the true failure. ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("d=b");
            for(x = 1; x <= 43; x++){
                printf("~");
            }
            printf("d=b");
            for(x = 0; x < 11; x++){
                printf("\n");
            }

            sleep(2);
            break;
        case 3:
            for(x = 0; x < 11; x++){
                printf("\n");
            }
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("q=p");
            for(x = 1; x <= 43; x++){
                printf("~");
            }
            printf("q=p\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf(" Being challenged in life is inevitable, ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("||| ");
            printf("        being defeated is optional.      ");
            printf(" |||\n");
            for(x = 1; x <= 30; x++){
                printf(" ");
            }
            printf("d=b");
            for(x = 1; x <= 43; x++){
                printf("~");
            }
            printf("d=b");
            for(x = 0; x < 11; x++){
                printf("\n");
            }

            sleep(2);
            break;
        default:
            break;
    }

}



void speak(char sentence[]){
	int i;
	int length = strlen(sentence);
	for(i=0;i<length;i++){

		printf("%c", sentence[i]);
		char letter = sentence[i];
		if(letter=='\n'){

		}
		usleep(30000);
	}
}
