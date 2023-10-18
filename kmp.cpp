#include <bits/stdc++.h>
#include <iostream>
void computelps(char* pat,int M,int*lps);
void kmp(char* pat,char * txt){
int M=strlen(pat);
int N=strlen(txt);
int lps[M];
computelps(pat,M,lps);
int i=0;
int j=0;
while((N-i)>=(M-j)){
    if(pat[j]==txt[i]){
        j++;
        i++;
    }
    if(j==M){
        printf("found at index %d",i-j);
        j=lps[j-1];
    }
    else if(i<N && pat[j]!=txt[i]){
        if(j!=0)
            j=lps[j-1];
        else
            i=i+1;
    }
}
}
void computelps(char*pat,int M,int* lps){
int len=0;
lps[0]=0;
int i=1;
while(i<M){
    if(pat[i]==pat[len]){
        len++;
        lps[i]=len;
        i++;
}
else{
        if(len!=0){
            len=lps[len-1];
        }
    else{
    lps[i]=0;
    i++;
    }
}
}
}
int main(){
  char txt[50];
  scanf("%s",txt);
  char pat[50];
  scanf("%s",pat);
  kmp(pat,txt);
  return 0;
}
