#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *a;

	i = 0;
	a = (char *)b;
	while(i < len)
	{
		a[i] = c;
		i++;
	}
	return(a);
}

int	main()
{
	char str[] = "mthokozisi";

	printf("%s",ft_memset(str,'i',3));
	return(0);
}
