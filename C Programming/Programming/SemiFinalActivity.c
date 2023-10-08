#include<stdio.h>
#include<stdbool.h>

int main()
{
    //Order Date
    int day;
    int month;
    int year;

    //Voucher(?)
    int voucher;
    bool confirmvoucher=true;

    //Wholesale = 5 products
    int wholesale;
    int totalwholesalediscount;
    bool datevalid=false;

    //Loop for next customer
    int decision;
    bool nextCustomer=true;

    do
    {
        //Wholesale part
        printf("How many products did you buy: ");
        scanf("%d",&wholesale);

        //Voucher part
        printf("Do you have a voucher [1]YES or [2]NO: ");
        scanf("%d",&voucher);

        if(voucher==1)
        {
            if(wholesale>=5)
            {
                totalwholesalediscount=wholesale/5;
                printf("You have %dx the discount \n",totalwholesalediscount);
            }
            else if(wholesale<5)
            {
                printf("Mininum of 5 products are considered as Wholesale \n");
            }
            printf("Voucher discount is added! \n");
        }
        else if(voucher==2)
        {
            if(wholesale>=5)
            {
                totalwholesalediscount=wholesale/5;
                printf("You have %dx the discount \n",totalwholesalediscount);
            }
            else if(wholesale<5)
            {
                printf("Mininum of 5 products are considered as Wholesale \n");
            }
            printf("No Voucher discount. \n");
        }
        else
        {
            printf("Try remembering and inquiring about this voucher! \n");
        }

        do
        {
            //Date switchcase for the Holidays
            printf("At what date did you place the order Ex. 24 12 2022: ");
            scanf("%d %d %d",&day,&month,&year);

            switch(month)
            {
                case 1:
                    if(day==1)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<=31)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 2:
                    if(day==1 || day==14)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<14)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>14 && day<=28)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 3:
                    if(day==3)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>3 && day<=31)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 4:
                    if(day==1)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<=30)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 5:
                    if(day==5 || day==8)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<5)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>5 && day<8)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>8 && day<=31)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 6:
                    if(day==19)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<19)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>19 && day<=30)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 7:
                    if(day==4)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<4)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>4 && day<=31)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 10:
                    if(day==31)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<=30)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 11:
                    if(day==24 || day==25)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<24)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>25 && day<=30)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                case 12:
                    if(day==17 || day==25 || day==26)
                    {
                        printf("20 percent Discount to all Holiday related items! and 15 percent to normal and 10 percent to Appliances \n");
                        datevalid=false;
                    }
                    else if(day>1 && day<17)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>17 && day<25)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                    else if(day>26 && day<=31)
                    {
                        printf("There are no Additional Discount on this date. \n");
                        datevalid=false;
                    }
                break;
                default:
                    printf("\n---Invalid Date---\n");
                    datevalid=true;
                break;
            }
        }
        while(datevalid);

        //Tells user your order with all the discounts has been recorded and sent to the company
        printf("\n ***Thanks for Shopping with us! Your order has been recorded if ever you did not receive the order or there is no invoice*** \n");

        //Loop program for another customer
        printf("Is there another customer [1]YES or [2]NO: ");
        scanf("%d",&decision);

        if(decision==1)
        {
            nextCustomer=true;
        }
        else if(decision==2)
        {
            nextCustomer=false;
            printf("\n---End Program---\n");
        }
        else
        {
            nextCustomer=false;
        }
    }
    while(nextCustomer);

    return 0;
}
