#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MOD 1000000007

int comp(const void *a, const void *b) {
    long long int_a = *(const long long *)a;
    long long int_b = *(const long long *)b;
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long *a = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    qsort(a, n, sizeof(long long), comp);

    long long total_pasangan = ((long long)n * (n - 1)) / 2;

    long long pasangan_kembar = 0;
    long long count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            pasangan_kembar += (count * (count - 1)) / 2;
            count = 1;
        }
    }
   
    pasangan_kembar += (count * (count - 1)) / 2;

   
    long long ans = (total_pasangan - pasangan_kembar) % MOD;
    if (ans < 0) {
        ans += MOD;
    }

    printf("%lld\n", ans);

    free(a);
    return 0;
}