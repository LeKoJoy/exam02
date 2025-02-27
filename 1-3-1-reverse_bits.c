#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    char newc = '\0';
    while(i <= 7)
    {
        newc <<= 1;
        newc |= octet & 1;
        i++;
        octet = octet >> 1;
    }
    return newc;
}
/*
void print_bits(int oc)
{
    int i = 0;
    while(i<=7)
    {
        if((oc >> i) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i++;
    }
}

*/

void print_bits(int oc)
{
    int i = 7;
    while(i>= 0)
    {
        if((oc >> i) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main(void)
{
    print_bits('A');
    write(1, "\n", 1);
    print_bits(reverse_bits('A'));
    return 0;
}