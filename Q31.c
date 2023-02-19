#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struct t;
    printf("Enter time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t.hour, &t.minute, &t.second);
    printf("The time is: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
    return 0;
}
