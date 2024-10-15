#include <iostream>
//#include <stdlib.h>
#include <math.h>
#include <limits.h>
using namespace std;
//#define F(x) pow(x, 2) - x - 2

/*double F(double x)
{
    return (pow(x, 2) - x - 2);
}

main()
{
    int i = 1, count = 1;
    float xl, x2, xr, f1, f2, total, s;
    //float approxError = INT_MAX;
    //float prevRoot = INT_MAX;
    float approxError, prevRoot;

    cout << "\nEnter the value of xl: ";
    cin >> xl;
    cout << "\nEnter the value of x2: ";
    cin >> x2;
    cout << "\nEnter the number of iteration : ";
    cin >> s;

    f1 = F(xl);
    f2 = F(x2);

    total = f1 * f2;

    if (total > 0)
    {
        cout << "Invalid";
        return 0;
    }

    while(count <= s)
    {
        if (i != 1)
        {
            prevRoot = xr;
        }
        xr = ((x2 * F(xl)) - (xl * F(x2))) / (F(xl) - F(x2));

        approxError = fabs((xr - prevRoot) / xr) * 100;

        cout << "\nIteration = " << i << "\tx1 = " << xl << "\tx2 : " << x2 << "\t Xr = " << xr << "\t Error = " << (i == 1) ? 0 : approxError;

        f1 = F(xl);
        f2 = F(xr);
        total = f1 * f2;

        if (total < 0)
        {
            x2 = xr;
        }
        else if (total > 0)
        {
            xl = xr;
        }
        else
        {
            exit(0);
        }

        i++;
        count++;

    }
    cout << "\n\nThe approximation to the root is " << xr;

    return 0;
} */

//#include <stdio.h>
//#include <math.h>

int main()
{
    int deg, i, iter, j;
    float cons[10], x0, x1, fx0, fx1, a[10], x2, fx;
    printf("Enter the degree of polynomial:");
    scanf("%d", &deg); 

    for (i = deg; i >= 0; i--)
    {
        printf("Enter the cofficient of %d degree of polynomal ", i); 
        scanf("%f", &cons[i]);
    }

    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the value of x1: ");
    scanf("%f", &x1);

    printf("Enter the number of iteration ");
    scanf("%d", &iter);
    printf("\n");

    printf("Iteration  x0\t\t x1\t\t xr\t\terror\n");
    for (int n = 1; n <= iter; n++)
    {
        printf("%d\t  %f\t %f\t", n, x0, x1);
        x2 = 0, fx = 0, fx0 = 0, fx1 = 0;

        for (j = deg; j >= 0; j--)
        {
            a[j] = ((pow(x0, j)) * cons[j]);
            fx0 = fx0 + a[j];
        }

        for (j = deg; j >= 0; j--)
        {
            a[j] = ((pow(x1, j)) * cons[j]);
            fx1 = fx1 + a[j]; 
        }

        //printf("%f\t\t%f\t\t", fx0, fx1);

        x2 = ((x0 * fx1) - (x1 * fx0)) / ((fx1 - fx0)); 
        printf("%f\t", x2);

        for (j = deg; j >= 0; j--)
        {
            a[j] = ((pow(x2, j)) * cons[j]);
            fx = fx + a[j];
        }

        if (fx < 0)
        {
            x0 = x2;
        }
        else
        {
            x1 = x2;
        }

        printf("%f\n", fx);
    }
    cout << "\nThe approximation to the root is " << x2;
    return 0;
}
