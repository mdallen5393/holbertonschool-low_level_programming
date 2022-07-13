/**
 * myPow - calc a to the power b
 * @a: number
 * @b: power
 * Return: answer
 */
unsigned int myPow(unsigned int a, unsigned int b)
{
	unsigned int num = a, i = 1;

	if (b == 0)
		return (1);

	while (i < b)
	{
		num *= a;
		i++;
	}

	return (num);
}
