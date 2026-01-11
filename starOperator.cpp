#include <iostream>
using namespace std;

class demo{
    int data;
    friend void operator*(demo &);
public:
    demo(int d){
        data = d;
    }
    void show(){
        cout<<"\nValue = "<<data;
    }
};

void operator*(demo &D){
    D.data *= D.data;
}
int main(){
    demo D1(10);
    cout<<"\nBefore unary * operator ";
    D1.show();
    *D1; // unary * operator called
    cout<<"\nAfter unary * operator ";
    D1.show();
    return 0;
}