#include "functions.h"

int main(void) {
    mouse *logitech;
    logitech = input();
    output(logitech);
    puts("Years after release: ");
    printf("%d\n", calculateAge(logitech));
//    float newPrice;
//    int newYear;
//    char *newModel = Mem(20);
//    puts("Input new model to change:");
//    getchar();
//    gets(newModel);
//    changeModel(newModel, logitech);
//    free(newModel);
//    output(logitech);
//    puts("Input new price to change:");
//    scanf("%f", &newPrice);
//    changePrice(newPrice, logitech);
//    output(logitech);
//    puts("Input new year to change:");
//    scanf("%d", &newYear);
//    changeReleaseYear(newYear, logitech);
//    output(logitech);
    freeMouse(logitech);
    return 0;
}
