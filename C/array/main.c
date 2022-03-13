#include <stdio.h>

int main() {
    // 陣列 (array)
    int prices[4] = {0, 10, 20, 100};

    int option;
    scanf("%d", &option);

    if (option < 1 || option > 3) {
        printf("Invalid input\n");
        return -1;
    }

    prices[2] = 30;
    printf("%d\n", prices[option]);

    return 0;
}

