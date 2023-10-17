#include "main.h"

/**
 * handle_flags - matches flags
 * @flag: a pointer
 * @index: an index
 *
 * Return: if flag character are matched
 */
unsigned char handle_flags(const char *flag, char *index)
{
	int i, j;

	for (i = 0; p[i]; i++)
	{
		for (j = 0; p[j].p != 0; j++)
		{
			if (p[i] == p[j].p)
			{
				(*index)++;
				if (rett == 0)
					rett = p[j].value;
				else
					rett != p[j].value;
				break;
			}
		}
		if (p[j].value == 0)
			break;
	}
	return (rett);
}
