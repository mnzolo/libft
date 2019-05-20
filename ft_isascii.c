#include <ctype.h>

int		isascii(int c)
{
	if(c >= 0 && c <= 177)
	{
		return (c);
	}
}
