# include <iostream>

using namespace std;

int main(){

    int first,b,common;

    cin>>first>>b>>common;
    int i = 0;
    int flag = 0;

    while(i <= b){
        if(first == b){
            flag = 1;
        }
        first = first + common;

        i++;
    }
    cout<<flag;

}