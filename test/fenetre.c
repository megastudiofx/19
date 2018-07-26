#include <unistd.h>
#include <mlx.h>

int main (int ac, char **av)
{
    void *mlx;
    void *win;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 420, 420, "42");
    sleep(5);
    return(0);
}
