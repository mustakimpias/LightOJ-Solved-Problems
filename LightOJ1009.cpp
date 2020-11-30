#include <bits/stdc++.h>
using namespace std;

#define N 20005
#define WHITE 0
#define GRAY 1
#define BLACK 2
vector<int> graph[N];
int ans, vampire, lykan, color[N];

void ClearGraph()
{
    for (int i = 0; i < N; i++)
        graph[i].clear();
}

void bfs(int x)
{
    queue<int> que;
    color[x] = GRAY;
    vampire++;
    que.push(x);
    while (!que.empty())
    {
        int n1 = que.front();
        que.pop();
        for (int i = 0; i < graph[n1].size(); i++)
        {
            int n2 = graph[n1][i];
            if (color[n2] == WHITE)
            {
                que.push(n2);
                if (color[n1] == GRAY)
                {
                    lykan++;
                    color[n2] = BLACK;
                }
                else
                {
                    vampire++;
                    color[n2] = GRAY;
                }
            }
        }
    }
}

int main()
{
    int t, cases = 0;
    cin >> t;
    while (t--)
    {
        ClearGraph();
        memset(color, 0, sizeof(color));
        ans = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            graph[n1].push_back(n2);
            graph[n2].push_back(n1);
        }
        for (int i = 0; i < N; i++)
        {
            if (!graph[i].empty() && color[i] == WHITE)
            {
                vampire = 0;
                lykan = 0;
                bfs(i);
                ans += max(vampire, lykan);
            }
        }
        printf("Case %d: %d\n", ++cases, ans);
    }
    return 0;
}