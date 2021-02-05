#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
double celcius;
double fahrenheit;
double a1,a2,a3;
double b1,b2,b3;
cout << "Enter 3 Celcius : "<< endl;
cin>> a1 >> a2 >> a3;
cout << "Enter 3 Fahrenheit : "<< endl;
cin>> b1 >> b2 >> b3;
double fa1 = (9.0/5)*a1+32;
double fa2 = (9.0/5)*a2+32;
double fa3 = (9.0/5)*a3+32;
double cb1 = (b1-32)*5/9;
double cb2 = (b2-32)*5/9;
double cb3 = (b3-32)*5/9;
cout << "Celcius Fahrenheit | Fahrenheit Celcius" <<endl;
cout<<" "<<a1<<" "<<fa1<<" | "<<b1<<" "<<cb1<<endl;
cout<<" "<<a2<<" "<<fa2<<" | "<<b2<<" "<<cb2<<endl;
cout<<" "<<a3<<" "<<fa3<<" | "<<b3<<" "<<cb3<<endl;
return 0;
}

