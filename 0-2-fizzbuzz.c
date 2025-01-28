#include <unistd.h>

void print_small_int(int c)
{
	if (c > 9)
		print_small_int(c % 10);
	write (1, c, 1);
}

int main(void)
{
	int a;

	a = 0;
	while (a <= 100)
		{
				if (a % 5 = 0)
						write(1, "buzz", 5);
				else if (a % 3 = 0)
						write(1, "fuzz", 5);
				else if (a % 3 = 0 && a % 5 = 0)
						write(1, "fizzbuzz", 9);
				else
						print_small_int(a);
		}
	return (0);
}
