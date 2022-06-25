# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character ch:";
    cin >> ch;
    if (ch>=97 && ch<=122 ){
        cout<<"Lower case";
    }
        if (ch>=65 && ch<=90 ){
        cout<< "Upper case";
    }
        if (ch>=48 && ch<=57 ){
        cout << "Numeric";
    }
}