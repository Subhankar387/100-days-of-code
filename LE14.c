#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int i, start = 0, maxLen = 0;

    scanf("%999s", s);

    for (i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        last[ch] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}