#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while(haystack[i] != '\0' && needle[i] != '\0')
	{
		haystack[i<len] = needle[i<len];
	}
	if(needle[i] == '\0')
	{
		return(&haystack[i]);
	}
	if(needle[i] != haystack[i])
	{
		return(NULL);
	}
	else
	i = 0;
	return(&needle[i]);
}

int main()
{
	char str1[] = "mtho";
	char str2[] = "mtho";

	printf("%s",strnstr(str1,str2);
	return(0);
}
