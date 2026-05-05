#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    char int_str[64];
    char double_str[64];

    // Обработка целого числа
    printf("Введите целое число (например, -42): ");
    if (fgets(int_str, sizeof(int_str), stdin))
    {
        char *endptr;
        errno = 0;

        long int_val = strtol(int_str, &endptr, 10);

        if (endptr == int_str)
        {
            printf("Ошибка: не распознано ни одной цифры для целого числа.\n");
        }
        else if (errno == ERANGE)
        {
            printf("Ошибка: произошло переполнение диапазона (ERANGE).\n");
        }
        else
        {
            if (*endptr != '\0' && *endptr != '\n')
            {
                printf("Предупреждение: обнаружены лишние символы после целого числа ('%s').\n", endptr);
            }
            printf("Успешно: распознано целое число %ld\n", int_val);
        }
    }

    // Обработка вещественного числа
    printf("\nВведите вещественное число (например, 3.14): ");
    if (fgets(double_str, sizeof(double_str), stdin))
    {
        char *endptr;
        errno = 0;

        double double_val = strtod(double_str, &endptr);

        if (endptr == double_str)
        {
            printf("Ошибка: не распознано ни одной цифры для вещественного числа.\n");
        }
        else if (errno == ERANGE)
        {
            printf("Ошибка: произошло переполнение диапазона (ERANGE).\n");
        }
        else
        {
            if (*endptr != '\0' && *endptr != '\n')
            {
                printf("Предупреждение: обнаружены лишние символы после вещественного числа ('%s').\n", endptr);
            }
            printf("Успешно: распознано вещественное число %.2f\n", double_val);
        }
    }

    return 0;
}