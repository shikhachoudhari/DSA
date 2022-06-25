# include <iostream>
using namespace std;
int main(){
    int i = 0, sum = 0, n;
    cout << "Enter the number upto which you want sum of even numbers:";
    cin >> n;
    while(i<=n){
        sum = sum + i;
        i = i+2; 
    }
    cout << "Sum of even numbers is " << sum << endl;

}