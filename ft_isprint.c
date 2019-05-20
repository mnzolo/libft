#include <ctype.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int  ft_isprint(int c)
{
	if( c >= 32  && c <= 126)
	{
		return(c);
		return(0);
	}
	return(-1);
}

int  main()
{
	ft_putchar(ft_isprint('0'));
		return(0);
}

