#include<iostream>
using namespace std;

int main(){
    int x,y,k;
    cin>>x>>y>>k;
    int ans = (x < k) ? 0 : (x - k) / k;
    int res = ans + y + ((x < k) ? k : 0);
    cout<<res<<"\n";
}
