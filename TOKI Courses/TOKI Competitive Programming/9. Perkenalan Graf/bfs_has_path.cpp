#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

// PROGRAM
// Mengetahui apakah suatu node dapat dicapai dari start

void printStack(stack<int> s){
    if (s.empty()) return;
    int x = s.top();
    s.pop();
    printStack(s);
    cout << x << " ";
    s.push(x);
}

void printQueue(queue<int> q){
	while (!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<endl;
}

int main(){
	int n=6, start, end;
	bool find = false;
	vector<char> adj[n+1];
	adj[1].pb(2);
	adj[1].pb(4);
	adj[2].pb(3);
	adj[4].pb(2);
	adj[4].pb(6);
	adj[5].pb(4);

	cin >> start >> end;

	queue<int> st;
	bool visited[n+1];
	fill(visited, visited+n+1, false);

	st.push(start);
	visited[start] = true;
	while(!st.empty()){
		int current = st.front();
		st.pop();
		if(current == end){
			find = true;
			break;
		}

		cout << current << endl;
		for(int a : adj[current]){
			if(!visited[a]){
				st.push(a);
				visited[a] = true;
			}
		}
	}

	if(find) cout << "Tercapai";
	else cout << "Tidak tercapai";
}