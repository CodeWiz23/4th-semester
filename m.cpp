#include <iostream>

using namespace std;

string gusion (const string& c )
{
    const string write =c;
    return c;
}
int alucard(int a, int b)
{
    int sum=(a+b);

    return sum;
}

int main ()
{
    int result = alucard(3,5);
    cout<<result<<endl;
    string write = gusion("I am an ALUCARD Legend");

    cout <<write;
}
