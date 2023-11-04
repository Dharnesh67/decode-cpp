#include <iostream> // DSU 2
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int find(vector<int> &parent, int x)
{
    // this method returns which group/cluster x belongs to
    return parent[x] = (parent[x] == x) ? x : find(parent ,parent[x]);
}
void Union(vector<int> &parent, vector<int> &size, vector<int> &minimal, vector<int> &maxima, vector<int> &rank, int a, int b)
{
    a = find(parent, a);
    b = find(parent, b);
    if(a==b) return; // both a and b are same set
    if (rank[a] < rank[b])
    {
        rank[b]++;
        parent[a] = b;
        size[b] += size[a];
        maxima[b] = max(maxima[a], maxima[b]);
        minimal[b] = min(minimal[a], minimal[b]);
    }
    else if(rank[a] >= rank[b])
    {
        
        rank[a]++;
        parent[b] = a;
        size[a] += size[b];
        maxima[a] = max(maxima[a], maxima[b]);
        minimal[a] = min(minimal[a], minimal[b]);
    }
    // thats all for disjoint set union
}

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    file_i_o();
    int n, m;
    cin >> n >> m;
    // n== number of elements  m==no of queries
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);
    vector<int> size(n + 1, 1);
    vector<int> minimal(n + 1);
    vector<int> maxima(n + 1);
    for (int i = 1; i <=n; i++)
    {
        parent[i] = maxima[i] = minimal[i] = i;
    }
    while (m--)
    {
        string s;
        cin >> s;
        if (s == "union")
        {
            int x, y;
            cin >> x >> y;
            Union(parent, size, minimal, maxima, rank, x, y);
        }
        else
        {
            int x;
            cin>>x;
            x= find(parent, x) ;
            cout << minimal[x] << " " << maxima[x] << " " << size[x] << endl;
        }
    }

    return 0;
}
