#include <stdio.h>
#include <stdbool.h>
//To Do:
//cleaning for user-friendliness and readability of the code

//Note: variables with low caps are functions

//Functions
float player_hp(float Player_HP);
float player_atk(float Player_ATK);
float player_def(float Player_DEF);


float elite_enemy_hp(float elite_enemy_HP);
float elite_enemy_atk(float elite_enemy_ATK);
float elite_enemy_def(float elite_enemy_DEF);

float basic_atk_computation(float Player_ATK,float target_DEF);
float heavy_atk_computation(float Player_ATK,float target_DEF);
float special_atk_computation(float Player_ATK,float target_DEF);

int main()
{
    //Player Stats
    float Player_HP = player_hp(Player_HP);
    float Player_ATK = player_atk(Player_ATK);
    float Player_DEF = player_def(Player_DEF);

    //Basic Enemy Stats
    float basic_enemy_HP = 100;
    float basic_enemy_ATK = 60;
    float basic_enemy_DEF = 20;

    //Elite Enemy Stats - //Voltaire Part
    float elite_enemy_HP = elite_enemy_hp(elite_enemy_HP);
    float elite_enemy_ATK = elite_enemy_atk(elite_enemy_ATK);
    float elite_enemy_DEF = elite_enemy_def(elite_enemy_DEF);

    //Boss Stats
    float boss_HP = 900;
    float boss_ATK = 150;
    float boss_DEF = 300;

    //Interchangable Stats
    float target_HP;
    float target_ATK;
    float target_DEF;
    float target_total_DMG;

    //Battle choices & actions
    int move_set;
    int enemy_choice;
    int artifact_choice;

    //Cooldown & Buffer Status
    //Attack Part
    int atk_buff_turns = 0;
    int atk_buff_cd = 0;
    bool atk_buff_ready = true;
    bool atk_buff_active = false;

    //Deffence Part
    int def_buff_turns = 0;
    int def_buff_cd = 0;
    bool def_buff_ready = true;
    bool def_buff_active = false;

    //Heavy Attack Part
    int heavy_atk_turns = 0;
    int heavy_atk_cd = 0;
    bool heavy_atk_ready = true;

    //Special Attack Part
    int special_atk_turns = 0;
    int special_atk_cd = 0;
    bool special_atk_ready = true;

    //Artifacts
    bool artifact_buff = true;
    float artifact_heal = 0.00;

    //Game Status
    bool game_over = false;
    bool game_over_boss = false;

    //Variable Function Call
    float basic_attack_dmg;
    float heavy_attack_dmg;
    float special_attack_dmg;
    // - Entity Stats
    float elite_enemy_hp;
    float elite_enemy_atk;
    float elite_enemy_def;

    //Game Start
    /*printf("*-----* *-----* EnseSran *-----* *-----* \n \n");
    sleep(4);
    printf("*--------------------------------------* \n");
    printf("Meridia:It seems like you're new here Adventurer!!!\n");
    sleep(1);
    printf("        Adventurer-j'rag, Welcome to Grahont. A place of harmony and dissonance.");
    sleep(2);
    printf("\n        As of right now, the Corrupt Vestibule has permeated its influence.");
    sleep(2);
    printf("\n        The people of this land requires skilled Warriors.");
    sleep(2);
    printf("\n        Here's an amulet,");
    sleep(2);
    printf("take it and keep it safe it will help you guide on your journey, Farewell. \n");*/

    //The Whole Background Process for the Battle System
    while (Player_HP > 0 && boss_HP > 0 && game_over_boss == false)
    {
        sleep(1);
        printf("\nChoose a path: ");
        printf("\n[1]Basic Enemy \n[2]Elite Enemy \n[3]BOSS!!!\n");
        scanf("%d",&enemy_choice);
        sleep(1);
        printf("You have chosen path %d",enemy_choice);
        sleep(1);
        system("cls");
        sleep(1);
        switch (enemy_choice)
        {
        case 1: //Player encounters the Grodin
            GrodinEntrance();
            target_HP = basic_enemy_HP;
            target_ATK = basic_enemy_ATK;
            target_DEF = basic_enemy_DEF;
            break;
        case 2: //Player encounters the Exfride
            ExfrideEntrance();
            target_HP = elite_enemy_HP;
            target_ATK = elite_enemy_ATK;
            target_DEF = elite_enemy_DEF;
            break;
        case 3: //Player encounters the Asvrase Core
            AsvraseEntrance();
            target_HP = boss_HP;
            target_ATK = boss_ATK;
            target_DEF = boss_DEF;
            break;
        }
        //after choosing, short description of the enemy
        while (Player_HP > 0 && target_HP > 0)
        {
            //Game UI
            printf("\n*------------------------------------------------------------------*\n");
            printf("Your Stats:                       Enemy Stats: \n");
            printf("HP: %.2f                        HP: %.2f\n",Player_HP,target_HP);
            printf("Attack: %.2f                     Attack: %.2f\n",Player_ATK,target_ATK);
            printf("Defence: %.2f                    Defence: %.2f\n",Player_DEF,target_DEF);
            printf("\n*------------------------------------------------------------------*\n");

            //Damage Formula
            basic_attack_dmg = basic_atk_computation(Player_ATK,target_DEF);
            heavy_attack_dmg = heavy_atk_computation(Player_ATK,target_DEF);
            special_attack_dmg = special_atk_computation(Player_ATK,target_DEF);

            PresentMovesets();
            scanf("%d",&move_set);
            system("cls");
            switch (move_set)
            {
                case 1: //Basic Attack
                    target_HP -= basic_attack_dmg;
                    PlayerAttack();
                    //Enemy Damage Taken
                    if (target_HP > 0)
                    {
                        if(enemy_choice  == 1)
                        {
                            Grodinvoiceline_hurt();
                        }
                        else if(enemy_choice == 2)
                        {
                            Exfridevoiceline_hurt();
                        }
                        else if(enemy_choice == 3)
                        {
                            Asvrasevoiceline_hurt();
                        }
                    }
                    sleep(1);
                    printf("You've dealt %.2f DMG\n",basic_attack_dmg);
                    sleep(1);
                    break;
                case 2: //Buff basic Attack
                    if (atk_buff_cd == 0)
                    {
                        atk_buff_ready = true;
                    }
                    if (atk_buff_ready == true)
                    {
                        atk_buff_active = true;
                        if (atk_buff_active == true)
                        {
                            printf("\nYou've gained 50%% additional ATK\n");
                            Player_ATK *= 1.5;
                            atk_buff_cd += 5;
                            atk_buff_turns += 3;
                            atk_buff_ready = false;
                        }
                    }
                    else
                    {
                        printf("\nThis skill is on cooldown for %d turn(s).\n",atk_buff_cd);
                    }
                    break;
                case 3: //Buff base Defense
                    if (def_buff_cd == 0)
                    {
                        def_buff_ready = true;
                    }
                    if (def_buff_ready == true)
                    {
                        def_buff_active = true;
                        if (def_buff_active == true)
                        {
                            printf("\nYou've gained 50%% additional Defense\n");
                            Player_DEF *= 1.5;
                            def_buff_cd += 5;
                            def_buff_turns += 3;
                            def_buff_ready = false;
                        }
                    }
                    else
                    {
                        printf("\nThis skill is on cooldown for %d turn(s).\n",def_buff_cd);
                    }
                    break;
                case 4: //Heavy Attack
                    if (heavy_atk_cd == 0)
                    {
                        heavy_atk_ready = true;
                    }
                    if (heavy_atk_ready == true)
                    {
                        printf("You've used your Heavy Attack. You've dealt %.2f DMG",heavy_attack_dmg);
                        target_HP -= heavy_attack_dmg;
                        heavy_atk_cd += 2;
                        heavy_atk_ready = false;
                    }
                    else
                    {
                        printf("\nThis skill is on cooldown for %d turn(s).\n",heavy_atk_cd);
                    }
                    //Enemy dmg taken
                    if (target_HP > 0)
                    {
                        if(enemy_choice  == 1)
                        {
                            Grodinvoiceline_hurt();
                        }
                        else if(enemy_choice == 2)
                        {
                            Exfridevoiceline_hurt();
                        }
                        else if(enemy_choice == 3)
                        {
                            Asvrasevoiceline_hurt();
                        }
                    }
                    break;
                case 5: //Special Attack
                    if (special_atk_cd == 0)
                    {
                        special_atk_ready = true;
                    }
                    if (special_atk_ready == true)
                    {
                        printf("You've used your Special Attack. You've dealt %.2f DMG",special_attack_dmg);
                        target_HP -= special_attack_dmg;
                        special_atk_cd += 2;
                        special_atk_ready = false;
                    }
                    else
                    {
                        printf("\nThis skill is on cooldown for %d turn(s).\n",special_atk_cd);
                    }
                    //Enemy dmg taken
                    if (target_HP > 0)
                    {
                        if(enemy_choice  == 1)
                        {
                            Grodinvoiceline_hurt();
                        }
                        else if(enemy_choice == 2)
                        {
                            Exfridevoiceline_hurt();
                        }
                        else if(enemy_choice == 3)
                        {
                            Asvrasevoiceline_hurt();
                        }
                    }
                    break;
            }
            //Enemy Turn Attack
            if (target_HP > 0)
            {
                target_total_DMG = target_ATK-Player_DEF;
                Player_HP -= target_total_DMG;
                if(enemy_choice  == 1)
                {
                    Grodinvoiceline_atk();
                }
                else if(enemy_choice == 2)
                {
                    Exfridevoiceline_atk();
                }
                PlayerHurt();
                printf("Enemy dealt %.f DMG\n",target_total_DMG);
            }
            //Boss Turn Attack
            if (enemy_choice == 3)
            {
                if (target_HP > 0)
                {
                    Asvrasevoiceline_atk();
                    Player_HP -= (boss_ATK-Player_DEF);
                }
            }

            //Buff Cooldown
            if (atk_buff_cd == 2)
            {
                atk_buff_active = false;
                Player_ATK /= 1.5;
            }
            if (def_buff_cd == 2)
            {
                def_buff_active = false;
                Player_DEF /= 1.5;
            }
            atk_buff_cd--;
            if (atk_buff_cd <= 0)
            {
                atk_buff_cd = 0;
            }
            atk_buff_turns--;
            if (atk_buff_turns <= 0)
            {
                atk_buff_turns = 0;
            }
            def_buff_cd--;
            if (def_buff_cd <= 0)
            {
                def_buff_cd = 0;
            }
            def_buff_turns--;
            if (def_buff_turns <= 0)
            {
                def_buff_turns = 0;
            }
            if (artifact_buff == true)
            {
                Player_HP += artifact_heal;
            }
            heavy_atk_cd--;
            if (heavy_atk_cd <= 0)
            {
                heavy_atk_cd = 0;
            }
            special_atk_cd--;
            if (special_atk_cd <= 0)
            {
                special_atk_cd = 0;
            }

            //Enemy death
            if (target_HP <= 0 && Player_HP > 0)
            {
                if(enemy_choice  == 1)
                {
                    Grodinvoiceline_death();
                }
                else if(enemy_choice == 2)
                {
                    Exfridevoiceline_death();
                }
                else if (enemy_choice == 3)
                {
                    Asvrasevoiceline_death();
                    sleep(1);
                    printf("\n\nCongratulations, You've won the game!\n");
                    game_over_boss = true;
                }

                //RESET BUFFS AND
                if (enemy_choice == 1 || enemy_choice == 2)
                {
                    while (game_over == false)
                    {
                        atk_buff_turns = 0;
                        atk_buff_cd = 0;
                        def_buff_turns = 0;
                        def_buff_cd = 0;
                        heavy_atk_cd = 0;
                        special_atk_cd = 0;
                        atk_buff_ready = true;
                        def_buff_ready = true;
                        heavy_atk_ready = true;
                        special_atk_ready = true;
                        if (atk_buff_active == true)
                        {
                            Player_ATK /= 1.5;
                        }
                        if (def_buff_active == true)
                        {
                            Player_DEF /= 1.5;
                        }
                        printf("\n\nYou've won\n");
                        printf("After you've defeated the enemy, you received an artifact which buffs your stats!\n");

                        //Artifact Drop
                        if (enemy_choice == 1)
                        {
                            artifact_list1();
                            scanf("%d",&artifact_choice);
                            switch (artifact_choice)
                            {
                            case 1:
                                artifact_heal += 20;
                                printf("\nYou've chosen Artifact 1, You've gain the follow effects:\n");
                                printf("Every turn, heals the player for 20 HP\n");
                                break;
                            case 2:
                                Player_ATK += Player_ATK*0.10;
                                printf("\nYou've chosen Artifact 2, You've gain the follow effects:\n");
                                printf("+10%% OF TOTAL ATK\n");
                                break;
                            case 3:
                                Player_DEF += Player_DEF*0.10;
                                printf("\nYou've chosen Artifact 3, You've gain the follow effects:\n");
                                printf("+10%% OF TOTAL DEFENSE\n");
                                break;
                            }
                        }
                        else if (enemy_choice == 2)
                        {
                            artifact_list2();
                            scanf("%d",&artifact_choice);
                            switch (artifact_choice)
                            {
                            case 1:
                                artifact_heal += 40;
                                printf("\nYou've chosen Artifact 1, You've gain the follow effects:\n");
                                printf("Every turn, heals the player 40 HP\n");
                                break;
                            case 2:
                                Player_ATK += Player_ATK*0.20;
                                printf("\nYou've chosen Artifact 2, You've gain the follow effects:\n");
                                printf("+20%% OF TOTAL ATK\n");
                                break;
                            case 3:
                                Player_DEF += Player_DEF*0.20;
                                printf("\nYou've chosen Artifact 3, You've gain the follow effects:\n");
                                printf("+20%% OF TOTAL DEFENSE\n");
                                break;
                            }
                        }
                        game_over = true;
                    }
                }
            }
            //Player Death
            else if (Player_HP <= 0)
            {
                PlayerDeath();
                sleep(1);
                printf("\n\nYou've been killed, with no hero that will protect Grohont, Evil consumes all.\n");
                printf("================================== THE END ============================================\n\n");
            }
        }
    }
return 0;
}

