#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *arr2=(char *) malloc(100*sizeof(char));
    char *arr1=(char *) malloc(100*sizeof(char) );
    scanf("%s",arr1);
    scanf("%s",arr2);
    int c1=strlen(arr1);
    int c2=strlen(arr2);
    arr1=(char *)realloc(arr1,(c1+c2)*sizeof(char));
    for(int i=0;i<c2+1;i++){
        arr1[c1+i]=arr2[i];
    }
    printf("First String: %s",arr1);
    printf("\nSecond String: %s",arr2);
    free(arr1);
    free(arr2);
    return 0;
}
