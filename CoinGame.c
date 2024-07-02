#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* AskName() {
    char *name = malloc(20 * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Who are you?\n");
    scanf("%19s", name);
    printf("Hello, %s!\n", name);

    return name;
}

void CoinGame(char *name) {
    int round = 1;
    int MaxRound = 3;
    int HeadsCount = 0;
    int TailsCount = 0;

    printf("Tossing a coin...\n");

    while (round <= MaxRound) {
        int coin = rand() % 2;
        if (coin == 0) {
            printf("Round %d: Heads\n", round);
            HeadsCount++;
        } else {
            printf("Round %d: Tails\n", round);
            TailsCount++;
        }
        round++;
    }

    printf("Heads: %d, Tails: %d\n", HeadsCount, TailsCount);

    if (HeadsCount > TailsCount) {
        printf("%s won!\n", name);
    } else {
        printf("%s You lost!\n", name);
    }
}

int main() {
    srand(time(NULL));

    char *name = AskName();
    CoinGame(name);

    free(name);
    return 0;
}
