
#include "../../includes/push_swap.h"

void	error_call(void)
{
	write (2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

// static char	*free_array(char **arr, size_t i)
// {
// 	while (i > 0)
// 	{
// 		i--;
// 		free(arr[i]);
// 	}
// 	free(arr);
// 	return (NULL);
// }

void	error_checker(char **argv)
{
	int i;
	int j;
	int test;

	i = 0;
	if (argv[i] == NULL)
		error_call();
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-' && argv[i][j] != '+')
				error_call();
			j++;
		}
		test = ft_atoi(argv[i]);
		printf("test: %d\n", test);
		if (test == INT_MAX || test == INT_MIN)
			error_call();
		i++;
	}
}

int main(int argc, char **argv)
{
	// t_stack stack_a;

	if (argc == 1)
		exit(EXIT_FAILURE);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
			error_call();
	}
	else
		argv++;
	error_checker(argv);//check if the input is valid
	printf("argc: %d\n", argc);
	printf("argv[0]: %s\n", argv[0]);
	printf("argv[1]: %s\n", argv[1]);
	printf("argv[2]: %s\n", argv[2]);
	// printf("argv[3]: %s\n", argv[3]);
	// printf("argv[4]: %s\n", argv[4]);
	// push_swap(stack_a, argv);
	// free_array(argv, 0);
	return 0;
}
