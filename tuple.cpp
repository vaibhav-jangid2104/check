#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int ini[3],tar[3],i,ans=-1;
	    for(i=0;i<3;i++)
	    {
	        cin>>ini[i];
	    }
	    for(i=0;i<3;i++)
	    {
	        cin>>tar[i];
	    }
	    float x,y,z;
	    pair<int,int>p1,p2,p3;
	    int op=0;
	    x = (float)tar[0]/ini[0];
	    y = (float)tar[1]/ini[1];
	    z = (float)tar[2]/ini[2];
	    if(x==1 && y==1 && z==1)
	    {
	        ans=0;
	    }
	    else if(x==y && x==z)
	    {
	        ans = 1;
	    }
	    else
	    {
	    // set 3
	    while(ini[0]!=tar[0] && ini[1]!=tar[1] && ini[2]!=tar[2])
	    {
	        p1 = {tar[0]/ini[0],tar[0]%ini[0]};
	        p2 = {tar[1]/ini[1],tar[0]%ini[1]};
	        p3 = {tar[2]/ini[2],tar[0]%ini[2]};
	        int amin = min(p1.first,p2.first);
	        int bmin = min(p1.second,p2.second);
	        amin = min(amin,p3.first);
	        bmin = min(bmin,p3.second);
	        if(bmin != 0)
	        {
	            if(amin ==1)
	            {
	                op++;
	                ini[0] = ini[0] + bmin;
	                ini[1] = ini[1] + bmin;
	                ini[2] = ini[2] + bmin;
	            }
	            else
	            {
	                op++;
	                ini[0] = ini[0] * amin;
	                ini[1] = ini[1] * amin;
	                ini[2] = ini[2] * amin;
	            }
	        }
	        else
	        {
	            if(amin!=1)
	            {
	                op++;
	                ini[0] = ini[0] * amin;
	                ini[1] = ini[1] * amin;
	                ini[2] = ini[2] * amin;
	            }
	            else
	            {
	                if(p1.first == 1 && p1.second==0)
	                {
	                    if(p2.first == 1 && p2.second==0)
	                    {
	                        if(p3.second==0)
	                        {
	                            op++;
	                            ini[2] = ini[2] * p3.first;
	                        }
	                        else
	                        {
	                            op++;
	                             ini[2] = ini[2] + p3.second;
	                        }
	                    }
	                    else if(p3.first == 1 && p3.second==0)
	                    {
	                        if(p2.second==0)
	                        {
	                            op++;
	                            ini[1] = ini[1] * p2.first;
	                        }
	                        else
	                        {
	                            op++;
	                             ini[1] = ini[1] + p2.second;
	                        }
	                    }
	                }
	                else if(p2.first == 1 && p2.second==0 && p3.first == 1 && p3.second==0)
	                {
	                        if(p1.second==0)
	                        {
	                            op++;
	                            ini[0] = ini[0] * p1.first;
	                        }
	                        else
	                        {
	                            op++;
	                             ini[0] = ini[0] + p1.second;
	                        }
	                }
	            }
	        }
	    }
	    ans = op;
	    }
	    cout<<ans<<endl;
	       
	}
	return 0;
}

