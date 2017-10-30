#include <bits/stdc++.h>
using namespace std;
int main(){
// here the code begins
    int t,w;
    cin>>t;
    for(w=1;w<=t;w++)
    {
        char str[1005];
        cin>>str;
        int k;
        int l=strlen(str),count=0;
        cin>>k;
        for(int i=0;i<l;i++)
        {
          if(str[i]=='-')
          {
                	count++;
                int run=k,j=i;
                if(j+run<=l)
                {
                while(run--)
                {
                    if(str[j]=='-')
                        str[j]='+';
                    else
                        str[j]='-';
                    j++;
                }
            }
            }}
        int fla=0;
        for(int p=0;p<l;p++)
        {
            if(str[p]=='-')
            {
                fla=1;
                break;
            }
        }
        if(fla==1)
        {
            printf("Case #%d: IMPOSSIBLE\n",w);
        }
        else
         {
            printf("Case #%d: %d\n",w,count);
         }
       
    }   
    return 0;
}
