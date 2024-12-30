#include "minitalk.h"

// get_nbytes : get native bytes !

void print_nbytes(unsigned char *nbytes)
{
	int _index;

	_index = 0;
	while (nbytes[_index])
	{
		write(1, &nbytes[_index], 1);
		_index++;
	}
}

int get_nbytes(char *string, ssize_t len)
{
	unsigned char *nbytes;
	int _index;

	_index = 0;
	nbytes = malloc((len + 1) *sizeof(char));
	if (!nbytes)
	{
		return (-3);
	}
	while (string[_index])
	{
		nbytes[_index] = (unsigned char)string[_index];
		_index++;
	}
	nbytes[len] = '\n';
	print_nbytes(nbytes);
	free(nbytes);
	return (0);
}

ssize_t get_len(char *string)
{
	ssize_t _strlen;

	_strlen = 0;
	if (!string)
		return (_strlen = -1, _strlen);
	while (string[_strlen])
		_strlen++;
	return (_strlen);
}

int printer(char *string)
{
	int _index;
	ssize_t len;
	int get_nbytes_status;

	len = get_len(string);
	_index = 0;
	if (len < 0)
	{
		write(1, "NULL", 4);
		return (-1);
	}
	if (len == 0)
	{
		write(1, "Empty String ...", 16);
		return (0);
	}
	get_nbytes_status = get_nbytes(string, len);
	if (get_nbytes_status == -3)
	{
		write(1, "fail to allocate this string ...", 33);
		return (get_nbytes_status);
	}
	return (1);
}

// int main(int argc, char **argv)
// {
// 	if (argc <2 || argc >2)
// 	{
// 		printer("ERROR ...");
// 		return (1);
// 	}
// 	char *tmp;
// 	tmp  = argv[1];
// 	printer(tmp);
// 	return (0);
// }
