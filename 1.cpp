//ID:1
//TEST - Life, the Universe, and Everything
#include <cstdio>
int main() {
    int b;
    do {
        scanf("%d", &b);
        if (42!=b) {
            printf("%d\n", b);
        } else {
            break;
        }
    } while (true);
    return 0;
}