#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int start,end;
    cin >> start >> end;
    for (int i =start ;i<=end;i++)
    {
        int cnt=0;
        int temp=i;
        while (temp>0)
        {
            int r=temp%10;
            if (r==0 || i%r!=0)
            {
                cnt++;
                break;
            }
            temp/=10;
        }
        if(cnt==0)
        cout<<i<<" ";
    }
}