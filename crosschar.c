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
//  a u
// r   l
// The above is the proper cross manner for the test case,
// but when printed in a single line it becomes as shown in the output.

#include <string.h>
#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test > 0)
    {
        char str_v[100];
        scanf("%s", str_v);
        int lng = strlen(str_v), i = 0, j = 0;
        int x = 0, y = lng - 1;
        while (x < y)
        {
            for (i = 0; i < lng; i++)
            {
                if (i == x || i == y)
                {
                    printf("%c", str_v[i]);
                }
                else
                {
                    printf(" ");
                }
            }
            x++;
            y--;
            
            printf("\n");
            
            if (x == y)
            {
                for (i = 0; i < lng; i++)
                {
                    if (i == x)
                    {
                        printf("%c", str_v[i]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        // 2nd stage
        while (x >= 0)
        {
            x--;
            y++;
            for (i = 0; i < lng; i++)
            {
                if (i == x || i == y)
                {
                    printf("%c", str_v[i]);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        test--;
        //printf("\n");
    }
    return 0;
}