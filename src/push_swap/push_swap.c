
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
	init_stack(argv);
	// error_checker(argv);//check if the input is valid

	// push_swap(stack_a, argv);
	// free_array(argv, 0);
	return 0;
}
