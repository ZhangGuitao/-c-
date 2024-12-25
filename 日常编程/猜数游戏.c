#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, N, guess, count = 0;
    scanf("%d %d", &target, &N);
    srand((unsigned int)time(NULL));
    if (target < 0 || target > 100 || N < 1 || N > 100) {
        printf("Invalid input\n");
        return 0;
    }
    while (1) {
        scanf("%d", &guess);
        if (guess < 0) {
            printf("Game Over\n");
            break;
        }
        count++;
        if (guess == target) {
            if (count == 1)
                printf("Bingo!\n");
            else if (count <= 3)
                printf("Lucky You!\n");
            else
                printf("Good Guess!\n");
            break;
        } else if (guess > target) {
            printf("Too big\n");
        } else {
            printf("Too small\n");
        }
        if (count == N) {
            printf("Game Over\n");
            break;
        }
    }
    return 0;
}
