#include <iostream>
using namespace std;

int main(){
    cout << "Namaste Duniya"<< endl;
    int a=123;
    char b ='v';
    bool bl = true;
    float f = 1.2344;
    double d = 1.232342;

    cout<< a <<endl;
    cout<< b <<endl;
    cout<< bl <<endl;
    cout<< f <<endl;
    cout<< d <<endl;
   
   int size = sizeof(d);
   cout<< "size of d : "<<size<<endl;

   //Typecasting
 
   int c1 = 'c';
   cout<< c1 << endl; //ASCII value of c

   char c2 = 97;
   cout<< c2 << endl;

   char c3 = 123456;
   cout<< c3 << endl;//The content in the LSB of binary value of 123456 will be displayed

   unsigned int x= 112;//only positive numbers
   cout <<x<<endl;

   unsigned int y=-112;//will treat the MSB also as a +ve number so a larger value will be printed
   cout<<y<<endl;

// Use of Relational operators
int m=2;
int n=3;

bool fst= (m==n);
cout<< fst<<endl;

bool sec= (m<n);
cout<< sec<<endl;

bool th= (m>=n);
cout<< th<<endl;

bool fth= (m<=n);
cout<< fth<<endl;

bool fv= (m!=n);
cout<< fv<<endl;

bool six= (m>n);
cout<< six<<endl;

}