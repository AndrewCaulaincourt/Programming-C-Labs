#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char str[64];

    printf("Введите строку (10-20 символов: буквы, цифры, знаки): ");
    if (fgets(str, sizeof(str), stdin))
    {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }

        printf("\nРезультат классификации:\n");
        for (size_t i = 0; str[i] != '\0'; i++)
        {
            unsigned char c = (unsigned char)str[i];

            printf("Символ '%c' - ", c);

            if (isalpha(c))
            {
                printf("буква\n");
            }
            else if (isdigit(c))
            {
                printf("цифра\n");
            }
            else if (isspace(c))
            {
                printf("пробел\n");
            }
            else if (ispunct(c))
            {
                printf("пунктуация\n");
            }
            else
            {
                printf("другой символ\n");
            }
        }
    }

    return 0;
}