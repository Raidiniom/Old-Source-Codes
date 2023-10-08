#include <stdio.h>


int main()
{
 int a;
 int b;

 printf("Are you a Boy or a Girl. Choose 1 for boy and 2 for girl :");
 scanf("%d",&a);

 if(a == 1 )
 {
     printf("Are you a Boy? Yes(1) or No(2)" );
     scanf("%d",&b);
     if(b == 1)
     {
         printf("You are a Boy");
     }
     else if(b == 2)
    {
        printf("why are you Gae meme!!");
    }
    else
    {
     printf("What are you??");
    }
 }
 else if (a == 2)
 {
    printf("You are a Girl");
 }
    else
    {
     printf("What are you??");
    }
 return 0;
}
