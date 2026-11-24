#include <stdio.h>

enum Week {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5
};

int main() {
    enum Week day;

    day = Monday;
    printf("Monday = %d\n", day);

    day = Tuesday;
    printf("Tuesday = %d\n", day);

    day = Wednesday;
    printf("Wednesday = %d\n", day);

    day = Thursday;
    printf("Thursday = %d\n", day);

    day = Friday;
    printf("Friday = %d\n", day);

    return 0;
}