#include <iostream>
using namespace std;
class Calculator{
    public:
    int calculate(int a, int b){
        return a+b;
    }
    int calculate(int a, int b, int c){
        return a+b+c;
    }
    double calculate(double a, double b){
        return a+b;
    }
};
int main(){
    Calculator calc;
    int int1, int2;
    cout<<"Enter two integers:";
    cin>>int1>>int2;
    cout<<"Sum of two integers: "<<calc.calculate(int1,int2)<<endl;
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three integers: " << calc.calculate(num1, num2, num3) << endl;
    double float1, float2;
    cout << "Enter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Sum of two floating-point numbers: " << calc.calculate(float1, float2) << endl;

    return 0;
}