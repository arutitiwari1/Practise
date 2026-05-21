#include<iostream>
using namespace std; //or me jo dono me ek v true toh true false ke liye dono false hona imp h

int main(){
    cout<<((3<5)||(3<2))<<endl; //1 ek true h ek false
    cout<<((3>5)||(3>9))<<endl; //0 dono false
    cout<<((4>2||(4>1)))<<endl;  //1 dono true
    //and logical operator (&&)sari bate sach tbhi true else false
    cout<<((3<5)&&(3<2))<<endl; //0ek true ek false
    cout<<((3>5)&&(3>9))<<endl; //0 dono false
    cout<<((4>2)&&(4>1))<<endl; //1 dono true
    
    return 0;

}