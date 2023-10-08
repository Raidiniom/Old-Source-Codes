#include <stdio.h>
#include <stdbool.h>
int main()
{
    //Player Stats
    float Player_HP = 300;
    float Player_ATK = 50;
    float Player_DEF = 35;

    //Basic Enemy Stats
    float basic_enemy_HP = 100;
    float basic_enemy_atk = 50;
    float basic_enemy_def = 20;

    //Elite Enemy Stats
    float elite_enemy_HP = 200;
    float elite_enemy_atk = 75;
    float elite_enemy_def = 40;

    //Boss Stats
    float boss_HP = 900;
    float boss_atk = 150;
    float boss_def = 300;

    //Interchangable Stats
    float target_HP;
    float target_atk;
    float target_def;

    //Battle choices & actions
    int move_set;
    int enemy_choice;
    int atk_buff_turns=3;
    int atk_buff_cd=3;
    int def_buff_turns;
    float def_buff_cd=3;

    //The Whole Background Process for the Battle System
    while (Player_HP > 0 && boss_HP > 0)
    {
        printf("Choose the Path: ");
        scanf("%d",&enemy_choice);
        switch (enemy_choice)
        {
        case 1: //Player encounters the Grodin
            target_HP = basic_enemy_HP;
            target_atk = basic_enemy_atk;
            target_def = basic_enemy_def;
            break;
        case 2: //Player encounters the Exfride
            target_HP = elite_enemy_HP;
            target_atk = elite_enemy_atk;
            target_def = elite_enemy_def;
            break;
        case 3: //Player encounters the Asvrase Core
            target_HP = boss_HP;
            target_atk = boss_atk;
            target_def = boss_def;
            break;
        }
        //after choosing, short description of the enemy
        while (Player_HP > 0 && target_HP > 0)
        {
            //Game UI
            printf("\n*------------------------------------------------------------------*\n");
            printf("Enemy Stats:                    'Player Name' Stats: \n");
            printf("HP: %.1f                        HP: %.1f\n",target_HP,Player_HP);
            printf("Attack: %.1f                     Attack: %.1f\n",target_atk,Player_ATK);
            printf("Defence: %.1f                    Defence: %.1f\n",target_def,Player_DEF);
            printf("\n*------------------------------------------------------------------*\n");
            PresentMovesets();

            scanf("%d",&move_set);
            switch (move_set)
            {
                case 1: //Basic Attack
                    target_HP -= (Player_ATK-target_def);
                    break;
                case 2: //Buff the Basic Attack
                    if(atk_buff_cd>0)
                    {
                        Player_ATK *= 1.5;
                    }
                    else
                    {
                        printf("On Cooldown for %d turns",atk_buff_cd);
                        atk_buff_cd--;
                    }
                    break;
                case 3: //Buff the base Deffence
                    if (def_buff_cd > 0)
                    {
                        printf("\nThis skill is on cooldown for %.f turn(s).\n",def_buff_cd);
                    }
                    else
                    {
                        def_buff_turns = 3;
                        while (def_buff_turns > 0)
                        {
                            Player_DEF *= 1.5;
                        }
                        def_buff_cd += 5;
                    }
                    break;
                case 4: //Heavy Attack
                    target_HP -= (Player_ATK*1.75-target_def);
                    break;
                case 5: //Special Attack
                    target_HP -= (Player_ATK*3.5-target_def);
                    break;
            }
            /
            Player_HP -= (target_atk-Player_DEF);
        }

    }
return 0;
}

void PresentMovesets()
{
    printf("\nMoveset- \n");
    printf("*---------------* \n");
    printf("[1]Basic Attack   - 50 Damage, \n");
    printf("[2]Buff Attack    - 150%% Additional Damage, \n");
    printf("[3]Buff Defence   - 150%% Additional Defence, \n");
    printf("[4]Heavy Attack   - Deals 175%% of your Basic Damage, \n");
    printf("[5]Special Attack - Deals 350%% of your Basic Damage, \n");
    printf("*---------------* \n");

    printf("Choose the action: \n");
}

