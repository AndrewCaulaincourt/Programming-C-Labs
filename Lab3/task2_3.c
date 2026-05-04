#include <stdio.h>

enum DaysOfWeek
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(void)
{
    printf("Дни недели (как целые числа):\n");
    printf("Понедельник (MONDAY) : %d\n", MONDAY);
    printf("Вторник (TUESDAY)  : %d\n", TUESDAY);
    printf("Среда (WEDNESDAY): %d\n", WEDNESDAY);
    printf("Четверг (THURSDAY) : %d\n", THURSDAY);
    printf("Пятница (FRIDAY)   : %d\n", FRIDAY);
    printf("Суббота (SATURDAY) : %d\n", SATURDAY);
    printf("Воскресенье (SUNDAY) : %d\n", SUNDAY);

    return 0;
}
