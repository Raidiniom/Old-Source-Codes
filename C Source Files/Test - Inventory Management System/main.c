#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"

void main() {
    int option, id, quantity, search, index;
    float price;
    String name, supplier;
    Inventory myList = createInventory(10);
    
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Enter the ID of the item: ");
                scanf("%d", &id);
                fflush(stdin);
                printf("Enter the name of the item: ");
                scanf("%s", name);
                fflush(stdin);
                printf("Enter the price of the item: ");
                scanf("%f", &price);
                fflush(stdin);
                printf("Enter the quantity of the item: ");
                scanf("%d", &quantity);
                fflush(stdin);
                printf("Enter the supplier of the item: ");
                scanf("%s", supplier);
                fflush(stdin);
                if(addItem(&myList, createItem(id, name, price, quantity, supplier))) {
                    printf("Item added to inventory.");
                }
                printf("\n");
                break;
            case 2:
                printf("Enter the ID of the item to search: ");
                scanf("%d", &search);

                index = searchItem(myList,search);
                if(index != -1) {
                    displayItem(myList.items[index]);
                }
                break;
            case 3:
                printf("Current inventory: \n");
                for(int i = 0; i < myList.count; ++i) {
                    displayItem(myList.items[i]);
                    printf("\n");
                }
                break;
            case 4:
                printf("Total sales: $%.2f\n", salesTotal(myList));
                printf("Total quantity: %d\n", quantityTotal(myList));
                break;
            case 5:
                printf("Exiting program.");
                break;
        }
        printf("\n");
    } while(option != 5);
    
}