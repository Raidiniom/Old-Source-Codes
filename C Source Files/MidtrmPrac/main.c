#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gunstrinv.h"

int main()
{
    int id, instock, pick, serId, delId;
    float price;
    String gname, gmanu;
    Rack inlist = createRack(5);

    while(pick != 5)
    {
        menu();
        scanf("%d", &pick);

        switch(pick)
        {
            case  1:
                printf("Create Gun ID: ");
                scanf("%d", &id);
                printf("Name: ");
                scanf("%s", gname);
                printf("Manufacturer: ");
                scanf("%s", gmanu);
                printf("Stock: ");
                scanf("%d", &instock);
                printf("Price: ");
                scanf("%f", &price);
                printf("\n\n");

                addGun(&inlist, createGun(id, gname, gmanu, instock, price));
            break;
            case  2:
                for(int a = 0; a < inlist.count; ++a)
                {
                    printf("\n");
                    display(inlist.detail[a]);
                }
                printf("\n\n");
            break;
            case  3:
                printf("\n\nInput Gun Id to Search: ");
                scanf("%d", &serId);
                display(inlist.detail[searchGun(inlist, serId)]);
            break;
            case  4:
                printf("\n\nInput Gun Id to Delete: ");
                scanf("%d", &delId);
                deleteGun(&inlist, delId);
            break;
            case  5:
            default:
                pick = 5;
                printf("Exiting...");
            break;
        }

    }

    return 0;
}
