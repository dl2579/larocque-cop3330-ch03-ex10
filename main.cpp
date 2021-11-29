#include "std_lib_facilities.h"

using namespace std;

int main()
{
    string operation;
    double a;
    double b;

    cout << "Enter an operation followed by two operands: ";
    cin >> operation >> a >> b;

    Calculator c;
    cout << c.Calculate(operation, a, b) << endl;

    return 0;

}

double Calculator::Calculate(std::string operation, double a, double b)
{
    if(operation=="+"){
        return a + b;
    }

    else if(operation=="-"){
        return a - b;
    }

    else if (operation=="*"){
        return a * b;
    }

    else if (operation=="/"){
        return a / b;
    }

    return -1.0;
}


