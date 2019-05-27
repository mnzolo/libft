#include <ctype.h>

int	ft_isalnum(int c)
{i
	unsigned char c2;

	c2 = (unsigned char)c;
	if( c2 >= 'A' && c2 <= 'Z' && c2 >= 'a' && c2 <= 'z' && c2 >= '0' && c2 <= '9')
	{
		return(1);
	}
	return(0);
}
