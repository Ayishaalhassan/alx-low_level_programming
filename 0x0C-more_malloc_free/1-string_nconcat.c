#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - ..
 * @s1: ..
 * @s2: ..
 * @n: ..
 * Return: ..
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int concat_len = 0;
	char *concatenated_str;
	unsigned int i, j;

	if (s1 == NULL)

		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;
	concatenated_str = (char *)malloc((concat_len + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated_str[i++] = s2[j];
	concatenated_str[i] = '\0';
	return (concatenated_str);
}
