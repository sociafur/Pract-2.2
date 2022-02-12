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
    else if (5 < x && x < 8)
    {
        return tan(a * x);
    }
    else if(x<5)
    {
        pow(a, x);
    }
    
}
void StepAnalog(double x,double a)
{
    double Y = Step(x, a);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Y = "<<Y << std::endl;
    std::cin.get();
}
int main()
{
    std::cout << "Enter x"<<std::endl;
    std::cin >> x;
    std::cout << "Enter a" << std::endl;
    std::cin >> a;
    StepAnalog(x,a);
    std::cin.get();
}


