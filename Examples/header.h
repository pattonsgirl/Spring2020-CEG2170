#include <stdio.h>
#include <math.h>
#include <string.h>

#include "file_function.c"

#define MAX_NAME 20
//prototype functions from file_function.c
void print_num(int);

typedef struct {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_t;
//to initialize the type when creating a new variable:
//  planet_t new_planet

/*
struct planet_t {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_new, planet_old;
*/
//pre-initialize of variables that are of type planet_t
//  planet_new and planet_old can now be used in any function including main

typedef struct{
    double diameter;
    planet_t planets [9];
    char name[MAX_NAME];
} solar_sys_t;
