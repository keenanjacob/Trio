#include <iostream>
using namespace std;

void rearrangeValues(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
  rearrangeValues(red, green, blue);





  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void rearrangeValues(int & a, int & b, int & c)
{
 int largest;
 int middle;
 int smallest;

 if(a>=b && a>=c && b>=c)
 {
   largest=a;
   middle=b;
   smallest=c;
 }
 else if(a>=b && a>=c && c>=b )
 {
   largest=a;
   middle=c;
   smallest=b;
 }
 else if(b>=a && b>=c && c>=a)
 {
   largest=b;
   middle=c;
   smallest=a;
 }

 else if(b>=a && b>=c && a>=c)
 {
   largest=b;
   middle=a;
   smallest=c;
 }
 else if(c>=a && c>=b && a>=b)
 {
   largest=c;
   middle=a;
   smallest=b;
 }
 else if(c>=a && c>=b && b>=a)
 {
   largest=c;
   middle=b;
   smallest=a;
 }
 else
 {
 cout<< "ERROR"<<endl;
 }
 a=largest;
 b=middle;
 c=smallest;
}
