# include <iostream>

using namespace std;

int main() {
    string s1;
    getline(cin,s1);
    char ch;
    cin>>ch;
    for(int i = 0; i<= s1.length(); i++){
        if(ch == s1[i]){
            cout<<i+1;
        }
    }
}