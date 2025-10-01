#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
int Calculator::Dontcalculate (double a, double b)
{
    return "It's don't calculate XD";
}

int Calculator::Dontcalulate_2 (double a, double b)
{
    return "It's not even funny anymore :(";
}
