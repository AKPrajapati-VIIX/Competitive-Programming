#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
    
        int i =2;
        if(y>x){
            int temp = y%x;
            while(y>x){
                x = x*i++;
            }
            cout<<min(temp, x-y)<<'\n';   
            continue;     
        }
        else if(x>y){
            int temp = x%y;
            while(x>y){
                y = y-i++;
            }
            cout<<min(temp, y-x)<<'\n';
            continue;
        }
        else{
            cout<<x<<'\n';
        }
        
    }
    return 0;
}
