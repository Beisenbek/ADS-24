#include <iostream>
#include "mheap.h"

using namespace std;

int main(){

    int n;
    cin >> n;

    hp * h = new hp();
    h->add(1);

    long long val = -1;

    while(n--){
        val = h->cut_min();
        h->add(val * 2);
        h->add(val * 3);
        h->add(val * 5);
    }

    cout << val;

    return 0;
}