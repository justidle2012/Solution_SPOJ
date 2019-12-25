//ID:3
//Substring Check
//https://www.spoj.com/problems/SBSTR1/
#include <cstdio>
#include <cstring>

int main() {
    char a[12], b[6];

    while (EOF != scanf("%s %s", a, b)) {
        if (NULL == strstr(a, b)) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}