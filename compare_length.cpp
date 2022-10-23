# include <iostream>

using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);

    int i,j;

    for(i = 0; s1[i] !='\0'; i++);
    for(j = 0; s2[j] !='\0'; j++);
    if (i == j){
        cout<<"Equal";
    }
    else{
        cout<<"Unequal";
    }
    return 0;
}