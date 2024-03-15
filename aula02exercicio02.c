#include <stdio.h>

int main(void){
    int initHour, initMinutes, initSeconds;
    int totalSeconds;
    int durationSeconds;
    int horaTermino, minutosTermino, segundosTermino;

    scanf("%d %d %d", &initHour, &initMinutes, &initSeconds);

    scanf("%d", &durationSeconds);

    totalSeconds = (initHour/3600) + (initMinutes/60) + initSeconds + durationSeconds;

    horaTermino = (totalSeconds + durationSeconds)/3600;
    minutosTermino = ((totalSeconds + durationSeconds)%3600);
    segundosTermino = ((totalSeconds + durationSeconds)%3600)%60;

    printf("%d %d %d", horaTermino, minutosTermino, segundosTermino);
}
