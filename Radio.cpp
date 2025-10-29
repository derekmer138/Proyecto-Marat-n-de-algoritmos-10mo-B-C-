#include <iostream>
#include <cmath>
using namespace std;
float area(float r){ return M_PI*r*r; }
int main(){
    float radio;
    cin>>radio;
    cout<<"Area = "<<area(radio);
}
