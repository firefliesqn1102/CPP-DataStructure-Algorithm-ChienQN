/*

*/

#include <iostream>
using namespace std;

int main(){
    string a  = "Hello World";
    for (char&i : a){
        cout << i << endl;
    };
    return 0;
}