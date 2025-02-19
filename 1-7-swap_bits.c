#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet <<  4));
}
/*
void print_bits(unsigned char octet)
{
    int i = 7;

    while (i >= 0)
    {
        if ((octet >> i) & 1)  // Correct way to check the i-th bit
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main()
{
    unsigned char c = 'A';
    unsigned char nc = swap_bits(c);

    print_bits(c);
    write(1, "\n", 1);
    print_bits(nc);
    return 0;
}*/