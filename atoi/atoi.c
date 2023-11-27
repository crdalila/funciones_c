#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0;
    int countNegatives = 0;
    int sign = 1;
    int i = 0;

    //Saltar espacios
    while (str[i] != '\0'&& str[i] == ' ')
    {
        i++;
    }
    // Manejar signos
    while ((str[i] == '-' || str[i] == '+') && str[i] != '\0') {
        if (str[i] == '-')
            countNegatives++;
        i++;
    }
    // Ajustar el signo basándote en la paridad de countNegatives
    if (countNegatives % 2 == 1) {
        sign = -1;
    }
    // Convertir dígitos
    while (str[i] != '\0' && (str[i] >= '0'&& str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result * sign);
}

int main(void)
{
    char *str = "  ---+-+1234ab567";
    int number = ft_atoi(str);

    printf("%d\n", number);

    return (0);
}