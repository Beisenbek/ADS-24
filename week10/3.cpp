#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];

    vector<int> v[n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[i][j] == 1){
                v[i].push_back(j);
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < v[i].size(); ++j){
            cout << i + 1 << " " << v[i][j] + 1 << endl;
        }
    }


    return 0;
}
    vector<int> v[n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[i][j] == 1){
                v[i].push_back(j);
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < v[i].size(); ++j){
            cout << i + 1 << " " << v[i][j] + 1 << endl;
        }
    }


    return 0;
}