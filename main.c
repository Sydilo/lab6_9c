#include <stdio.h>

void input(int *price, int *count) {
    printf("Enter a price: ");
    scanf("%d", price);
    printf("Enter a count: ");
    scanf("%d", count);
}

int calc(int price, int count) {
    int cost = price*count;
    return cost;
}

void output(float cost) {
    printf("Cost = %.2f", cost);
}

int main() {
    float res;
    int price, count;
    input(&price, &count);
    res = calc(price, count);
    output(res);
    return 0;
}
