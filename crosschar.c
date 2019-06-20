// Convert a given string to its cross string (i.e Diagonal from left-right and from right-left).

// Input:
// The first line of input contains a single integer T denoting the number of test cases.
// Then T test cases follow. Each test case consist of two lines.
// The first line of each test case consists of a String in lower case.

// ex:
// Input
// 2
// rahul

// Output
// r   l a u   h   a u r   l

// Explanation:
// r   l
//  a u
//   h
//  a h
// r   l
// The above is the proper cross manner for the test case,
// but when printed in a single line it becomes as shown in the output.

#include <string.h>
#include <stdio.h>
int main()
{
    int tt;
    scanf("%d", &tt);
    while (tt > 0)
    {
        char str[50];
        scanf("%s", str);
        int len = strlen(str), i = 0, j = 0;
        int x = 0, y = len - 1;
        while (x < y)
        {
            for (i = 0; i < len; i++)
            {
                if (i == x || i == y)
                {
                    printf("%c", str[i]);
                }
                else
                {
                    printf(" ");
                }
            }
            x++;
            y--;
            // printf("\n");
            if (x == y)
            {
                for (i = 0; i < len; i++)
                {
                    if (i == x)
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                // printf("\n");
            }
        }
        while (x >= 0)
        {
            x--;
            y++;
            for (i = 0; i < len; i++)
            {
                if (i == x || i == y)
                {
                    printf("%c", str[i]);
                }
                else
                {
                    printf(" ");
                }
            }
        }

        tt--;
        printf("\n");
    }
    return 0;
}