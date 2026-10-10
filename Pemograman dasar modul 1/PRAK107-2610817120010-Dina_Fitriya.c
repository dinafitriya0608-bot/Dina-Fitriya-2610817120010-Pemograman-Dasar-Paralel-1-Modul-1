#include <stdio.h>

int main(){
    int side_1 = 4;
    int side_2 = 5;
    int side_3 = 7;
    int perimeter = side_1 + side_2 + side_3;
    int price = 85000;
    int total_cost = perimeter * price;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side_1, side_2, side_3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", perimeter);
    printf("Harga tanah Per Meter adalah %d\n", price);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_cost);

    return 0;
}