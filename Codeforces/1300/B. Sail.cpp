//https://codeforces.com/problemset/problem/298/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout.precision(30);
    int t,sx,sy,ex,ey,e=0,w=0,n=0,s=0;
    cin>>t>>sx>>sy>>ex>>ey;
    char l[t];
    for (int i=0;i<t;i++)
    {
        cin>>l[i];
        if (l[i]=='E')
            e+=1;
        else if (l[i]=='W')
            w+=1;
        else if (l[i]=='N')
            n+=1;
        else
            s+=1;
    }
    int dx=ex-sx;
    int dy=ey-sy;
    int test=1;
    char a,b;
    if (dx>0)
    {
        a='E';
        if (e<dx)
            test=0;
    }
    else if (dx<0)
    {
        a='W';
        if (w<-dx)
            test=0;
    }
    if (dy>0)
    {
        b='N';
        if (n<dy)
            test=0;
    }
    else if (dy<0)
    {
        b='S';
        if (s<-dy)
            test=0;
    }
    if (test)
    {
        dx=abs(dx);
        dy=abs(dy);
        int c;
        for (int i=0;i<t;i++)
        {
            if (l[i]==a && dx>0)
                dx-=1;
            if (l[i]==b && dy>0)
                dy-=1;
            if (dy==0 && dx==0)
            {
                c=i+1;
                break;
            }
        }
        cout<<c<<endl;
    }
    else
        cout<<"-1\n";
    return 0;
}
