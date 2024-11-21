#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main(void) {
    int sumCounts[SIDES * 2 + 1] = { 0 }; 
    int dice1, dice2, sum;


    srand((unsigned int)time(NULL));

 
    for (int i = 0; i < ROLLS; i++) {
        dice1 = rand() % SIDES + 1; 
        dice2 = rand() % SIDES + 1; 
        sum = dice1 + dice2;       
        sumCounts[sum]++;          
    }

    // 輸出結果
    printf("Sum\tFrequency\tProbability\n");
    for (int i = 2; i <= SIDES * 2; i++) {
        printf("%2d\t%8d\t%.2f%%\n", i, sumCounts[i], (double)sumCounts[i] / ROLLS * 100);
    }

    return 0;
}
