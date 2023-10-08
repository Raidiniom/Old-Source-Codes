#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    //Employee Profile
    char name[50];
    int sex;
    int age;
    float weight;
    float height;

    //BMI, BMR for Male and Female, and Calories required
    float BMI;
    float BMRm;
    float BMRf;
    int Calrequired=2000;
    int Caleaten;
    int Calmissing;

    //Employee's options and next in line
    int nextpat;
    int optionpat;
    bool newprofile=true;

    do
    {
        //Open terminal kiosk!
        printf("Welcome to the Health Resource kiosk! \n");
        printf("Please fill up the form and a nurse will entertain you after filling out \n \n");

        printf("Enter your Name: \n");
        scanf("%s",&name);
        printf("How old are you: \n");
        scanf("%d",&age);
        printf("[1]Male / [2]Female \n");
        scanf("%d",&sex);
        printf("How much do you weight[in Kilograms]: \n");
        scanf("%f",&weight);
        printf("How tall are you[in Centimeters]: \n");
        scanf("%f",&height);

        //Showing employee profile
        printf("User Profile \n");
        printf("Name: %s \n",name);
        printf("Age: %d \n",age);
        if(sex==1)
        {
            printf("Sex: Male \n");
        }
        else if(sex==2)
        {
            printf("Sex: Female \n");
        }
        else
        {
            printf("??? \n");
        }
        printf("Weight: %.2f \n",weight);
        printf("Height: %.2f \n",height);

        //BMI calculation and categorization

        BMI=weight/((height/100)*(height/100));
        if(BMI<16)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Underweight \n");
            printf("\n \n");
        }
        else if(BMI>=17 && BMI<=18)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Mildy Thin \n");
            printf("\n \n");
        }
        else if(BMI>=18 && BMI<=25)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Normal \n");
            printf("\n \n");
        }
        else if(BMI>=25 && BMI<=30)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Overweight \n");
            printf("\n \n");
        }
        else if(BMI>=30 && BMI<=35)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Obese \n");
            printf("\n \n");
        }
        else if(BMI>=35 && BMI<=40)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Obese XL \n");
            printf("\n \n");
        }
        else if(BMI>40)
        {
            printf("Your BMI is %.2f \n",BMI);
            printf("You are Obese XXL \n");
            printf("\n \n");
        }
        else
        {
            printf("==ERROR== \n \n");
        }

        //BMR calculation if Male/Female
        if(sex==1)
        {
            BMRm=(10*weight)+(6.25*height)-(5*age)+5;
            printf("Hey! this is your Basal Metabolic Rate: \n");
            printf("%.2f \n \n",BMRm);
        }
        else if(sex==2)
        {
            BMRf=(10*weight)+(6.25*height)-(5*age)-161;
            printf("Hey! this is your Basal Metabolic Rate: \n");
            printf("%.2f \n \n",BMRf);
        }
        else
        {
            printf("==ERROR== \n \n");
        }

        //This part for Calories Required per day
        printf("Hey! How much calories have you eaten at this time? \n");
        scanf("%d",&Caleaten);

        Calmissing=Calrequired-Caleaten;
        if(Caleaten<Calrequired)
        {
            printf("Hey it looks like you have not reached the required Calories taken per day \n");
            printf("since you have taken %d calories only as the required calories taken is %d \n",Caleaten,Calrequired);
            printf("You need to eat more %d \n \n",Calmissing);

            while(optionpat!=1)
            {
                printf("Hey I recommend you eating more until you reach the required calories per day! \n");
                printf("Will you do it? [1]YES / [2]NO \n");
                scanf("%d",&optionpat);

                if(optionpat==1)
                {
                    printf("Looks like you are on the path to be healthly!!! \n");
                    printf("Go sit down at the waiting area a nurse will be there!!! \n \n");
                }
                else if(optionpat==2)
                {
                    printf("Why not? please \n");
                    printf("If you do not you might encounter health complications \n");
                    printf("Hey look you only eaten %d calories \n \n",Caleaten);
                }
            }
        }
        else if(Caleaten>=Calrequired)
        {
            printf("Looks like you have eaten healthly \n \n");
        }

        //Next Employee
        printf("Is there a next Employee? [1] Yes / [2] No \n");
        scanf("%d",&nextpat);

        if(nextpat==1)
        {
            newprofile=true;
        }
        else if(nextpat==2)
        {
            newprofile=false;
        }
        else
        {
            newprofile=false;
        }
    }
    while(newprofile);

    return 0;
}
