/*
** EPITECH PROJECT, 2018
** Day07
** File description:
** task03
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int size2 = 0;
    int counter = 0;

    size2 = my_strlen(dest);
    while (counter < nb) {
        dest[size2] = src[counter];
        counter++;
        size2++;
    }
    return (dest);
}
