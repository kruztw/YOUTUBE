#include <stdio.h>

int main() {
    // 迴圈 (loop)
    // continue break

    // age >= 18 && 前三個 => 得獎
    int ages[] = {15, 18, 20, 17, 26};
    int counter = 0;

    int n = sizeof(ages)/sizeof(int);
    printf("n = %d\n", n);

    for (int i = 0; i < n; ++i) {
        if (ages[i] < 18)
            continue;

        ++counter;
        printf("i = %d\n", i);
        if (counter == 3)
            break;
    }

    return 0;
}

