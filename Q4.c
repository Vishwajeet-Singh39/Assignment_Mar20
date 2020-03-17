#include<stdio.h>
int main(){
    int n,m,s=0;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("\nUnion: ");
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                s=1;
                break;
            }
        }
        if(s==0){
            printf("%d ",a[i]);
        }
    }
    for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }
    printf("\nIntersection: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}