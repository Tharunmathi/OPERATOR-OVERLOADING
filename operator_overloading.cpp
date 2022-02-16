# include <iostream>
using namespace std;
/*class Complex{
    private:
    int real,imag;
    public:
   Complex(){
         real = 0;
         imag  = 0;
     }
     Complex(int r,int c){
         real = r;
         imag  = c;
     }
     void print(){
         cout<<real<<"+"<<imag<<"i"<<endl;  
     }
     Complex operator +(Complex c){
         Complex temp;
         temp.real = real+c.real;
         temp.imag = imag +c.imag;
         return temp;
     }
};
int main(){
    Complex c1(5,4);
    Complex c2(3,5);
    Complex c3;
    c3 = c1+c2;
    c3.print();
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Fraction
{
private:
	int num, den;
public:
	Fraction(int n, int d) { num = n; den = d; }

	// Conversion operator: return float value of fraction
	operator float() const {
		return float(num) / float(den);
	}
};

int main() {
	Fraction f(2, 5);
	float val = f;
	cout << val << '\n';
	return 0;
}*/
//////////////////////////////"UNARY OPERATOR OVERLOADING"//////////////////////////////////////////
/*class Weight{
    private:
    int kg;
    public:
    Weight(){
        kg = 0;
    }
    Weight(int x){
        kg = x;

    }
    void printWeight(){
        cout<<"WEIGHT IN KG:"<<kg<<endl;
    }
    void operator ++(){
        ++kg;
    }
    void operator ++(int ){
        kg++;
    }
    void operator --(){
        --kg;
    }
    void operator --(int ){
        kg--;
    }
};
int main(){
    Weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();
    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();
    return 0;

}*/
class demo{
    int x,y,z; 
public:
void getdata (int a, int b,int c){
          x=a;
          y=b;  
          z=c;
}
void display(){

cout<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<endl;
}
void operator -()
{
     x=-x;
     y=-y;
     z=-z;
}
};
int main()
{
          demo obj1;
         obj1.getdata(10,20,30);  
         obj1.display();
          -obj1;  
          obj1.display();  
       return 0;
}
