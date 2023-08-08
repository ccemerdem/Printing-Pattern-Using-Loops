#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int a, b, step1 = 0; // First-half's    variables
    int c, d, x, y;      //   Common        variables
    int e, f, step2 = 1; // Second-half's   variables

    scanf("%d", &a);

    c = a;
    y = a;
    x = a;

    // First Half

    for (; !(a == 0); a--)
    { // Main loop

        for (d = step1; !(d == 0); d--)
        { // Loop for first digits
            printf("%d ", c);
            --c;
        }

        c = y;
        ++step1; // Step count

        for (b = 0; !(b == 2 * a - 1); b++)
        { // Loop for digits which are repeating (middle: 3 3 3 3 3 , 2 2 2 , (2n-1))
            printf("%d ", a);
        }

        for (d = step1; !(d == 1); d--)
        { // Loop for last digits
            printf("%d ", c - (step1 - 2));
            c++;
        }

        c = y;
        printf("\n");
    }

    a = y;
    c = y;

    // Second Half

    for (; !(a == 1); a--)
    { // Main loop

        for (d = a - 1; !(d == 1); d--)
        { // Loop for first digits
            printf("%d ", c);
            --c;
        }

        c = y;
        ++step2; // Step count

        for (e = 0; !(e == 2 * step2 - 1); e++)
        { // Loop for digits which are repeating
            printf("%d ", step2);
        }

        for (x = a - 1; !(x == 1); x--)
        { // Loop for last digits
            printf("%d ", c - (a - 1) + 2);
            ++c;
        }

        c = y;
        printf("\n");
    }

    getch();
    return 0;
}
