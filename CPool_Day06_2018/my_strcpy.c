/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int counter = 0;

    while (src[counter] != '\0') {
        dest[counter] = src[counter];
        counter ++;
    }
    dest[counter] = src[counter];
    return (dest);
}
