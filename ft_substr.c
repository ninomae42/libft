#include "libft.h"

// Allocates and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p_ret;
	size_t	allocsize;

	if (s == NULL)
		return (NULL);
	if (len == 0 || start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		allocsize = ft_strlen(s) + 1;
	else
		allocsize = len + 1;
	p_ret = (char *)malloc(sizeof(char) * (allocsize));
	if (p_ret == NULL)
		return (NULL);
	ft_strlcpy(p_ret, &s[start], len + 1);
	return (p_ret);
}
