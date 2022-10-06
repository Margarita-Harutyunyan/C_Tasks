#include <stdio.h>

int getsize(char* s)
{
        int count = 0;
        while (*s != '\0') {
                ++count;
                ++s;
        }
        return count;
}

char* strev(char* s)
{
        int length;
        char* res;

        length = getsize(s) - 1;

        while (length >= 0) {

                 printf("%c", s[length]);
                --length;

        }
}

int main()
{
        char str[] = "hello";
        char* res = strev(str);
        printf("%s", res);
        printf("\n");
        return 0;
}
