/*
Write a program to print a table of values of the function
y=e^(-x)
for x varying from 0 to 10 in steps of 0.1.
The table should be as follows.

X     0.00   0.10   0.20   0.30   0.40   0.50   0.60   0.70   0.80   0.90

0.0   1.00   0.90   0.82   0.74   0.67   0.61   0.55   0.50   0.45   0.41
1.0   0.37   0.33   0.30   0.27   0.25   0.22   0.20   0.18   0.17   0.15
2.0   0.14   0.12   0.11   0.10   0.09   0.08   0.07   0.07   0.06   0.06
3.0   0.05   0.05   0.04   0.04   0.03   0.03   0.03   0.02   0.02   0.02
4.0   0.02   0.02   0.01   0.01   0.01   0.01   0.01   0.01   0.01   0.01
5.0   0.01   0.01   0.01   0.00   0.00   0.00   0.00   0.00   0.00   0.00
6.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
7.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
8.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
9.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
*/

#include <iostream>
#include <cmath>

#define E 2.7182

using namespace std;

int main()
{
    double x;
    printf("%-6s%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf%-7.2lf\n\n", "X", 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9);
    for (double i = 0.0; i < 9.1; i += 1.0)
    {
        printf("%-6.1lf", i);
        for (double j = 0.0; j < 0.91; j += 0.1)
        {
            x = i + j;
            printf("%-7.2lf", pow(E, -x));
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT

X     0.00   0.10   0.20   0.30   0.40   0.50   0.60   0.70   0.80   0.90

0.0   1.00   0.90   0.82   0.74   0.67   0.61   0.55   0.50   0.45   0.41
1.0   0.37   0.33   0.30   0.27   0.25   0.22   0.20   0.18   0.17   0.15
2.0   0.14   0.12   0.11   0.10   0.09   0.08   0.07   0.07   0.06   0.06
3.0   0.05   0.05   0.04   0.04   0.03   0.03   0.03   0.02   0.02   0.02
4.0   0.02   0.02   0.01   0.01   0.01   0.01   0.01   0.01   0.01   0.01
5.0   0.01   0.01   0.01   0.00   0.00   0.00   0.00   0.00   0.00   0.00
6.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
7.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
8.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
9.0   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00   0.00
*/