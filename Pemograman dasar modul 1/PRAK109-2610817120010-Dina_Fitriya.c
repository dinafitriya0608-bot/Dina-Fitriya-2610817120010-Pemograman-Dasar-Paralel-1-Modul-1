#include <stdio.h>

int main(){
    int Yu_Zhong_troops = 958730;
    int total_heroes = 5;
    int troops_per_hero = Yu_Zhong_troops / total_heroes;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", Yu_Zhong_troops);
    printf("Jumlah pahlawan = %d\n", total_heroes);
    printf("Jumlah pasukan yang dikalahkan setiap pahlawan adalah %d pasukan\n", troops_per_hero);

    return 0;
}