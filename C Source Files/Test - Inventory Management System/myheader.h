#ifndef MYHEADER_H
#define MYHEADER_H

#include<stdbool.h>

typedef char String[20];

typedef struct item {
    int id;
    String name;
    float price;
    int quantity;
    String suppName;
} Item;

typedef struct {
    Item *items;
    int count;
    int max;
} Inventory;

Item createItem(int id, String name, float price, int quantity, String supplier);
Inventory createInventory(int max);

bool addItem(Inventory *list, Item item);
int searchItem(Inventory list, int id);
float salesTotal(Inventory list);
int quantityTotal(Inventory list);

void displayMenu();
void displayItem(Item item);

#endif