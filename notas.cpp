// ex06_complex_numbers_class.cpp
#include <iostream>
using namespace std;
class Complex{
public:
    double r,i;
    Complex(double _r=0,double _i=0):r(_r),i(_i){}
    Complex operator+(const Complex& o)const{return Complex(r+o.r,i+o.i);}
    Complex operator*(const Complex& o)const{return Complex(r*o.r - i*o.i, r*o.i + i*o.r);}
    void show()const{ cout<<r<<(i>=0?"+":"")<<i<<"i\n"; }
};
int main(){
    Complex a,b;
    cout<<"a (re imag): "; cin>>a.r>>a.i;
    cout<<"b (re imag): "; cin>>b.r>>b.i;
    cout<<"a+b = "; (a+b).show();
    cout<<"a*b = "; (a*b).show();
}
