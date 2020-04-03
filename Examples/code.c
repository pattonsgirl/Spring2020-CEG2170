#include "header.h"
/*****
 * How to use a header file (header.h)
 * For each file you want to use the header, type #include "header_file_name.h" 
 *  at the top, where the preprocessor directives go.
 * In this example, header.h inculdes a prototype function.  The actual function is in
 *  more-code.c  What I did wrong initially was have the wrong function name in more-code.c
 *  more-code.c had a function name of print_int, while my header and main in code.c used print_num
 * With that fixed, I also need to COMPILE any additional code I have.  In this case, I now have
 *  code.c and more-code.c  The command to compile both is:
 *  gcc -Wall -o program.exe more-code.c code.c 
 *  The order I compile the code files in does not matter.
 * My header file does not have compiled code, just definitions my code uses, therefore it is not
 *  listed as a file that needs compiled.
*****/

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
