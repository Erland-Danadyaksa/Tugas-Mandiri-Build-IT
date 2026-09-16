#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    if (scanf("%d", &x) != 1) return 0;

    long long total_elemen = 0;
    for (int i = 0; i < x; i++) {
        long long a;
        scanf("%lld", &a);
        total_elemen += a;
    }

    long long minimum_operasi = total_elemen < 0 ? -total_elemen : total_elemen;
    printf("%lld\n", minimum_operasi);

    return 0;
}