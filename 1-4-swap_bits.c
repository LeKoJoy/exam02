#include <stdio.h>
#include <unistd.h>

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

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

int main(/*int argc, char **argv*/)
{
    unsigned char octet = 65; // ASCII 65 -> 01000001
    unsigned char newc = swap_bits(octet);
  //  int i = 7;
    
    print_bits(newc);
    write(1, "\n", 1); // Print newline for readability
    return 0;
}