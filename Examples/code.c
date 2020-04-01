
#include "header.h"



int main (void){
    int num;
    planet_t new_planet;
    //new_planet = {"", 0, 0, 0, 0};
    strcpy(new_planet.name, "This Land");
    printf("%s", new_planet.name);
    new_planet.moons = 15;
    printf("%d", new_planet.moons);
    planet_t old_planet = new_planet;

    solar_sys_t solarize_me;
    strcpy(solarize_me.planets[0].name, "Mercury");
    //planets;
    return 0;
}
