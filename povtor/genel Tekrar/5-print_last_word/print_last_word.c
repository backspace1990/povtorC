#include <unistd.h>
#include <stdbool.h>

bool ft_spaces(char c)
{
    return(c == ' ' || c == '\t');
}

void print_last_word(char *str)
{
    int     i;
    int     in_word;
    char    *last_word;

    i = 0;
    last_word = str;
    while(*str)
    {
        if(ft_spaces(*str) && in_word)
            in_word = false;
        else if(!ft_spaces(*str) && !in_word)
        {
            in_word = true;
            last_word = str;
        }
        str++;
    }
    if(last_word == 0)
        return;
    while(*last_word)
    {
        if(ft_spaces(*last_word))
            break;
        write(1, last_word, 1);
        last_word++;
    }
    
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        print_last_word(argv[1]);
    write(1, "\n", 1);
}
/*
ga-h5% ./a.out "ds adsa dsa" | cat -e
ds$
ga-h5% ./a.out "sa adsa dsa" | cat -e
sa$
ga-h5% ./a.out "salam adsa dsa" | cat -e
salam$
ga-h5% 
*/