/**
** * EPITECH PROJECT, 2023
** clean_str
** File description:
** basic function
*/

#include "clean_str.h"

int clean_str(int argc, char **argv)
{
    int size = 0;

    while (argv[1][size] != '\0') {
        size++;
    }
    clean_space(argv[1],size);

}

void clean_space(char *tab, int size)
{
    int i = 0;
    while (i < size) {
        if (tab[i] == 32 && i == 0){
            i++;
        }
        while(tab[i] == 32 && tab[i-1] == 32){
          i++;
        }
        if(tab[i] == 32 && tab[i+1] == '\0'){
            i++;
        }
        if (tab[i] == '\t' && i == 0){
            i++;
        }
        while(tab[i] == '\t' && tab[i+1] == '\t'){
          i++;
          write(1," ",1);
          i++;
        }
        if(tab[i] == ' ' && tab[i+1] == '\t'){
          i++;
          write(1," ",1);
        }
        if(tab[i] == '\t' && tab[i+1] == '\0'){
            i++;
        }
        write(1,&tab[i],1);
        i++;
    }
    write(1,"\n",1);
}
