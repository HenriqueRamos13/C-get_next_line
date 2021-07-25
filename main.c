#include "get_next_line.h"

int	main(void)
{
	int	file;
	// char	*x;
	// char	*z;
	// char	*reader;

	file = open("./teste", O_RDONLY);;
	// while((reader = get_next_line(file)))
	// {
	// 	if (reader[0] == 0)
	// 		break;
	// 	write(1, reader, ft_strlen(reader));
	// //	while (*reader != '\0')
	// //		printf("%i ", *reader++);
	// //	printf("\n");
	// //  printf("%s", reader);
	// }
	// x = get_next_line(file);
	// printf("%s", x);
	// z = get_next_line(file);
	// printf("%s", z);
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
    printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
	printf("%s", get_next_line(file));
    printf("%s", get_next_line(file));
	close(file);
	return (0);
}