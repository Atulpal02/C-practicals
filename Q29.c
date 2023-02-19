#include <stdio.h>
#include <string.h>

int substring(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i, j;

    for (i = 0; i <= len2 - len1; i++) {
        for (j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }

    return -1;
}

int main() {
    const char *s1 = "mom";
    const char *s2 = "thermometer";
    int pos = substring(s1, s2);
    if (pos != -1) {
        printf("'%s' found in '%s' at position %d\n", s1, s2, pos);
    } else {
        printf("'%s' not found in '%s'\n", s1, s2);
    }
    return 0;
}
