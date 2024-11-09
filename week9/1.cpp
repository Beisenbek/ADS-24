#include <iostream>

using namespace std;

void f2(string str){
    for(int len = 1; len <= str.size(); ++len){
        cout << str.substr(0, len) << " " << str.substr(len - 1) << endl;
    }
}

void f1(string str){
    for(int len = 1; len <= str.size(); ++len){
        cout << str.substr(0, len) << endl;
    }
}

int main(){

    string str;
    getline(cin, str);
    f2(str);

    return 0;
}