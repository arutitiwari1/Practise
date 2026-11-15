#include<iostream>// allow only 1 or 2 jump on stairs
using namespace std;
int countwaystoclimb(int nstairs){
    //base case
    if(nstairs<0){
        return -1;
    }
    if(nstairs==0){
        return 1;
    }
    //RR
    int sp=countwaystoclimb(nstairs-2);
    int bp=countwaystoclimb(nstairs-1)+sp;
    return bp;
}
int main(){
    int n;
    cin>>n;
    int ans=countwaystoclimb(n);
    cout<<ans<<endl;
    return 0;

}