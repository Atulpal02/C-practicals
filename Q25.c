#include <stdio.h>
#include <math.h>

void toString(int x) {
    char* numbers[27] = { "NINTY","EIGHTY","SEVENTY","SIXTY","FIFTY","FORTY","THIRTY","TWENTY","NINTEEN",
                        "EIGHTEEN","SEVENTEEN","SIXTEEN","FIFTEEN","FOURTEEN","THIRTEEN",
                        "TWELVE","ELEVEN","TEN","NINE","EIGHT","SEVEN",
                        "SIX","FIVE","FOUR","THREE","TWO","ONE" };
    int num[27] = { 90,80,70,60,50,40,30,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
    for (int i = 0; i < 27; i++) {
        if (x >= num[i]) {
            printf("%s ", numbers[i]);
            x -= num[i];
        }
    }
}

int main() {
    char* dig[4] = { "CRORE","LAKH","THOUSAND","HUNDRED" };
    int order[4] = { 10000000,100000,1000,100 };
    printf("Enter the amount (upto 1 crore): ");
    float amt;
    scanf("%f", &amt);
    int rs = (int)roundf(amt * 100);
    int paise = rs % 100;
    rs /= 100;
    printf("RUPEES ");
    for (int i = 0; i < 4; i++) {
        if (rs >= order[i]) {
            int temp = rs / order[i];
            rs = rs % order[i];
            toString(temp);
            printf("%s ", dig[i]);
        }
    }
    if (rs > 0) {
        toString(rs);
    }
    if (paise != 0) {
        printf("AND ");
        toString(paise);
        printf("PAISE ");
    }
    printf("ONLY");
    return 0;
}