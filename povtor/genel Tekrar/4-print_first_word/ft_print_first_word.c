#include <unistd.h>
#include <stdbool.h>

bool ft_spaces(char c)
{
    return(c == ' ' || c == '\t');
}

void print_first_word(char *str)
{
    int     i;
    int     of_set;
    char    *first_word;

    i = 0;
    first_word = str;
    while(ft_spaces(str[i]))
        i++;
    of_set = i;
    while(true)
    {
        if(str[i] == '\0')
            break;
        if(ft_spaces(str[i]))
            break;
        i++;
    }
    if(first_word !=0)
        write(1, first_word + of_set, i - of_set);
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        print_first_word(argv[1]);
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