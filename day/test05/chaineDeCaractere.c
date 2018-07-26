#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
/* Prends en paramètre notre chaine de caractère>
Elle itère sur chacun des elements du tableau de char, pour les afficher. Commet elle affiche ? elle appelle putchar !*/
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]); // appel de putchar avc la chaine de caractère
		index++;
	}
}

int main (void)
{
	char str1[] = "Hello";
	char str2[] = "Salut salut salut salut je suis une chaine de caractère !";
	char str3[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla sollicitudin blandit ligula, eu commodo tortor imperdiet a. Donec at est ut ex faucibus pellentesque at ac massa. Nam ante nisl, semper at molestie eget, aliquet eu lectus. In posuere luctus efficitur. Aliquam eu dui vulputate eros fringilla dapibus sed interdum tortor. Ut gravida, massa id convallis tempus, purus tortor vehicula ligula, sit amet ultrices ex diam et magna. Nullam a molestie eros. Etiam vehicula rutrum arcu, vel viverra risus mattis sit amet. In interdum semper leo, sit amet porta odio faucibus efficitur. Aliquam a ante diam.";

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(str3);
	ft_putchar('\n');
	return(0);
}
