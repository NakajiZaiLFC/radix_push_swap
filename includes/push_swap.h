
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdint.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdint.h>
# include <math.h>


typedef struct s_stack
{
	long			num;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);

#endif