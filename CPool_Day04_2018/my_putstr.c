/*
** EPITECH PROJECT, 2018
** Day04
** File description:
** task02
*/
int    my_putstr(char const *str)
{
    int    counter = 0;

    while (str[counter] != '\0') {
	my_putchar(str[counter]);
	counter = counter + 1;
    }
}
