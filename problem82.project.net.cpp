#include<bits/stdc++.h>
using namespace std;
#define N 65
bool issafe(int matrix[N][N], int a , int b){
    if(a<0||a>=N||b<0||b>=N){
        return false;
    }
    return true;
}
int bfs(int matrix[N][N], int i, int j){
    int distance[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            distance[i][j]=INT_MAX;
        }
    }
    int dx[]={1,0,0};
    int dy[]={0,-1,1};
    queue<pair<int, pair<int, int>>>q ;
    q.push({matrix[i][j], {i,j}});
    distance[i][j]=matrix[i][j];
    while(!q.empty()){
        pair<int,pair<int,int>> x= q.front();
        q.pop();
        for(int i=0;i<3;i++){
            int a=x.second.first;
            int b=x.second.second;
            if(issafe(matrix,a,b)){
                if(distance[a][b]>distance[x.second.first][x.second.second]+matrix[a][b]){
                  distance[a][b]=distance[x.second.first][x.second.second]+matrix[a][b];
                  q.push({matrix[a][b],{a,b}});
                }
                
            }
        }
        
    }
    int sumax=INT_MAX;

     for(int j=0;j<N;j++){
         if(distance[j][N-1]==INT_MAX){
             continue;
         }else
         {
             sumax=min(sumax,distance[j][N-1]);
         }
     }
    return sumax;
}
int main(){
    int matrix[][N]=
          { 
        31, 100, 65, 12, 18, 
        10, 13, 47, 157, 6, 
        100, 113, 174, 11, 33, 
        88, 124, 41, 20, 140, 
        99, 32, 111, 41, 20 
    }; 
        
        int su=INT_MAX;
    int a;
        for(int j=0;j<N;j++){
          a= bfs(matrix,j,0);
           su=min(su,a);
        }
    
    cout<<a;
    return 0;
    
}
