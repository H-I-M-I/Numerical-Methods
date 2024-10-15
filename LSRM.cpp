#include <iostream>

using namespace std;

int main()
{
    int n;
    float x[100], y[100];
    cout << "Calculates the best fit value using least square method in y=a+bx.\n";
    cout << "\nEnter number of data pairs:\n";
    cin >> n;
    cout << "\n\nEnter value pair:\n"
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "      Data " << i + 1 << " :\n";
        cout << "x: ";
        cin >> x[i];
        cout << "y: ";
        cin >> y[i];
    }
    cout << "\n\nData input completed.\n The value table: " << endl;
    cout << "\n\nx   y\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << "   " << y[i] << endl;
    }

    float sumy = 0, sumx = 0, sumxy = 0, sumxx = 0;
    //cout << " x\ty\txy\tx^2" << endl;
    for (int i = 0; i < n; i++)
    {
        sumy += y[i];
        sumx += x[i];
        sumxy += y[i] * x[i];
        sumxx += x[i] * x[i];
        //cout << sumx <<"\t"<<sumy<<"\t"<<sumxy<<"\t"<<sumxx<<endl;
    }
    cout << "\n\nThe calculated value of sumx, sumy, sumxy, sumxx is : " << sumx << ","
         << sumy << "," << sumxy << " and " << sumxx << "." << endl;
    float a = (sumx * sumxy - sumy * sumxx) / (sumx * sumx - n * sumxx);
    float b = (sumy * sumx - n * sumxy) / (sumx * sumx - n * sumxx);

    cout << "\n\nThe calculated value of a and b is : " << a << " and " << b << "." << endl;
    cout << "\n\nThe best fit value of curve is : y = " << a << " + " << b << "x.\n\n"
         << endl;
}