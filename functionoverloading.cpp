#include <iostream>
using namespace std;
//function declaration
int add(int a, int b); //prototype 1
int add (int a, int b, int c); //prototype 2
double add(double x, double y); //prototype 3
double add(double p , double q); //prototype 4
int add(int a, int b)
{
    int c = a+b;
    return c;
}
int add (int a, int b, int c)
{
    int d = a+b+c;
    return d;
}
double add(double x, double y)
{
    double d = x+y;
    return d;
}
double addd(double p , double q)
{
    double r = p+q;
    return r;
}

int main()
{
    //function call
 cout<<add(5,10); //uses prototype 1
 cout<<add(15,10.0,0); //uses prototype 4
 cout<<add(12.5,7.5); //uses prototype 3
 cout<<add(5,10,15); //uses prototype 2
 cout<<add(0.75,5.0); //uses prototype 5

    return 0;
}
