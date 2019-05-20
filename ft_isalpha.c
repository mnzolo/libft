#include <ctype.h>

int	isalpha(int c)
{
	if( c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z')
	return(c);
}
