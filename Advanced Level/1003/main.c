#include<stdio.h>

int road[510][510],vst[510],hper[510];
int N,M,C1,C2,shpath=-1,maxhp=-1,cnt=0;

int main(){
    void dfs(int from,int len,int helpers);
    int i,j;
    int c1,c2,l;
    scanf("%d %d %d %d",&N,&M,&C1,&C2);
    for(i=0;i<N;i++){
        scanf("%d",&hper[i]);
        vst[i]=0;
        for(j=0;j<N;j++){
            road[i][j]=-1;
            road[j][i]=-1;
        }
    }
    
    for(i=0;i<M;i++){
        scanf("%d %d %d",&c1,&c2,&l);
        road[c1][c2]=l;
        road[c2][c1]=l;
    }
    vst[C1]=1;
    dfs(C1,0,hper[C1]);
    printf("%d %d\n",cnt,maxhp);
    return 0;
}
void dfs(int from,int len,int helpers){
    int i;
    if(len>shpath&&shpath!=-1){
        return;
    }
    if(from==C2){
        if(len<shpath||shpath==-1){
            shpath=len;
            maxhp=helpers;
            cnt=1;
        }
        else if(len==shpath){
            cnt++;
            if(helpers>maxhp){
                maxhp=helpers;
            }
        }
        return;
    }
    for(i=0;i<N;i++){
        if(vst[i]==0&&road[from][i]!=-1){
            vst[i]=1;  
            dfs(i,len+road[from][i],helpers+hper[i]);  
            vst[i]=0;  
        }  
    }  
    
}