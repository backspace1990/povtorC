#include<stdio.h>

int main(int argc,char **argv)
{
    int i;
    for(i=0; i<argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}
/*
ga-i5% gcc or1.c 
ga-i5% ./a.out adim umit asan
./a.out
adim
umit
asan
ga-i5% 
*/