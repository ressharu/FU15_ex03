#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CoinGame() {
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

}

int main() {
    CoinGame();
    return 0;
}