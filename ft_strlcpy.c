#include <libft.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i = 0;
	while(*src && i < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = "\0";
	return (i);
}
