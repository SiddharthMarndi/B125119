#include <iostream>
using namespace std;
class Compare{
    public:
    int comp(int a, int b){
        if (a>=b){
            return a;
        }
        else{
            return b;
        }
    }
    int comp(int a, int b, int c){
        if(a>=-b &&a>=c){
            return a;
        }
        else if(b>=a && b>=c){
            return b;
        }
        else{
            return c;
        }
    }
    double comp(double a, double b){
        if (a>=b){
            return a;
        }
        else{
            return b;
        }
    }
};

int main(){
    Compare c;
    int int1, int2;
    cout<<"Enter two integers:";
    cin>>int1>>int2;
    cout<<"Greatest of two is: "<<c.comp(int1,int2)<<endl;
    double float1, float2;
    cout << "Enter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Greatest of two is: " <<c.comp(float1, float2) << endl;
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Greatest of three is: " <<c.comp(num1, num2, num3) << endl;
    return 0;
}