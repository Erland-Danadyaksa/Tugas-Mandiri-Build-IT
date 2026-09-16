#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long min(long long a, long long b) {
    return (a < b) ? a : b;
}

int main() {
    long long a, b, c;
    
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) {
        return 0;
    }
    
    long long x = a, y = b, z = c;
    long long temp;
    
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }
    
    long long ronde = min(y - x, z - y);
    
    printf("%lld\n", ronde);
    
    return 0;
}