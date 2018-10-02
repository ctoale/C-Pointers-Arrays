#include <iostream>
using namespace std;

class Q3
{
   private:
   int a;
   int b;
  
   public:
   Q3(int a,int b)
   {
       this->a = a;
       this->b = b;
      
   }
   void setvalues(int a,int b)
   {
       this->a = a;
       this->b = b;
   }
   int add()
   {
       return a+b;
   }
};

int main()
{
   Q3 c(10,20);
   cout<<"\nA + B = "<<c.add();
  
   Q3 *ptr = &c;
  
   ptr->setvalues(30,40);
   cout<<"\nA + B by new pointer values = "<< c.add();
  
   return 0;
}