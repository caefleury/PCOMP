#include<bits/stdc++.h>
 
using namespace std;

int graph[N][N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int u,v,w,n,m;
    scanf(”%d %d”,&n,&m);


    for(int i = 0; i < m; i++){
        scanf(”%d %d %d”,&u,&v,&w);
        graph[u][v] = w;
        graph[v][u] = w;

    while(i--){


        
    }



}

}