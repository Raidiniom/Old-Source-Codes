#ifndef WARSHIPSYSTEM_H_INCLUDED
#define WARSHIPSYSTEM_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum stuff {
    stringmax = 60,
};

typedef char String[stringmax];

// Create Ship Detail
typedef struct {
    String shipname;
    float health;
    int armor;
    int capacity;
} Ship;

// Put the ships into the ocean
typedef struct {
    Ship *detail;
    int count;
    int max;
} Ocean;

// Doing data access for the two structs

#endif
