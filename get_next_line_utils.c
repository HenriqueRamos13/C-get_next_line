#include "get_next_line.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (!(str))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	size = 0;
	while (s[start + size] != '\0' && size < len)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!(str))
		return (NULL);
	size = -1;
	while (s[start + ++size] != '\0' && size < len)
		str[size] = s[start + (size)];
	str[size] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	count;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc((len + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	count = 0;
	while (*s1 != '\0')
		str[count++] = *(s1++);
	while (*s2 != '\0')
		str[count++] = *(s2++);
	str[count] = '\0';
	return (str);
}

char	*ft_strdup(char *src)
{
	char	*pointer;
	size_t	len;
	size_t	counter;

	len = ft_strlen(src);
	pointer = malloc(sizeof(char) * (len + 1));
	if (!(pointer))
		return (NULL);
	counter = 0;
	while (src[counter] != '\0')
	{
		pointer[counter] = src[counter];
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}

int	ft_strchrp(const char *s, int c)
{
	int		ct;

	ct = 0;
	while ((*s != '\0') && (*s != c))
	{
		ct++;
		s++;
	}
	if (*s == c)
	{
		return (ct);
	}
	return (-1);
}
