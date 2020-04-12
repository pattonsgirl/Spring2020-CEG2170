#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_MODEL_NAME 20
#define MAX_BIKES 10

/*Write a structure called bike_t that would store the following: the model name of bicycle, the number of wheels, the number of pedals, and the size of the wheels.
*/

typedef struct {
    char hostname[15];
    int A,B,C,D;
} address_t;

typedef struct {
    address_t ip_name [25];
} dns_t;
/*
Full answer:
char text [30] = "3.5/8/43.9 Garden"
sscanf(text, "%lf/%lf/%lf %s", &length, &width, &depth, name);

student.name = "bob"; OR strcpy(student.name, "bob");
student.uid = 50678;
student.gpa = 4.2;
*/
typedef struct {
    char model[MAX_MODEL_NAME];
    int wheels;
    int pedals;
    int wheel_size;
} bike_t;

typedef struct {
    bike_t bikes[MAX_BIKES];
    char cool_name[20];
    int pints_of_ice_cream;
} fleet_t;

//prototype
int scan_file(fleet_t *);
void info_search (fleet_t, int);

int main (void){
    bike_t bike;
    bike.pedals = 4;
    //bike_t bobs_bike;
    //bobs_bike.pedals = 8;
    bike_t *bikep;
    bikep = &bike;
    (*bikep).pedals = 12;
    bikep->pedals = 12;
    printf("\n Pedals is now: %d \n", bike.pedals);
    printf("\n Pedals is now: %d \n", bikep->pedals);
    //scanf("%d", &bikep->pedals);

    strcpy(bike.model, "Kona");

    //make a fleet
    fleet_t fleet;
    fleet.bikes[0].pedals = 22;
    fleet_t *fleet_p;
    fleet_p = &fleet;
    fleet_p->bikes[0].pedals = 33;
    int lines_read;
    //lines_read = scan_file(fleet_p);
    lines_read = scan_file(&fleet);
    info_search(fleet, lines_read);

    return 0;
}

void info_search (fleet_t f, int valid_lines){
    char seek_me [15] = "Sutra";
    int seek_pedals = 4;
    //int success = 0;
    int i = 0;
    while ( i < valid_lines){
        printf("%s", f.bikes[i].model);
        if (f.bikes[i].pedals == seek_pedals){
        //if(strcmp(f.bikes[i].model, seek_me) == 0){
            printf("\nSUCCESS\n");
            printf("Found it!  Number of pedals is: %d\n", f.bikes[i].pedals);
            return;
        }
        i++;
    }
    // error not found
    return;
}

int scan_file(fleet_t *f){
    FILE *inputp;
    inputp = fopen("data.txt","r");
    int i;
    char info[25] = "2,3,27 Sutra";
    int p,w,ws;
    char name[15];
    //I'm manually creating a string, you could ask the user for a string
    sscan(info, "%d,%d,%d %s", &p, &w, &ws, name);

    for (i = 0; i < MAX_BIKES; i++){
        fscanf(inputp, "%d,%d,%d %s", &f->bikes[i].pedals, &f->bikes[i].wheels, 
        &f->bikes[i].wheel_size, f->bikes[i].model);
        //terminating condition = model name = fin
        int condition = strcmp(f->bikes[i].model, "fin");
        //I could then use condition == 0
        if (strcmp(f->bikes[i].model, "fin") == 0){
            printf("\nFound end of data / terminating condition\n");
            break;
        }
        printf("\nI read in: %d,%d,%d %s\n", f->bikes[i].pedals, f->bikes[i].wheels, 
        f->bikes[i].wheel_size, f->bikes[i].model);
    }  
    printf("%d",i);
    //you can now use i for a loop counter / loop max in your search functions
    return i;
}

