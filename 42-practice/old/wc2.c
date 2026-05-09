#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDWR | O_CREAT, 0600);
	write(fd, "hello", 5);
	printf("%d\n", fd);
	return (0);
}
