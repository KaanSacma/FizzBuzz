/*
** EPITECH PROJECT, 2022
** fizzbuzz
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void help_msg(void)
{
    printf("USAGE\n");
    printf("\t./fizzbuzz n1 n2\n\n");
    printf("DESCRIPTION\n");
    printf("\tn1: first number is lower than n2.\n");
    printf("\tn2: second number is bigger than n1.\n");
}

void my_putchar_err(char c)
{
    write(2, &c, 1);
}

void my_putstr_err(const char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar_err(str[i]);
}

void fizzbuzz(int nbr1, int nbr2)
{
    for (int i = nbr1; i <= nbr2; i += 1) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}

int main(int ac, char **av)
{
    int nbr1 = 0;
    int nbr2 = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help_msg();
        return 0;
    }
    if (ac < 3 || ac > 3)
        return 84;
    if (av[1][0] < '0' || av[1][0] > '9')
        return 84;
    if (av[2][0] < '0' || av[2][0] > '9')
        return 84;
    nbr1 = atoi(av[1]);
    nbr2 = atoi(av[2]);
    if (nbr2 < nbr1) {
        my_putstr_err("Error: the second parameter must be greater than the first one.\n");
        return 84;
    }
    fizzbuzz(nbr1, nbr2);
    return 0;
}
