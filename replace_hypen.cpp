# include <iostream>

using namespace std;

int main(){

    string s1;
    getline(cin,s1);
    for(int i = 0; i<s1.length(); i++){
        if(s1[i] == ' '){
            s1[i] = '-';
        }
    }
    cout<<s1;
    return 0;
}