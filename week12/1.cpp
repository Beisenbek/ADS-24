#include <iostream>

using namespace std;

int a[100][100];
int color[100];
int n;

void dfs(int v){
    cout << v + 1 << " ";
    color[v] = 1;//gray
    for(int i = 0; i < n; ++i){
        if(a[v][i] == 1 && color[i] == 0){
            dfs(i);
        }
    }
    color[v] = 2;//black;
}

int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
        color[i] = 0;//white
    }

    int startV;
    cin >> startV;
    startV--;

    dfs(startV);


    return 0;
}