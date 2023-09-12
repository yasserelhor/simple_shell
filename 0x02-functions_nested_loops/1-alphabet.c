#include "main.h"





int main(void)
{
        char str[] = "abcdefghijklmnopqrstuvwxyz";

        int ch;

        for (ch = 0; ch < 26; ch++)
                _putchar(str[ch]);
        putchar('\n');
        return (0);
}
