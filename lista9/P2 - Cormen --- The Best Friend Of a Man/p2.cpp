#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,y,i,cnt=0,arr[1000],x;
    cin>>t>>y;
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    for(i=1;i<t;i++){
        x=arr[i];
        if(arr[i]+arr[i-1]<y){
            arr[i]=y-arr[i-1];
            cnt+=arr[i]-x;

        }
    }
    cout<<cnt<<endl;
    for(i=0;i<t-1;i++)
        cout<<arr[i]<<" ";
    cout<<arr[t-1]<<endl;
    return 0;
}
