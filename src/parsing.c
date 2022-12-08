#include "./push_swap.h"
void error(void)
{
	write(2, "ERROR\n", 6);
	exit(0);
}

void	free_arr(char **arr, int flag)
{
	int	i;
	
	i = -1;
	while(arr[++i])
		free(arr[i]);
	free(arr);
	if (flag)
		error();
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

void	arg_check(char **arr)
{
	int			i;
	int			j;
	long long	num;

	i = -1;
	while (arr[++i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == '-')
				j++;
			if (!(ft_isdigit(arr[i][j])))
				free_arr(arr, 1);
			j++;
		}
		num = atoi(arr[i]);
		if (num > MAX_INT || num < MIN_INT)
			free_arr(arr, 1);
	}
}

char	**ft_args_together(char **av)
{
	char	**str;
	char	*line;
	char	*tmp;
	int		i;
	
	line = ft_strdup(av[1]);
	i = 1;
	while (av[++i])
	{
		tmp = line;
		line = ft_strjoin(line, " ");
		free(tmp);
		tmp = line;
		line = ft_strjoin(line, av[i]);
		free(tmp);
	}
	str = ft_split(line, ' ');
	free(line);
	return (str);
}