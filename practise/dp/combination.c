#include <stdio.h>
#include <stdlib.h>

/**
 * Question describe: given a set of {1, 3, 5}, try to combine a spcific 
 * number.
 */
#define MAXN 100 // suppose we not have more than 100
int dp[MAXN];

int solve(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    return dp[n] = solve(n - 1) + solve(n - 3) + solve(n - 5);

}


int main() {
    for(int j = 0; j < MAXN; j++) {
        dp[j] = -1;
    }
    int i;
    scanf("%d", &i);
    printf("%d\n",solve(i));
    return EXIT_SUCCESS;
}


