#include <iostream>
using namespace std;

class demo{
    int data;
    friend void operator-(demo &);
    public:
    demo(int d){
        data = d;
    }
    void show(){
        cout<<"\nValue = "<<data;
    }
};

void operator -(demo &D){
    D.data = -D.data;
}

int main(){
    demo ob(10);
    ob.show();
    -ob; // unary minus operator overloaded 
    ob.show();
    return 0;
}