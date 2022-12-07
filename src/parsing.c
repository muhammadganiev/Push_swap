#include "./push_swap.h"
void error(void)
{
	write(2, "ERROR\n", 6);
	exit(0);
}

void check_same(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (ft_atoi(str[i]) == ft_atoi(str[j]))
                error();
            j++;
        }
        i++;
    }
}

void check_int(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j])
        {
            if (str[i][j] == '-' || str[i][j] == '+')
                j++;
            if (!ft_isdigit(str[i][j]))
                error();
            j++;
        }
        i++;
    }
}

