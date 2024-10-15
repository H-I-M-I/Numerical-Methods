#include <iostream>
#include <math.h>

using namespace std;

double F(double x)
{
    return (pow(x, 2) - 4 * x - 10);
}

int main()
{
    double x3, x2;

    cout << "\nEnter the first approximation to the root :  ";
    cin >> x3;

    cout << "\n\nEnter the second approximation to the root :   ";
    cin >> x2;

    int iter;
    cout << "\n\nEnter the number of iteration you want to perform :   ";
    cin >> iter;

    int count = 1;
    double a = x3;
    double b = x2;
    double x0, f0, f1, f2, e;

    /*if (F(a) == 0)
    {
        x0 = a;
    }
    else if (F(b) == 0)
    {
        x0 = b;
    }*/

if (F(x3) * F(x2) > 0)
{
    cout << "Does not bracket any root ";
}
else
{
    while (count <= iter)
    {
        f1 = F(a);
        f2 = F(b);

        x0 = (a + b) / 2.0;
        f0 = F(x0);

        if (f0 == 0)
        {
            x0 = f0;
            break;
        }
        cout << "Iteration : " << count << "\tx3 : " << a << "\tx2 : " << b << "\txr : " << x0 << endl;

        if (f1 * f0 < 0)
        {
            b = x0;
        }
        else if (f1 * f0 > 0)
        {
            a = x0;
        }
        count++;

    }
}

cout << "\n\nThe approximation to the root is " << x0;

return 0;
} 

