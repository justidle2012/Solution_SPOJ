//ID:2
//Prime Generator
//https://www.spoj.com/problems/PRIME1/
#include <cstdio>

//1000000000
bool isPrime(int x) {
    if (1==x) {
        return false;
    }
    for (int i=2; i*i<=x; i++) {
        if (0==x%i) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int i, j;
    for (i=0; i<n; i++) {
        int left, right;
        scanf("%d%d", &left, &right);

        for (j=left; j<=right; j++) {
            if (true == isPrime(j)) {
                printf("%d\n", j);
            }
        }

        printf("\n");
    }

    return 0;
}