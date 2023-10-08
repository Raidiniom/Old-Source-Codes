#include<stdio.h>

int main()
{
    char Player_NAME[50];

    printf("*-----* *-----* EnseSran *-----* *-----* \n \n");
    sleep(4);
    printf(" *-------------------------------------* \n");
    printf("Looks like your new here Adventurer!!!");
    sleep(1);
    printf("\nWhat is your name? ");
    scanf("%s",&Player_NAME);

    printf("%s-j'rag, Welcome to Grahont. A place of harmony and dissonance",Player_NAME);
    sleep(2);
    printf("\nAs of right now, the Corrupt Vestibule has permeated its influence");
    sleep(2);
    printf("\nThe people of this land wants Strong Warriors");
    sleep(2);
    printf("\nHere is an amulet and keep this as reminder of your purpose, Farewell \n");

    return 0;
}

//Basic Enemy = Grodin, All voicelines
void GrodinEntrance()
{
    printf("\n*-* !GROAL! *-* \n \n");
}

void Grodinvoiceline_attk()
{
    printf("\n*-* HRAAAKK!! *-* \n \n");
}

void Grodinvoiceline_hurt()
{
    printf("\n*-* KRII!! *-* \n \n");
}

void Grodinvoiceline_death()
{
    printf("\n*-* *HIGH PITCH SCREAM* *-* \n \n");
}

//Elite Enemy = Exfride, All voicelines
void ExfrideEntrance()
{
    printf("\n*-* FURIOUS ROAR *-* \n \n");
}

void Exfridevoiceline_attk()
{
    printf("\n*-* HAOOO! *-* \n \n");
}

void Exfridevoiceline_hurt()
{
    printf("\n*-* GRAOR! *-* \n \n");
}

void Exfridevoiceline_death()
{
    printf("\n*-* *STONE RUMBLING* *-* \n \n");
}

//Boss = Asvrase Core, All voicelines
void AsvraseEntrance()
{
    printf("\n*-* *whispers* YOU SHOULD HAVE NEVER WALKED *-* \n \n");
}

void Asvrasevoiceline_attk()
{
    printf("\n*-* *whispers* AN ANAMOLY LIKE YOU SHOULD PARISH *-* \n \n");
}

void Asvrasevoiceline_hurt()
{
    printf("\n*-* *whispers* HOW, HOW, I'M UNTOUCHABLE *-* \n \n");
}

void Asvrasevoiceline_death()
{
    printf("\n*-* *whispers* THIS SHOULD NEVER HAPPEN! \nI HAVE THE POWER OF A GOD *-* \n \n");
}

//Player Hurt & Attack effort/grunt
void PlayerAttack()
{
    printf("\n*-* HURAH! *-* \n \n");
}

void PlayerHurt()
{
    printf("\n*-* OUEFF! *-* \n \n");
}

void PlayerDeath()
{
    printf("\n*-* *EXHALING LAST BREATH* *-* \n \n");
}
