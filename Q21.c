#include <stdio.h>

int main() {
    printf("Enter the line of text: ");
    char txt[100];
    gets(txt);
    printf("Enter the substring you want to replace: ");
    char str1[10];
    gets(str1);
    printf("Enter the substring you want to replace it with: ");
    char str2[10];
    gets(str2);
    int str1Count = 0;
    while (str1Count < 10) {
        if (str1[str1Count] == '\0') {
            break;
        }
        str1Count++;
    }
    int str2Count = 0;
    while (str2Count < 10) {
        if (str2[str2Count] == '\0') {
            break;
        }
        str2Count++;
    }
    char res[100];
    int resCount = 0;
    for (int i = 0; i < 100 - str1Count; i++) {
        if (txt[i] == str1[0]) {
            int count = 1;
            while (count < str1Count) {
                if (txt[i + count] != str1[count]) {
                    break;
                } else {
                    count++;
                }
            }
            if (count == str1Count) {
                for (int j = 0; j < str2Count; j++) {
                    res[resCount] = str2[j];
                    resCount++;
                }
                i += str1Count;
            }
        }
        res[resCount] = txt[i];
        resCount++;
    }
    printf("%s", res);
    return 0;
}