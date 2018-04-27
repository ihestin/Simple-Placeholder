#include <unistd.h>
#include <fcntl.h>

int     main(int argc, char *argv[])
{
	int		fd;

	if (argc != 2)
	{
		write(2,"Usage: catfic 'fichier a lister'\n",32);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "invalid File.\n", 14);
		return (-1);
	}
	close (fd);
	return(0);
}
