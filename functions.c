//
// Created by malinka on 11.04.24.
//

#include "functions.h"

void freeMouse(mouse* _mouse){
    free(_mouse->model);
    free(_mouse);
}

mouse* input(){
    mouse *_mouse = (mouse*) malloc(sizeof (mouse));
    char *temp = Mem(10);
    puts("Input model:");
    gets(temp);
    strcpy(_mouse->model = Mem(strlen(temp)+1), temp);
    free(temp);
    puts("Input price:");
    scanf("%f", &_mouse->price);
    puts("Input release year:");
    scanf("%d", &_mouse->release_year);
    return _mouse;
}

void output(mouse *_mouse){
    printf("Model: %s, Price: %.2f€, Release year: %d\n", _mouse->model, _mouse->price, _mouse->release_year);
}

//void changeModel(char *newModel, mouse* _mouse){
//    strcpy(_mouse->model = (char*) realloc(_mouse->model, (strlen(newModel)+1) * sizeof (char)), newModel);
//}
//
//void changePrice(float newPrice, mouse* _mouse){
//    if (newPrice >= 0) {
//        _mouse->price = newPrice;
//    } else{
//        puts("Price can't be less than 0");
//    }
//}
//
//void changeReleaseYear(int newYear, mouse* _mouse){
//    if (newYear < 0){
//        puts("Year can't be less than 0");
//    } else{
//        _mouse->release_year = newYear;
//    }
//}

int calculateAge(mouse* _mouse){
    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds);
    return (current_time->tm_year + 1900) - _mouse->release_year;
}