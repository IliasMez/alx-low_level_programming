/**
 * _islower - check if char is lowercase
 * @ch : var
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
