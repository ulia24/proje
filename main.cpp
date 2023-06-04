#include <iostream>
#include<stdexcept>

using namespace std;



int main()
{
    int value=5;
    int anotherval=10;
    int* const ptr=&value;
    
    cout<<*ptr<<endl;
    
    *ptr=8;
    
    cout<<*ptr;
    
    //ptr=&anotherval;
    return 0;
}
