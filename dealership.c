#include <stdio.h>
#include <stdlib.h>

struct Car {
    char* model_name;
    int production_year;
    int door_count;
    char* color;
};

int main() {
    struct Car toyota;
    toyota.door_count = 5;

    // printf("Ilość drzwi: %d\n", toyota.door_count);

    struct Car cars[5];
    cars[0].door_count = 5;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &cars[i].door_count);
        scanf("%d", &((cars + i)->door_count));

    }

    for (int i = 0; i < 5; i++) {
        printf("Dors number: %i\n", cars[i].door_count);
    }


    return 0;
};