void PresentMovesets()
{
    sleep(1);
    printf("\nMoveset- \n");
    printf("*---------------* \n");
    printf("[1]Basic Attack   - Deal 100%% of Total ATK Damage, \n");
    printf("[2]Buff Attack    - 50%% Additional ATK, \n");
    printf("[3]Buff Defense   - 50%% Additional Defense, \n");
    printf("[4]Heavy Attack   - Deals 175%% of your Total ATK Damage, \n");
    printf("[5]Special Attack - Deals 350%% of your Total ATK Damage, \n");
    printf("*---------------* \n");
    sleep(1);
    printf("\nSelect a move: \n");
    sleep(1);
}

void artifact_list1()
{
    sleep(1);
    printf("\nArtifacts- \n");
    printf("*---------------* \n");
    printf("[1]Every turn, heals the player for 20 HP, \n");
    printf("[2]+10%% OF TOTAL ATK, \n");
    printf("[3]+10%% OF TOTAL DEFENSE, \n");
    printf("*---------------* \n");

    printf("Choose an Artifact: \n");
    sleep(1);
}

void artifact_list2()
{
    sleep(1);
    printf("\nArtifacts- \n");
    printf("*---------------* \n");
    printf("[1]Every turn, heals the player for 40 HP, \n");
    printf("[2]+20%% OF TOTAL ATK, \n");
    printf("[3]+20%% OF TOTAL DEFENSE, \n");
    printf("*---------------* \n");

    printf("Choose an Artifact: \n");
    sleep(1);
}

