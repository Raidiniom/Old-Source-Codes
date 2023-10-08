#include <stdio.h>
#include <stdbool.h>

int main()
{
    int optionFirst,itemWeight,itemQuantity;
    char itemName[50];
    bool discounted = true;

    printf("Welcome to Package Delivery Services \n");
    printf("What is your Item : \n");
    scanf("%s",&itemName);
    printf("How many Items? : \n");
    scanf("%d",&itemQuantity);
    printf("What is the Weight of your Item? (kg) : \n");
    scanf("%d",&itemWeight);
    printf("Your Item is : %s , total of item(s) %d, and the Weight is %d \n",&itemName,itemQuantity,itemWeight);
    printf("Is Your Item Discounted? \n(1) Yes \n(2) No\n");
    scanf("%d",&optionFirst);
    if(optionFirst==1)
    {
             if(itemQuantity>=3 && itemWeight>=20)
             {
                printf("Your Items is a Wholesale Discount\nPackage type is in Freight box \n");
                printf("Item is Delivered via Truck \n");
                discounted = true;
             }
             else if(itemQuantity<3 && itemWeight<20)
             {
                printf("Your Item is Discounted\nPackage type is in Parcel box \n");
                printf("Item is Delivered via Motorcycle\n");
                discounted = true;
             }
             else if (itemWeight>=20)
             {
                printf("Your Item is Discounted\nPackage type is in Package box \n");
                printf("Item is Delivered via Van \n");
                discounted = true;
             }
             else
             {
                printf("Invalid Input \n");
             }
            printf("Your Item is Delivered \n");

    }
     else if(optionFirst==2 && (itemQuantity>=3 || itemWeight>=20))
        {
            printf("Your Items is a Wholesale Discount\nPackage type is in Freight box \n");
            printf("Item is Delivered via Truck \n");
            discounted=true;
        }
    else if (optionFirst==2)
    {
        if(itemWeight>=20)
        {
          printf("Your Item is not Discounted \n Package type is in Package box \n");
          printf("Item is Delivered via Van\n");
          discounted = false;
        }
        else if(itemQuantity<3 && itemWeight<20)
        {
          printf("Your Item is not Discounted \n Package type is in Parcel box \n");
          printf("Item is Delivered via Motorcycle\n");
          discounted = false;
        }
        else
        {
          printf("Invalid Input \n");
          discounted = false;
        }
    }

    else
    {
        printf("Invalid Input \n");
        discounted = false;
    }
    if(discounted == true)
    {
      printf("Your Item is : %s , total of item(s) %d \n",itemName,itemQuantity);
      printf("Weight is %d kg and Item(s) is Discounted \n",itemWeight);
    }
    else
    {
      printf("Your Item is : %s , total of item(s) %d \n",itemName,itemQuantity);
      printf("Weight is %d kg and Item(s) is Not Discounted \n",itemWeight);
    }

 return 0;
}
