#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    float weight;
    float height;
    float BMI;
    float BMRm;
    float BMRf;
    int calremaining;
    int calrequired=2000;
    int caleaten;
    int patienteat;
    int age;
    int sex;
    int nextpatient;
    char name[25];
    bool repeat=true;

    do
    {
        printf("Enter the patient's Name:\n");
        scanf("%s",&name);
        printf("Enter the patient's Age:\n");
        scanf("%d",&age);
        printf("Enter the patient's Height[centimeters]:\n");
        scanf("%f",&height);
        printf("Enter the patient's Weight[kilograms]:\n");
        scanf("%f",&weight);

        printf("Patient's Name: %s \n",name);
        printf("Patient's Age: %d \n",age);
        printf("Patient's Height: %f \n",height);
        printf("Patient's Weight: %f \n",weight);

        BMI=weight/((height/100)*(height/100));

        if(BMI<16)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Underweight \n");
            printf("Patient might be suffering from Malnurishment \n \n");
        }
        else if(BMI>=17 && BMI<=18)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Mildly Thin \n");
            printf("Advice patient to eat more currently to avoid Malnurishment \n \n");
        }
        else if(BMI>=18 && BMI<=25)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Normal \n");
            printf("Remind the patient to remain the eating healthly and routinely \n \n");
        }
        else if(BMI>=25 && BMI<=30)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Overweight \n");
            printf("Advice the patient to eat healthly and do more exercise \n \n");
        }
        else if(BMI>=30 && BMI<=35)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Obese \n");
            printf("Advice the patient to eat healthly and do mild exercise routine \n");
            printf("Patient is likely at risk of Diabetes and Heart Disease \n \n");
        }
        else if(BMI>=35 && BMI<=40)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Obese XL \n");
            printf("Advice the patient to eat healthly and do more exercise routine \n");
            printf("Patient is likely at risk of Diabetes, Heart Disease, and some Cancers \n \n");
        }
        else if(BMI>40)
        {
            printf("Patient's BMI is %.2f \n",BMI);
            printf("Patient is Obese XXL \n");
            printf("Advice the patient to eat healthly and do heavy exercise routine \n");
            printf("Patient is likely at risk of Diabetes, Heart Disease, and some Cancer \n");
            printf("Might be a candidate for a Bariatric Surgery \n \n");
        }
        else
        {
            printf("None-existent BMI please try again!!! \n \n");
        }


        printf("Is the patient a [1]Male or [2]Female:\n");
        scanf("%d",&sex);

        if(sex==1)
        {
            BMRm=(10*weight)+(6.25*height)-(5*age)+5;
            printf("Patient's BMR is %.2f \n \n",BMRm);
        }
        else if(sex==2)
        {
            BMRf=(10*weight)+(6.25*height)-(5*age)-161;
            printf("Patient's BMR is %.2f \n \n",BMRf);
        }
        else
        {
            printf("None Existant Sex \n \n");
        }

        printf("Enter the calories taken by the patient as of this time: \n");
        scanf("%d",&caleaten);

        calremaining=calrequired-caleaten;

        if(caleaten<calrequired)
        {
            while(calremaining<calrequired)
            {
                printf("Does the patient want to eat more? [1]YES [2]NO \n");
                scanf("%d",&patienteat);

                if(patienteat==1)
                {
                    printf("Advice the patient to eat properly every day \n");
                    printf("since patient only eaten %d and needs to eat %d calories more \n",caleaten,calremaining);

                    if(caleaten<calrequired)
                    {
                        printf("Advice patient to eat 3 meals a day that contians 667 calories per meal \n \n");

                    }
                    else if(caleaten<=1000)
                    {
                        printf("Advice patient to eat 2 meals after this consultations \n \n");

                    }
                    else
                    {
                        printf("Looks like the patient is eating more \n \n");

                    }
                }
                else if(patienteat==2)
                {
                    calremaining=2000+caleaten;
                    printf("Remind the patient to eat healthly meals and properly after this consultation \n");
                    printf("As to avoid getting health complications in the future. \n \n");
                }
            }
        }
        else if(caleaten==calrequired)
        {
            printf("Looks like the patient is eating healthly! \n \n");
        }
        else if(caleaten>calrequired)
        {
            printf("Looks like the patient is eating to much \n");
            printf("It be better to advice eating to much everyday \n \n");
        }

        printf("Is there a next patient? [1]YES [2]NO \n");
        scanf("%d",&nextpatient);
        if(nextpatient==1)
        {
            repeat=true;
        }
        else if(nextpatient==2)
        {
            repeat=false;
        }
        else
        {
            repeat=false;
        }
    }
    while(repeat);

    return 0;
}
