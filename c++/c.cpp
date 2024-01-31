#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
/******************************************************************************

 * 							shallow copy

*******************************************************************************/
/*
class A{
	int a,b;
	public : void show(int x,int y){
		a=x;
		b=y;

	}
	void put(){
		cout<<a,b;
	}
};
    int main(){
	A obj1;
	obj1.show(5,10);
	A obj2;
	obj2=obj1;
	obj1.show(20,30);
}
*/
/******************************************************************************

 * 							Deep Copy

*******************************************************************************/
/*
class A
{
	int a;
	int *b;
	public:
	A()
	{
		b=new int;
	}
	void show (int x, int y){
		a=x;
		*b=y;
	}
	void put (){
		cout << a << " " <<*b;
	}
	A(A& sample){
		a=sample.a;
		b=new int;
		*b=*(sample.b);
	}
};
int main(){
	A obj1;
	obj1.show(5,10);
	A obj2;
// 	obj2 = obj1;
	obj2=obj1; //copy obj1 in obj2
obj2.put();
}
*/
/******************************************************************************

 * 							function pointer        

*******************************************************************************/
/*
syntax= data_type (*function-pointer_name)(argument)
	=int (*p)(int,int)
int a=10;
int *p;
p=&a;
*/
/*
int sum (int,int){
	return x+y;
}
main(){
	int (*fp)(int,int)
	fp=sum;
	cout<<fp(5,10)
}
*/
/*
int sum (int,int){
	return x+y;
}
int print(int(*p)(int,int)){
	int d=10+p(10,15);
	return d;
}
main(){
	cout<<print(sum);
}
*/
/******************************************************************************

 * 							Complex Number      

*******************************************************************************/
/*
class Complex
{
  private:
   int real, imag;
  public:
   Complex(int r=0, int i=0)
   {
     real = r;
     imag = i;
   }
  void display(){
    cout<<real<<"+"<<imag<<"i";
  }
  Complex operator+(Complex& ob1)
  {
    Complex temp;
    temp.real = real+ob1.real;
    temp.imag = imag+ob1.imag;
    return temp;
  }
   Complex operator-(Complex& ob1)
  {
    Complex temp;
    temp.real = real-ob1.real;
    temp.imag = imag-ob1.imag;
    return temp;
  }
};
int main()
{
  int r,i;
  cin>>r>>i;
  Complex D1(r,i);
  cin>>r>>i;
  Complex D2(r,i);
  Complex D3,D4;
  D3=D1+D2;
  D4=D1-D2;
  D3.display();
  cout<<endl;
  D4.display();
  return 0;
}
*/
/******************************************************************************

 * 							Distance Calculator 

*******************************************************************************/
/*

*/




