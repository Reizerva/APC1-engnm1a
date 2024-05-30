#include <stdio.h>

#define MAX_PLAYERS 5

int main() {
    char names[MAX_PLAYERS][50];
    int scores[MAX_PLAYERS] = {1000, 900, 800, 700, 600};
    printf("Ranking:\n");
    for (int i = 0; i < MAX_PLAYERS; i++) {
        printf("%d. Enter player %d name: ", i+1, i+1);
        scanf("%s", names[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX_PLAYERS; i++) {
        printf("%d. %s - %d\n", i+1, names[i], scores[i]);
    }
    return 0;
}