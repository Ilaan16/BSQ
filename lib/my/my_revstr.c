/*
** EPITECH PROJECT, 2018
** MY_REVSTR
** File description:
** Reverse a string
*/
int my_strlen(char *str);

char *my_revstr(char *str)
{
    int total_counter = my_strlen(str);
    int i;
    int end = total_counter - 1;
    char *temp;

    temp = malloc(sizeof(char) * total_counter);
    for (i = 0; i < total_counter; i++) {
        temp[i] = str[end];
        end--;
    }
    temp[i] = '\0';
    for (i = 0; temp[i] != '\0'; i++) {
        str[i] = temp[i];
    }
    return (str);
}
