#include "main.h"

char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	for (d = 0; d; d++)
	{
		if (*(dest + d) == '\0')
		{
			for (s = 0; s; s++)
			{
				*(dest + d) = *(src + s);
				if (*(src + s) == '\0')
					break;
			}
			break;
		}
	}
	return (dest);
}
