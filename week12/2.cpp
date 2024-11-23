#include <iostream>
#include <vector>
using namespace std;

vector<int> e_list[100];
int color[100];
int n;

void dfs(int v){
    cout << v + 1 << " ";
    color[v] = 1;//gray
    for(int i = 0; i < e_list[v].size(); ++i){
        int to = e_list[v][i];
        if(color[to] == 0){
            dfs(to);
        }
    }
    color[v] = 2;//black;
}
int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        int from = i;
        int to;
        for(int j = 0; j < m; ++j){
            cin >> to;
            e_list[from].push_back(to - 1);
        }
        color[i] = 0;//white
    }

    int startV;
    cin >> startV;
    startV--;

    dfs(startV);


    return 0;
}