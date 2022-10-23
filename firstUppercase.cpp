# include<iostream>

using namespace std;

int main(){

    string s;
    getline(cin,s);
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' '){
            s[i+1] = toupper(s[i+1]);
        }
    }
    cout<<s;
    return 0;
}