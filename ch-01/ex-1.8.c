#include <stdio.h>

int	main(void)
{
	int	bl;
	int	t;
	int	nl;
	int	c;

	bl = 0;
	t = 0;
	nl = 0;

	c = getchar();

	while (c != EOF)
	{
		if (c == ' ')
		{
			bl = bl + 1;
		}
		if (c == '\t')
		{
			t = t + 1;
		}
		if (c == '\n')
		{
			nl = nl + 1;
		}
		c = getchar();
	
	}
	printf("blanks: %d , tabs: %d , newlines: %d .\n", bl, t, nl);
	return (0);
}
