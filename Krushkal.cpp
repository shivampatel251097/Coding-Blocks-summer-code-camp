#include <bits/stdc++.h>

using namespace std;

class Edge {
public:

    int src, dest;
    int weight;
};

class Set {
public:
    int parent, rank;
};

int find(int i, Set *set) {
    if (set[i].parent != i) {
        set[i].parent = find(set[i].parent, set);
    }
    return set[i].parent;
}

void Union(Set *set, int u, int v) {
    int v_root = find(v, set);
    int u_root = find(u, set);

    if (set[v_root].rank <= set[u_root].rank) {
        set[v_root].parent = u_root;
        set[u_root].rank++;
    } else {
        set[u_root].parent = v_root;
        set[v_root].rank++;
    }
}

bool cmp(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

int kruskal(Edge *edges, int e, int n) {
    sort(edges, edges + e, cmp);

    Set *set = new Set[n];
    for (int i = 0; i < n; ++i) {
        set[i].parent = i;
        set[i].rank = -1;
    }

    int totalWeight = 0;
    for (int i = 0; i < n; ++i) {
        Edge currentEdge = edges[i];
        int srcParent = find(currentEdge.src, set);
        int destParent = find(currentEdge.dest, set);
        if (srcParent != destParent) {
            Union(set, srcParent, destParent);
            totalWeight += currentEdge.weight;
        }
    }

    return totalWeight;
}

int main() {
    int n, e;
    cin >> n >> e;
    Edge *edge = new Edge[e];
    for (int i = 0; i < e; ++i) {
        int s, d, wt;
        cin >> s >> d >> wt;
        edge[i].src = s-1;
        edge[i].dest = d-1;
        edge[i].weight = wt;
    }
    cout<<kruskal(edge ,e ,n);
}