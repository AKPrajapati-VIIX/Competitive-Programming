#include<iostream>
#include<set>
using namespace std;

int main(){
    string s;
    cin>>s;

    set<char> unique; 
    for(char ch : s){
        unique.insert(ch);
    }
    int n = unique.size();
    if(n%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

}

//=================================== another solution ============================================
// #include<vector>
// #include<algorithm>

// int main(){
//     string s;
//     cin>>s;

//     vector<char> v;

//     for(int i=0; i<s.size(); i++){
//         if(find(v.begin(), v.end(), s[i]) == v.end())
//             v.push_back(s[i]);
//     }

//     int n = v.size();
//     if(n%2 == 0){
//         cout<<"CHAT WITH HER!"<<endl;
//     }
//     else{
//         cout<<"IGNORE HIM!"<<endl;
//     }
// }