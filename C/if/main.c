#include <stdio.h>

int main() {

    int today;
    scanf("%d", &today);

    if (today < 1 || today > 7) {
        printf("Invalid input\n");
        return -1;
    }
    // true
    // false
    // = : assign
    if (today == 1) {
        printf("eat Mc.\n");
    } else if (today == 2) {
        printf("eat sushi\n");
    } else if (today == 3) {
        printf("eat noodle\n");
    } else {
        printf("eat KFC\n");
    }

    return 0;
}

