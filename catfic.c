#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int     main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char    buffer[BUF_SIZE];

	if (argc != 2)
	{
		write(2,"Usage: catfic 'fichier a lister'\nA",33);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "fichier invalide\n1234", 17);
		return (-1);
	}
	while ((ret = read(fd, buffer, BUF_SIZE)) > 0)
	     write(1, buffer, ret);
	close (fd);
	return(0);
}
