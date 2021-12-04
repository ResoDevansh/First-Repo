#include<bits/stdc++.h>
using namespace std;

void option2(string &s,int &pr)
{
   if(isPalindrome(s)==false && pr!=2)
        {reverse(s.begin(),s.end());pr=2;}

}

void option1(string &s,int key)
{
    if(key==-1)
    {for(int i=0;i<n;i++)
        if(s[i]=='0')
          {s[i]=='1';break;}
    }
    else s[key]='1';
    pr=1;
}

void mis(string &q,int &key)
{int l=q.size(),count=0,key;
    for(int i=0;i<l/2;i++)
    {
        if(q[i]!=q[l-i-1])
            {count++;if(count>1){key=-1;break;}
            if(q[i]=='0')key=i;else key=l-i-1;
            }
    }
}

bool isPalindrome(string a)
{int l=a.size(),count=0;
    for(int i=0;i<l/2;i++)
    {if(a[i]==a[l-i-1])
          count++;}
if(count==l/2)return true;
return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=-1,alice=0,bob=0,count=0;
        cin>>n;
        string s;cin>>s;
        while(resultant(s)!=1)
        {   if(count%2==0)
             {
                // alice chance
                    mis(s,k);
                    option2(s,pr);
                    option1(s,k);

             }
        count++;
            mis(s,key);
        }

    }
}
