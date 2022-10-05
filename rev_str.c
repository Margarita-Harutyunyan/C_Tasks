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
        int start, end, count, i;
        char*  res;
        char tmp;

        start = 0;
        end = getsize(s);
        count = 0;

        while (count != (end / 2)) {
                tmp = s[start];
                s[start] = s[end];
                s[end] = tmp;
                ++count;
                ++ start;
                --end;
        }

        for (i = 0; i < getsize(s); i ++) {
                res[i] = printf("%c", s[i]);
        }
        return res;
}

int main()
{
        char str[] = "hello";
        char* rev = strev(str);
        printf("%s\n", rev);

        return 0;
}
