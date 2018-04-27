#include <unistd.h>

int     main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(2,"Usage: catfic 'fichier a lister'");
	}
}
