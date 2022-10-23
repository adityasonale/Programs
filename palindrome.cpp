# include<iostream>

using namespace std;

int main() {

    string s1;
    getline(cin, s1);
    int count = 1;

    for(int i = 0,j = s1.length()-1; i<s1.length()/2; i++,j--){
        if (s1[i] != s1[j])
        {
            count = 0;
        }
    }

    if (count != 0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}