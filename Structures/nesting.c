//Boiler PLate
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int speed;
        float attack;
        char type[10];
    }pokemon;

     typedef struct legendaryPokemon{
        pokemon p1;
        char ability[10];
    }legendaryPokemon;

    pokemon pikachu={100,70,"Electric"};
    pokemon charizard={80,120,"Fire"};
    legendaryPokemon mewtwo;
    mewtwo.p1.attack=130;
    mewtwo.p1.speed=150;

    strcpy(mewtwo.p1.type,"Pressure");
    strcpy(mewtwo.ability,"Pressure");

    return 0;
}