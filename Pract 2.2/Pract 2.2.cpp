// Pract 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <iomanip>
double x;
double a;
double Step(double x,double a)
{
    if(x > 8 )
    {
        return 1 / (pow(2, x + a));
    }
    if (5 < x && x < 8)
    {
        return tan(a * x);
    }
    else
    {
        pow(a, x);
    }
    
}
void StepAnalog(double x,double a)
{
    double result = Step(x, a);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << result << std::endl;
    std::cin.get();
}
int main()
{
    StepAnalog(6,2);
}


