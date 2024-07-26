#ifndef GUNSTRINV_H_INCLUDED
#define GUNSTRINV_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum stuff {
    stringmax = 50,
};

typedef char String[stringmax];

// Gun Detail
typedef struct {
    int id;
    String gunname;
    String manufacturer;
    int stock;
    float price;
} Gun;

// The Gunstore's Inventory
typedef struct {
    Gun *detail;
    int count;
    int max;
} Rack;

// Accessing the data within the two structs
Gun createGun(int id, String gunname, String manufacurer, int stock, float price)
{
    Gun write;

    write.id = id;
    strcpy(write.gunname, gunname);
    strcpy(write.manufacturer, manufacurer);
    write.stock = stock;
    write.price = price;

    return write;
}

Rack createRack(int max)
{
    Rack cabinet;

    cabinet.count = 0;
    cabinet.max = max;
    cabinet.detail = malloc(sizeof(Gun) * max);

    return cabinet;
}

// This only displays the Menu
void menu()
{
    String menu_words[5] = {"Add Gun", "Display Guns", "Search Gun", "Delete Gun", "Exit Program"};

    printf("<=== Menu ===>\n");
    for(int x = 0; x < 5; ++x)
    {
        printf("%d. %s\n", x + 1, menu_words[x]);
    }
    printf("Enter pick: ");
}

// Enables user input to happen
void addGun(Rack *cabinet, Gun detail)
{
    if(cabinet->count < cabinet->max)
    {
        cabinet->detail[(cabinet->count)++] = detail;
    }
}

// Display the details of the gun
void display(Gun detail)
{
    printf("ID: %d\n", detail.id);
    printf("Name: %s\n", detail.gunname);
    printf("Manufacturer: %s\n", detail.manufacturer);
    printf("Stock: %d\n", detail.stock);
    printf("Price: %.2f\n", detail.price);
    printf("\n");
}

int searchGun(Rack cabinet, int serId)
{
    int holdId = 0;
    for(int x = 0; x < cabinet.count; ++x)
    {
        if(serId == cabinet.detail[x].id)
        {
            holdId = x;
            break;
        }
    }
    return holdId;
}

void deleteGun(Rack *cabinet, int delId)
{
    for(int  i = 0; i < cabinet->count; ++i)
    {
        if(delId == cabinet->detail[i].id)
        {
            cabinet->detail[i] = cabinet->detail[i + 1];
            (cabinet->count)--;
        }
    }
}

#endif
