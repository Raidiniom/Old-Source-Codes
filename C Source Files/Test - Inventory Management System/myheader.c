#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"

Item createItem(int id, String name, float price, int quantity, String supplier) {
    Item item;

    item.id = id;
    strcpy(item.name, name);
    item.price = price;
    item.quantity = quantity;
    strcpy(item.suppName, supplier);

    return item;
}

Inventory createInventory(int max) {
    Inventory list;

    list.max = max;
    list.count = 0;
    list.items = malloc(sizeof(Item) * max); // to make the whole thing as an array!

    return list;
}

bool addItem(Inventory *list, Item item) {
    if(list->count < list->max) {
        list->items[(list->count)++] = item;
    }
}

void displayMenu() {
    String options[5] = {"Add new item", "Search item by ID",
                         "Display inventory", "Generate report",
                         "Exit"};

    printf("Inventory Management System\n");
    for(int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i+1, options[i]);
    }

}

void displayItem(Item item) {
    printf("ID: %d\n", item.id);
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);
    printf("Supplier: %s\n", item.suppName);
}

int searchItem(Inventory list, int id) {
    int index = -1;
    for(int i = 0; i < list.count; ++i) {
        if(list.items[i].id == id) {
            index = i;
            break;
        }
    }
    return index;
}

float salesTotal(Inventory list) {
    float sales = 0;
    for(int i = 0; i < list.count; ++i) {
        sales += list.items[i].price * list.items[i].quantity;
    }
    return sales;
}

int quantityTotal(Inventory list) {
    int qty = 0;
    for(int i = 0; i < list.count; ++i) {
        qty += list.items[i].quantity;
    }
    return qty;
}
