# include<iostream>

using namespace std;

int main(){
    string s1;
    int count = 0;
    getline(cin,s1);
    for(int i = 0; i<s1.length()-2; i++){
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'i' 
        && s1[i+1] == 'a' || s1[i+1] == 'e' || s1[i+1] == 'o' || s1[i+1] == 'u' || s1[i+1] == 'i' && 
        s1[i+2] == 'a' || s1[i+2] == 'e' || s1[i+2] == 'o' || s1[i+2] == 'u' || s1[i+2] == 'i'){
            count++;
        }
    }
    if (count > 2){
        cout<<"Happy"<<endl;
    }
    else{
        cout<<"sad"<<endl;
    }
}