//Basic Enemy = Grodin, All voicelines
void GrodinEntrance()
{
    printf("\n*-* Grodin: !GROAL! *-* \n \n");
}

void Grodinvoiceline_atk()
{
    printf("\n*-* Grodin: HRAAAKK!! *-* \n \n");
}

void Grodinvoiceline_hurt()
{
    printf("\n*-* Grodin: KRII!! *-* \n \n");
}

void Grodinvoiceline_death()
{
    printf("\n*-* Grodin: *WRYY* *-* \n \n");
}

//Elite Enemy = Exfride, All voicelines
void ExfrideEntrance()
{
    printf("\n*-* Exfride: FURIOUS ROAR *-* \n \n");
}

void Exfridevoiceline_atk()
{
    printf("\n*-* Exfride: HAOOO! *-* \n \n");
}

void Exfridevoiceline_hurt()
{
    printf("\n*-* Exfride: GRAOR! *-* \n \n");
}

void Exfridevoiceline_death()
{
    printf("\n*-* Exfride: *STONE RUMBLING* *-* \n \n");
}

//Boss = Asvrase Core, All voicelines
void AsvraseEntrance()
{
    printf("\n*-* Asvrase Core: OH! YOU'RE APPROACHING ME? *-* \n \n");
}

void Asvrasevoiceline_atk()
{
    printf("\n*-* Asvrase Core: AN ANAMOLY LIKE YOU SHOULD PERISH *-* \n \n");
}

