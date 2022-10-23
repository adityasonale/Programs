# include<iostream>

using namespace std;

int main(){

    string s1;
    int count = 0;
    getline(cin,s1);
    for(int i = 0; i<s1.length(); i++){
        if(s1[i] == ' '){
            count++;
        }
    }
    cout<<count;
    return 0;
}