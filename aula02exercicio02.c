#include <stdio.h>

int main(void){
    int initHour, initMinutes, initSeconds;
    int durationSeconds;
    int horaTermino, minutosTermino, segundosTermino;

    scanf("%d %d %d", &initHour, &initMinutes, &initSeconds);

    scanf("%d", &durationSeconds);

    printf("%d %d", (durationSeconds/3600), ((durationSeconds%3600)/60));

    horaTermino = (initHour+(durationSeconds/3600));
    printf(" %d", horaTermino);

}
