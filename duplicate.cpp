# include <iostream>

using namespace std;

int main(){

    string s1;
    string s2 = "";
    int index = 0;
    getline(cin,s1);
    for(int i = 0; i<s1.length(); i++){
        if(s1[i] != s1[i-1]){
            cout<<s1[i];
        }
    }
}