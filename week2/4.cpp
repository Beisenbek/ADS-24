#include <iostream>
#include <set>

using namespace std;

set<int> s;
bool primes[100];

bool isPrime(int x){
    if(x == 1) return false;
    bool result = true;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            result = false;
            break;
        }
    }
    return result;
}

bool setup(int k){
    for(int i = 1; i <= k; ++i){
        if(isPrime(i)){
            s.insert(i);
        }
    }
}

bool setup2(int k){
    primes[1] = primes[0] = false;
    for(int i = 2; i <= k; ++i){
        primes[i] = true;
    }
    for(int i = 2; i * i <= k; i++){
        if(primes[i] == true){
            int y = i;
            while(y <= k){
                y += i;
                primes[y] = false;
            }
        }
    }
}

int main(){

    int k = 100;
    setup(k);
    setup2(k);

    for(int i = 1; i <= k; ++i){
        if(s.find(i) != s.end()){
            cout << i << " ";
        }
    }
    for(int i = 1; i <= k; ++i){
        if(primes[i]){
            cout << i << " ";
        }
    }


    return 0;
}