#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NAME_SIZE 15

//structures based on my data / problem statement
// sample line of input from data file: 3032,88,58,0 Mercury
typedef struct {
    double diameter, orbit_time, rotation_time;
    int moons;
    char name[MAX_NAME_SIZE];
}planet_info_t;

typedef struct {
    planet_info_t planet[5];
} solar_system_t;

//solar_system_t scan_file(void);
int scan_file(solar_system_t *);

int main (void){
    //int num;
    //print_num(40);
    //planet_info_t planet;
    solar_system_t s;
    //setup structures for the problem - DONE
    //setup file input
    int result = scan_file(&s);
    if (result == 0){
        printf("Terminating line found, file good.");
    }
    else {
        printf("Maybe problem?");
    }
    printf("\n%s\n",s.planet[2].name);
    
    
    return 0;
}

int scan_file(solar_system_t *solar){
    FILE *inputp;
    inputp = fopen("data.txt","r");
    //scan file input
    for (int i = 0; i < 5; i++){
        fscanf(inputp, "%lf,%lf,%lf,%d %s", &solar->planet[i].diameter, &(*solar).planet[i].orbit_time, 
        &solar->planet[i].rotation_time, &solar->planet[i].moons, solar->planet[i].name);

        if (solar->planet[i].diameter == 0 && solar->planet[i].orbit_time == 0 && 
        solar->planet[i].rotation_time == 0 && solar->planet[i].moons == 0 && 
        strcmp(solar->planet[i].name, "done") == 0) {
            printf("\nTerminating line found!\n");
            return 0;
        }

        printf("From the file, I got: %lf,%lf,%lf,%d %s\n", solar->planet[i].diameter, solar->planet[i].orbit_time, 
        solar->planet[i].rotation_time, solar->planet[i].moons, solar->planet[i].name);    
    }
    return 1;
}
