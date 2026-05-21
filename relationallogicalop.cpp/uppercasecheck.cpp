#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "enter char:";
    cin>>ch;

    if(ch>='a'  && ch<='z'){
        cout<<"lowercase\n"<<endl;
    }else (ch>='A'&& ch<='Z');
    {cout<< "uppercase\n"<< endl;
    }
    return 0;
}