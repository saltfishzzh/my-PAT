#include<stdio.h>

int rel[110][110],cnt[110],node;
void dfs(int num,int level){
    if(cnt[level]==-1) cnt[level]=0;
    int i,judge=0;
    for(i=1;i<=node;i++){
        if(rel[num][i]==1){
            judge=1;
            if(level+1<=node) dfs(i,level+1);
        }
    }
    if(judge==0) cnt[level]++;
}
int main(){
    int i,j,nonleaf,fat,childs,son;
    for(i=0;i<=100;i++){
        cnt[i]=-1;
        for(j=0;j<=100;j++){
            rel[i][j]=0;
        }
    }
    scanf("%d %d",&node,&nonleaf);
    for(i=1;i<=nonleaf;i++){
        scanf("%d %d",&fat,&childs);
        for(j=1;j<=childs;j++){
            scanf("%d",&son);
            rel[fat][son]=1;
        }
    }
    dfs(1,1);
    for(i=1;i<=node;i++){
        if(cnt[i]>-1&&i==1) printf("%d",cnt[i]);
        else if(cnt[i]>-1) printf(" %d",cnt[i]);  
    }  
    printf("\n");  
    return 0;  
}