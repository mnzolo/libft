#include <ctype.h>
#include <stdio.h>

int  ft_isprint(int c)
{
	unsigned char c2;

	c2 = (unsigned char)c;
	if( c2 >= 32  && c2 <= 126)
	{
		return(1);
	}
	return(0);
}

int main()
{
	printf("%d",ft_isprint('z'));
	return (0);
}
