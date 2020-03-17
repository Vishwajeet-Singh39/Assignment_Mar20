#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    int n=strlen(arr);
    int c=-1,index,notpalin=0,total=0;
    for(int i=0;i<=n;i++){
        c++;
        if(arr[i]==' ' ||  arr[i]=='\0'){
            index=i-c;
            for(int j=0;j<c/2;j++){
                if(arr[index+j]!=arr[index+c-1-j]){
                    notpalin++;
                    break;
                }
            }
            c=-1;
            total++;
        }
    }
    printf("%d ",total-notpalin);
    return 0;
}