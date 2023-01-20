/*
** EPITECH PROJECT, 2023
** solo stumper
** File description:
** anagram
*/

#include "anagram.h"

int main(int argc, char **argv)
{
    int exit_status = 0;
    int size_1 = 0;
    int size_2 = 0;

    if (argc < 3){
        write(1,"Error : not enough arguments.",29);
        return 84;
    }
    if (argc > 3){
        return 84;
    }
    if (argv[1] == NULL || argv[2] == NULL){
        write(1,"Error : not enough arguments.",29);
        return 84;
    }
    size_1 = my_strlen(argv[1]);
    size_2 = my_strlen(argv[2]);
    exit_status = anagram(argv[1],argv[2],size_1,size_2);
    return exit_status;
}

int my_strlen(char * str)
{
    int size = 0;

    while (str[size] != '\0')
        size++;
    return size;
}
