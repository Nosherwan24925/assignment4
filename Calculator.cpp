#include<iostream>
using namespace std;


class Calculator
{

private:

float  num1;
float num2;

public:

Calculator(float n1,float n2);

void display_sum();
void display_subtration();
void display_multiply();
void display_divide();

float get_sum();
float get_divide();
float get_multiply();


};

Calculator::Calculator(float n1,float n2)
{
    num1=n1;
    num1=n2;
}

void Calculator::display_sum()
{
    cout<<"Sum ="<<num1+num2<<endl;
    cout<<endl;
}


void Calculator::display_multiply()()
{
    cout<<"Sum ="<<num1*num2<<endl;
    cout<<endl;
}
void Calculator::display_subtration()()
{
    cout<<"Sum ="<<num1-num2<<endl;
    cout<<endl;
}
void Calculator::display_divide()()
{
    cout<<"Divide ="<<num1/num2<<endl;
    cout<<endl;
}


int main()
{
return 0;
}
