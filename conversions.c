#include "main.h"
/**
 *reverseString - Reverses a string
 *
 *@str: pointer to the string
 *
 *
 */
void reverseString(char *str)
{
	char temp;
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}
/**
 *intToString - Converts and integer to a string
 *
 *@num: the number to be converted
 *@buffer: pointer to an array that will contain the the converted string
 *
 */
void intToString(int num, char *buffer)
{
	int len = 0, isNegative = 0;

	if (num < 0)
	{
		num *= -1;
		isNegative = 1;
	}
	if (num == 0)
    {
        buffer[len] = '0';
        len++;
    }
	while (num > 0)
	{
		buffer[len] = (num % 10) + '0';
		len++;
		num /= 10;
	}
	if (isNegative == 1)
	{
		buffer[len] = '-';
		len++;
	}
	buffer[len] = '\0';
	reverseString(buffer);

}
