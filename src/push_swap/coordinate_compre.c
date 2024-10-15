#include "../../includes/push_swap.h"

void	coordinate_compre(t_strhdr *stack)
{
	int *tmp_array;
	int i;

	i = 0;
	tmp_array = (int *)malloc(sizeof(int) * stack->len);
	if (!tmp_array)
		exit(EXIT_FAILURE);
	while (i < stack->len)
	{
		tmp_array[i] = stack->data[i].elem;
		i++;
	}
	quick_sort(tmp_array, 0, stack->len - 1);
	coordinate(stack, tmp_array);
	free(tmp_array);
}

void	quick_sort(int *array, int left, int right)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right);
		quick_sort(array, left, pivot - 1);
		quick_sort(array, pivot + 1, right);
	}
}

int	partition(int *array, int left, int right)
{
	int	i;
	int	j;
	int	piv;

	i = left + 1;
	j = right;
	piv = left;
	while (i <= j)
	{
		while (i <= right && array[i] < array[piv])
			i++;
		while (j > left && array[piv] < array[j])
			j--;
		if (i < j)
			ft_swap(&array[i], &array[j]);
	}
	if (j > left)
		ft_swap(&array[piv], &array[j]);
	return (j);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	coordinate(t_strhdr *stack, int *temp_array)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len)
	{
		j = 0;
		while (j < stack->len)
		{
			if (temp_array[i] == stack->data[j].elem)
				stack->data[j].index = i;
			j++;
		}
		i++;
	}
}
