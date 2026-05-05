#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MY_SIZE 32

int main(void)
{
    char my_string[MY_SIZE];

    printf("Введите строку (около 10 символов, например AbC12): ");
    if (fgets(my_string, sizeof(my_string), stdin))
    {

        size_t len = strlen(my_string);
        if (len > 0 && my_string[len - 1] == '\n')
        {
            my_string[len - 1] = '\0';
        }

        printf("\n--- Шаг 1: Ручной подсчёт длины по индексам ---\n");
        size_t len1 = 0;
        for (size_t i = 0; my_string[i] != '\0'; i++)
        {
            len1++;
        }
        printf("Длина строки (индексы): %zu\n", len1);

        printf("\n--- Шаг 2: Ручной подсчёт длины по указателю ---\n");
        size_t len2 = 0;
        char *p = my_string;
        while (*p != '\0')
        {
            len2++;
            p++;
        }
        printf("Длина строки (указатель): %zu\n", len2);

        printf("\n--- Шаг 3: Подсчёт длины библиотечной функцией ---\n");
        size_t len3 = strlen(my_string);
        printf("Длина строки (strlen): %zu\n", len3);

        printf("\n--- Шаг 4: Копирование строки ---\n");
        char copy[MY_SIZE];
        strcpy(copy, my_string);
        printf("Исходная строка: %s\n", my_string);
        printf("Копия строки: %s\n", copy);

        printf("\n--- Шаг 5: Конкатенация ---\n");
        char concat_buf[MY_SIZE * 2] = "Hello";
        strcat(concat_buf, "World");
        printf("Результат объединения: %s\n", concat_buf);

        printf("\n--- Шаг 6: Сравнение строк ---\n");
        int cmp_res = strcmp("Hello", "World");
        printf("Результат strcmp(\"Hello\", \"World\"): %d\n", cmp_res);
        if (cmp_res < 0)
        {
            printf("Первая строка лексикографически меньше\n");
        }
        else if (cmp_res == 0)
        {
            printf("Строки равны\n");
        }
        else
        {
            printf("Первая строка больше\n");
        }

        printf("\n--- Шаг 7: Перевод регистра ---\n");
        char lower_str[MY_SIZE];
        char upper_str[MY_SIZE];

        for (size_t i = 0; my_string[i] != '\0'; i++)
        {
            unsigned char c = (unsigned char)my_string[i];
            lower_str[i] = (char)tolower(c);
            upper_str[i] = (char)toupper(c);
        }

        lower_str[len3] = '\0';
        upper_str[len3] = '\0';

        printf("Исходная: %s\n", my_string);
        printf("В нижнем регистре: %s\n", lower_str);
        printf("В верхнем регистре: %s\n", upper_str);
    }

    return 0;
}