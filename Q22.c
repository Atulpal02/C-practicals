#include <stdio.h>

int main() {
    printf("Enter the line of text: ");
    char txt[100];
    gets(txt);
    char low[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char cap[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    char dig[10] = { '0','1','2','3','4','5','6','7','8','9' };
    for (int i = 0; i < 26; i++) {
        int count = 0;
        for (int j = 0; j < 100; j++) {
            if ((txt[j] == low[i]) || (txt[j] == cap[i])) {
                count++;
            } else if (txt[j] == '\0') {
                break;
            }
        }
        printf("'%c' or '%c' = %d\n", low[i], cap[i], count);
    }
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 100; j++) {
            if (txt[j] == dig[i]) {
                count++;
            } else if (txt[j] == '\0') {
                break;
            }
        }
        printf("'%c' = %d\n", dig[i], count);
    }
    return 0;
}