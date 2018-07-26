int main(int ac, char **av) {
    int i(0);
 
    while (av[i]) {
        std::cout << "-> " << av[i++] << std::endl;
    }
    return 0;
}
