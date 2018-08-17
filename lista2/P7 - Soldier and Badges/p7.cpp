#include <bits/stdc++.h>  
using namespace std;  
const int N=1e4;  
int num[N];  
int main()  
{  
    int n;  
    scanf("%d",&n);  
    for(int i=0;i<n;i++) scanf("%d",&num[i]);  
    sort(num,num+n);  
    int l=-1,res=0;  
    for(int i=0;i<n;i++)  
    {  
        if(num[i]>l) l=num[i];  
        else res+=++l-num[i];  
    }  
    printf("%d\n",res);  
    return 0;  
} 
