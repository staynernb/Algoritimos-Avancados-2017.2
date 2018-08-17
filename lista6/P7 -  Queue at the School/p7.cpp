#include<bits/stdc++.h>

int main()
{
    int t,y,i,j;
    char s[52];
    scanf("%d%d",&t,&y);
    scanf("%s",s);
    for(j=0; j<y; j++)
    {
        for(i=0; i<t-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }

    }
    printf("%s\n",s);
    return 0;
}
