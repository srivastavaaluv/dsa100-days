#include <stdio.h>

int canEat(int piles[], int n, int h, int k) {
    long long hours = 0;

    for (int i = 0; i < n; i++) {
        hours += (piles[i] + k - 1) / k;
    }

    return hours <= h;
}

int minEatingSpeed(int piles[], int n, int h) {
    int left = 1, right = piles[0];

    for (int i = 1; i < n; i++)
        if (piles[i] > right)
            right = piles[i];

    int ans = right;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (canEat(piles, n, h, mid)) {
            ans = mid;
            right = mid - 1;
        } else
            left = mid + 1;
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int piles[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &piles[i]);

    int h;
    scanf("%d", &h);

    printf("%d", minEatingSpeed(piles, n, h));

    return 0;
}