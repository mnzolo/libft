#include <ctype.h>

int	ft_isalnum(int c)
{
	if( c >= 'A' && c<= 'Z' && c >= '0' && c<= '9')
	{
		return(c);
	}	
}
