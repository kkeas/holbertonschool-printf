#include "main.h"

/**
 * _putchar - writes char c
 * @c: the char to print
 *
 * Return: 1 if success, -1 if error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_c - prints char to stdout
 *@c: char to print
 *Return: # of chars printed
 */
int print_c(va_list c)
{
	unsigned int count = 0;

	if (!count)
	{
		return (0);
	}
	_putchar((char)va_arg(count, int));
	count++;

	return (count);
}/**
  * print_s - prints strings
  * @s: string to print
  * Return: number of characters printed
  */
int print_s(va_list s)
{
	unsigned int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
		_putchar(str[count]);
	return (count);
}
/**
 * print_di - print int/d to std out
 * @di: int/d to print
 * Return: length
 */

int print_di(va_list di)
{
	int count = 0, x = 0;
	int v = va_arg(di, int), divide = 1;
	char intm[11] = {"-2147483648"};

	if (v == int_m)
	{
		for (x = 0; x <= 10; x++)
		{
			_putchar(intm[x]);
			count++;
		}
		return (count);
	}
	if (val < 0)
	{
		_putchar('-');
		val = -val;
		count++;
	}

	while ((val / divide) >= 10)
	{
		divide *= 10;
	}

	while (divide >= 1)
	{
		_putchar((val / divide) + '0');
		val = val % divide;
		divide /= 10;
		count++;
	}
	return (count);
}
