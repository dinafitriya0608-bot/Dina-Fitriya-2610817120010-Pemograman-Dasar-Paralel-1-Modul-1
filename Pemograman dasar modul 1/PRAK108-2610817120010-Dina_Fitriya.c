#include <stdio.h>

int main(){
    float laps = 5;
    float distance = 14;
    float PI = 3.14;
    float circumference = distance / laps;
    float r = circumference / (2 * PI);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", (laps));
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance);
    printf(" \n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}