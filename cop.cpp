#include <bits/stdc++.h>
using namespace std;

//ha
int main()
{
    int i,ml;
    scanf("%d",&ml);
    while(ml--){
char a[1002][1002];
        int l,n,ha=0,doo=0;
	
        scanf("%d%d",&l,&n);
        char s1[5005];
        scanf("%s",s1);
        vector<pair<int,int> >vh1,vd1;
        for(i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
               cin>>a[i][j];
             
                if(a[i][j]=='#')
                {
                    vh1.push_back(make_pair(i,j));
                    ha++;
                }
		else
             {
                 vd1.push_back(make_pair(i,j));
                doo++;
             }
            }
        }
        ha=ha+4*n;
        long long int answer=0;
	  double pr=ha/(double)(n*n);
	  //cout<<pr<<endl;
	  //cout<<"tar";
	if(pr>.1)
        {
 
            vector<pair<int,int> >::iterator it;
            for(it=vd1.begin();it!=vd1.end();it++)
            {
                int x=it->first,y=it->second;
                for(i=0;i<l;i++)
                {
                    if(s1[i]=='L')
                        y--;
                    if(s1[i]=='R')
                        y++;
                    if(s1[i]=='U')
                        x--;
                    if(s1[i]=='D')
                        x++;
                    if(a[x][y]=='#'||x<1||x>n||y<1||y>n)
                        break;   
                }
                answer=answer^i;
            }
        }
        else
        {
            for(i=0;i<n+2;i++)
            {
                a[i][0]='#';
                a[0][i]='#';
                a[n+1][i]='#';
                a[i][n+1]='#';
	  vh1.push_back(make_pair(0,i));
                vh1.push_back(make_pair(n+1,i));
                vh1.push_back(make_pair(i,0));
              
                vh1.push_back(make_pair(i,n+1));
            }
	    //cout<<vh1[0]<<endl;
            int ansh[n+2][n+2];
            for(i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    ansh[i][j]=l;
                }
            }
            vector<pair<int,int> >::iterator it;
            for(it=vh1.begin();it!=vh1.end();it++)
            {
                int x=it->first,y=it->second;
                ansh[x][y]=0;
                for(i=0;i<l;i++)
                {
                    if(s1[i]=='L')
                        y++;
                    if(s1[i]=='R')
                        y--;
                    if(s1[i]=='U')
                        x++;
                    if(s1[i]=='D')
                        x--;



                    if(x>=1&&x<=n&&y>=1&&y<=n)
                    {
                        if(ansh[x][y]>i)
                        {
                            ansh[x][y]=i;
              
                        }
                   }  
                }
            }
            for(i=1;i<=n;i++)
            {
               for(int p=1;p<=n;p++)
                {

                  
                    answer=answer^ansh[i][p];
                }
            
            }
        }
       
        printf("%lld\n",answer);
    }
 
    return 0;
}
