#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

char* solve(char* wrd1,char* wrd2,int n,int m){
    
    int temp = fmin(n, m);
    int flag=0;
    for (int i=0; i<temp; i++) {
        if(wrd1[i]>wrd2[i] && flag==0) {
            flag=1;
        } else if(wrd1[i]<wrd2[i] && flag==0) {
            flag=-1;
        } else {
            continue;
        }
    }

    if(flag==1) {
        return wrd1;
    } else if(flag==-1) {
        return wrd2;
    } else {
        if(n!=m) {
            if(n>m) return wrd1;
            else return wrd2;
        } else {
            return "no";
        }
    }
}
int main(){
    char *wrd1,*wrd2,*res;
    wrd1=(char*)malloc(1000*sizeof(char));
    wrd2=(char*)malloc(1000*sizeof(char));
    res=(char*)malloc(1000*sizeof(char));

    printf("Enter the first string:");
    gets(wrd1);
    

    printf("\n Enter the Second String:"); 
    gets(wrd2);
    
    res=solve(wrd1,wrd2,strlen(wrd1),strlen(wrd2));
    if(res=="no") {
        printf("Both are Same.");
    } else {
        printf("%s is greater", res);
    }




}