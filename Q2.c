#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s",a);
    scanf("%s",b);
    int n=strlen(a);
    int m=strlen(b);
    int f=0;
    if(m==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j+1]<a[j]){
                    char temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m-i-1;j++){
                if(b[j+1]<b[j]){
                    char temp=b[j+1];
                    b[j+1]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                printf("The Strings are not Anagrams");
                f=1;
                break;
            }
        }
        if(f==0){
            printf("The Strings are Anagrams");
        }
    }
    else{
        printf("The Strings are not Anagrams");
    }
    return 0;
}