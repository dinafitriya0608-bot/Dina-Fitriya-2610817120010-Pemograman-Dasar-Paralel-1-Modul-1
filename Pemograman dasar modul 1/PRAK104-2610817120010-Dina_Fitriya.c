#include <stdio.h>

int main(){

    float shoe_a = 400000;
    float shoe_b = 350000;

    printf("Harga sepatu a adalah 400000 %.0f\n", shoe_a);
    printf("Harga sepatu B adalah 350000 %.0f\n", shoe_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", shoe_a - (shoe_a * 13 / 100));
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %.0f\n", shoe_b - (shoe_b * 21 / 100));

    return 0;
}