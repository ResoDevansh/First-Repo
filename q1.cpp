#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n,x,res;
        cin>>n;res=n;
        for(lli i=n-1;i>=0;i--)
        {
            res=res&i;
            if(res==0){x=i;break;}//if(!i&n){x=i;break;}
        }
        cout<<x<<"\n";
    //comment
   }
  return 0;  
}
