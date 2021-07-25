#include "get_next_line.h"

char	*ft_find_nl(char **save)
{
	char	*tmp;
	int		pos;
	char	*start_save;

	start_save = (*save);
	pos = ft_strchrp(*save, '\n');
	tmp = ft_substr(*save, 0, pos + 1);
	while (pos-- >= 0)
		(*save)++;
	if (*save[0] != '\0')
		*save = ft_strdup(*save);
	else
		*save = NULL;
	free(start_save);
	start_save = NULL;
	return (tmp);
}

char	*ft_last_saved_value(char **save)
{
	char	*tmp;

	if (ft_strchrp(*save, '\n') >= 0)
		return (ft_find_nl(&(*save)));
	tmp = *save;
	*save = NULL;
	free(*save);
	return (tmp);
}

char	*get_next_line(int fd)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*save;
	char		*tmp;
	int			r;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	r = read(fd, buff, BUFFER_SIZE);
	buff[r] = '\0';
	if (r < 1)
	{
		if (save)
			return (ft_last_saved_value(&(save)));
		return (NULL);
	}
	if (!save)
		save = ft_strdup(buff);
	else
	{
		tmp = save;
		save = ft_strjoin(tmp, buff);
		free(tmp);
	}
	if (ft_strchrp(save, '\n') >= 0)
		return (ft_find_nl(&(save)));
	return (get_next_line(fd));
}

