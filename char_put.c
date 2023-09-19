#include "main.h"

/**
  * char_put - function that  writes a single character
  *@c: character input
  *
  *Return: interger count
  */

int char_put(char c)
{
	return (write(1, &c, 1));
}
