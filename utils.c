#include "push_swap.h"

 int	rotate_counter(t_list *s, int weight)
{
	int	n;

	n = 0;
	while (s && s->index != weight)
	{
		s = s->next;
		n++;
	}
	return (n);
}

int	nearest_sq(int n)
{
	int	i;

	i = 0;
	while (i * i < n)
		i++;
	return (i - 1);
}
