#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    int b;
    cout << "Enter b number" << endl;
    cin >> b;
    
    if(a>b)
    {
        cout<<b<<endl;
    }
    else if(a==b)
    {
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << a << endl;
    }
    return 0;
}