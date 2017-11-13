#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;
using namespace ns1;
using namespace ns2;
int main ()
{
using ns1::foo;
cout<<"n:"<<n<<endl;
cout<<"m:"<<m<<endl;
cout<<foo<<endl;
}


