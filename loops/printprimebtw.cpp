#include<iostream>
using namespace std;
int main(){
    int range;
    int n=2;
    cin>> range;
    while (n<=range)
    {
        bool isprime=true;
        for (int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        {
            cout<<n<<endl;
        }
        n++;
    } return 0;
}