
//#include "header.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "header.h"
/*
#define MAX_NAME 20

typedef struct {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_t;

typedef struct{
    double diameter;
    planet_t planets [9];
    char name[MAX_NAME];
} solar_sys_t;
*/
//this function is going to print a planet structure
void print(planet_t);
//output parameter of planet and int of updated moon number
void change_moons(planet_t *);

planet_t get_planet (void);

int main (void){
    int num;
    print_num(40);

    planet_t planet_logs[100];
    planet_logs[67].moons = 30;
    planet_t new_planet;
    //new_planet = {"", 0, 0, 0, 0};
    strcpy(new_planet.name, "This Land");
    //printf("%s", new_planet.name);
    new_planet.moons = 15;
    //printf("%d", new_planet.moons);
    planet_t old_planet = new_planet;
    print(new_planet);
    change_moons(&new_planet);
    printf("\nMoons updated: %d\n", new_planet.moons);
    planet_t returned_planet = get_planet();

    //using heirarchy
    solar_sys_t solarize_me;
    strcpy(solarize_me.planets[0].name, "Mercury");
    solarize_me.planets[0].moons = 0;
    print(solarize_me.planets[0]);

    //planets;
    return 0;
}

planet_t get_planet (void){
    planet_t new_planet;
    new_planet.moons = 0;
    strcpy(new_planet.name, "Mercury");
    new_planet.diameter = 3032;
    //etc
    return new_planet;
}

void change_moons(planet_t *planet){
    //scanf("%s", (*planet).name);
    scanf("%d", &(*planet).moons);
    scanf("%d", &planet->moons);
    //(*planet).moons = update;
}

void print (planet_t planet){
    //printf("I'm in print function");
    printf("%s: Moons: %d\n", planet.name, planet.moons);
    //any changes to planet stay local to my function (not saved to the variable in main)
    planet.moons = 20;
}
