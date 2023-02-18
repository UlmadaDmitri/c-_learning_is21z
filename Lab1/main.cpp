#include <iostream>

using namespace std;

double eps = 1e-9;

struct Interval
{
    double left;
    double right;
} solutions[5];

double f(double x)
{
    return x*x*x - 7*x*x - 6*x + 42;
}

int Separation(double A, double B, double h);
double Bisection(double a, double b, int &k);

int main()
{
    int n, i; // intervals number, counter
    double A = -8, B = 4, h = 0.05;
    double x;

    cout << "Proiect nr.1 elaborat de Ulmada Dmitri"<< endl;
    n = Separation(A, B, h);
    for(i=0; i<n; i++)
    {
       cout << "O solutie separata se afla pe [" << solutions[i].left << "; " << solutions[i].right << "]" << endl;
    }
    return 0;
}

int Separation(double A, double B, double h)
{
    int n = 0;
    double x0, x;
    x0 = A;
    do
    {
        x = x0 + h;
        // if (f(x) == 0) ...
        if (f(x0) * f(x) < 0)
        {
            solutions[n].left = x0;
            solutions[n].right = x;
            n++;
        }
        x0 = x;
    } while(x<B);

    return n;
}
double Bisection(double a, double b, int &k)
{
    return 1;
}
