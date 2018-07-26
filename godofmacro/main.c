#include <unistd.h>

void ft_write_pouet(void)
{
	write(1, "pouet", 5)'
}

void ft_space(void)
{
	write(1, " ", 1);

}

void ft_endline(void)
{
	write(1, "\n", 1);
}

int main(void)
{
	ft_write_pouet();
	ft_space();
	ft_write_pouet();
	ft_endline();

	return (0);
}