void Asvrasevoiceline_hurt()
{
    printf("\n*-* Asvrase Core: INSOLENT FOOL! *-* \n \n");
}

void Asvrasevoiceline_death()
{
    printf("\n*-* Asvrase Core: HOW? HOW? THIS SHOULD HAVE NEVER HAPPEN! \nI HAVE THE POWER OF A GOD *-* \n \n");
}

//Player Hurt & Attack effort/grunt
void PlayerAttack()
{
    printf("\n*-* You:HURAH! *-* \n \n");
}

void PlayerHurt()
{
    printf("\n*-* You:OUEFF! *-* \n \n");
}

void PlayerDeath()
{
    printf("\n*-* You:*EXHALING LAST BREATH* *-* \n \n");
}

//Functions with Parameters Arranged Chronologically
float basic_atk_computation(float Player_ATK,float target_DEF)
{
    float basic_attack_dmg = Player_ATK - target_DEF;

    return basic_attack_dmg;
}
float heavy_atk_computation(float Player_ATK,float target_DEF)
{
    float heavy_attack_dmg = Player_ATK*1.75-target_DEF;

    return heavy_attack_dmg;
}
float special_atk_computation(float Player_ATK,float target_DEF)
{
    float special_attack_dmg = Player_ATK*3.5-target_DEF;

    return special_attack_dmg;
}
float player_hp(float Player_HP)
{
    Player_HP = 300;
    return Player_HP;
}
float player_atk(float Player_ATK)
{
    Player_ATK = 50;
    return Player_ATK;
}
float player_def(float Player_DEF)
{
    Player_DEF = 35;
    return Player_DEF;
}

//^^^^^^ Add the Basic Enemy Stat ^^^^^^
float elite_enemy_hp(float elite_enemy_HP)
{
    elite_enemy_HP = 200;
    return elite_enemy_HP;
}

float elite_enemy_atk(float elite_enemy_ATK)
{
    elite_enemy_ATK = 85;
    return elite_enemy_ATK;
}

float elite_enemy_def(float elite_enemy_DEF)
{
    elite_enemy_DEF = 40;
    return elite_enemy_DEF;
}

//vvvvvv Add the Boss Stat vvvvvv
