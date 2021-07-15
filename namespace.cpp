#include <iostream>
namespace myspace1
{
    int a;
}
namespace myspace
{
    int a;
    int f1();
    class test
    {
    public:
        void fun();
    };
} // namespace myspace
int myspace::f1()
{
    std::cout << "a=" << a << std::endl;
    std::cout << "Function declared in namespace" << std::endl;
    test ob;
    ob.fun();
}
void myspace::test::fun()
{
    std::cout << "Class Member Function call. Class is declared in namespace" << std::endl;
}
using namespace myspace1;
using namespace myspace;
int main()
{
    myspace::a = 5;
    f1();
    test obj;
    obj.fun();
}