/*
** EPITECH PROJECT, 2023
** solo stumper
** File description:
** anagram
*/

#include "anagram.h"

int anagram(char *str_1, char *str_2, int size_1, int size_2)
{
    long hash_1 = get_hash(str_1,size_1);
    long hash_2 = get_hash(str_2,size_2);
    if (size_1 != size_2)
        write(1,"no anagrams.\n",13);
    else {
        if (hash_1 == hash_2)
            write(1,"anagram!\n",9);
        else
            write(1,"no anagrams.\n",13);
    }
    return 0;
}

long get_hash(char *str, int size)
{
    int i = 0;
    long hash = 0;

    while (str[i] != 0) {
        hash += (((un_case(str[i]) )*(un_case(str[i]) ))* size);
        i++;
    }
    return hash;
}

int un_case(char c)
{
    if (c >= 65 && c <= 90)
        return c + 32;
    return c;
}
