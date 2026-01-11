#include <iostream>
using namespace std;

class complex{
    float x,y;
    public:
        complex(){ }
        complex(float real,float imag){
            x = real; y = imag;
        }
        // complex operator+(complex);//case 1 ke liye
        complex operator*(complex);
        void display(void);

};

// complex complex:: operator+(complex c)//case 1 ke liye
complex complex:: operator*(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex :: display(void){
    cout<<x<<" + "<<y<<"i"<<"\n";
}

int main(){
    complex c1,c2,c3;
    c1 = complex(2.5,8);
    c2  = complex(1.6,9);
    // c3 = c1+c2;//yaha par vahi operator lagega jo uppar function me lagaya hai 
    c3 = c1*c2;

    cout<<"C1 = ";
    c1.display();
    cout<<"C2 = ";
    c2.display();
    cout<<"C3 = ";
    c3.display();
    return 0;
}