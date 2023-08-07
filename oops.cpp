#include<iostream>
using namespace std;
class Rectangle
{
  private:
    int length;
    int breadth;
  public:
  Rectangle()
  {
    int length=breadth=1;
  }
  Rectangle(int l, int b)
  {
    length=l;
    breadth=b;
  }
  int area()
  {
    return length*breadth;
  }
  int perimeter()
  {
    return 2*(length+breadth);
  }
  void setLength(int l)
  {
    length=l;
  }
  void setBreadth(int b)
  {
    breadth=b;
  }
  int getLength()
  {
   return length;
  }
  int getBreadth()
  {
    return breadth;
  }
  ~Rectangle();
  
  };
  Rectangle::~Rectangle()
  {
    cout<<"Destructor";
  }


  int main()
  {
    Rectangle r(10,4);
    cout<<"Area is "<<r.area()<<endl<<"Perimeter is "<<r.perimeter()<<endl;
    return 0;

  }