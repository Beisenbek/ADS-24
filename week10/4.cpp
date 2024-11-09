#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int> > q;
int used[20][20];

void step(int x, int y, int t, int n){
    if(x >= 0 && y>= 0 && x < n && y < n){
        if(used[x][y] == -1){
            q.push(make_pair(x, y));
            used[x][y] = t + 1;
        }
    }
}

int main(){

    int n;
    cin >> n;

    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;

    x1--;
    y1--;
    x2--;
    y2--;


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            used[i][j] = -1;
        }
    }


    q.push(make_pair(x1,y1));
    used[x1][y1] = 0;

    while(!q.empty()){
        pair<int, int> cur = q.front();
        int t = used[cur.first][cur.second];
        q.pop();
        step(cur.first - 1, cur.second + 2, t, n);
        step(cur.first + 1, cur.second + 2, t, n);
        step(cur.first + 1, cur.second - 2, t, n);
        step(cur.first - 2, cur.second + 1, t, n);
        step(cur.first - 2, cur.second - 1, t, n);
        step(cur.first + 2, cur.second - 1, t, n);
        step(cur.first + 2, cur.second + 1, t, n);
        step(cur.first - 1, cur.second - 2, t, n);
        if(used[x2][y2] != -1) break;
    }

    cout << used[x2][y2];

    return 0;
}