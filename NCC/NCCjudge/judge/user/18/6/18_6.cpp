#include<bits/stdc++.h>
using namespace std;
int sq(int a)
{
return a*a;
}
int main()
{
    double x1,x2,y1,y2,z1,z2,a1x,a1y,a1z,a2x,a2y,a2z,ax,ay,az,a,b,c,r1,r2,x,y,z;
    int t;
    cin>>t;
    while(t--)
    {
      cin>>r1>>r2;
      cin>>x1>>y1>>z1;
      cin>>a1x>>a1y>>a1z;
      cin>>x2>>y2>>z2;
      cin>>a2x>>a2y>>a2z;
      x=x1-x2;y=y1-y2;z=z1-z2;
      ax=(a1x-a2x);
      ay=(a1y-a2y);
      az=(a1z-a2z);
      a=sq(ax)+sq(ay)+sq(az);
      b=4*(ax*x+ay*y+az*z);
      c=4*(sq(x)+y*y+z*z-sq(r1+r2));
      double di=b*b-4*a*c;
      if(di>=0)
      {
        double s1=(-b+sqrt(di))/(2*a);
        double s2=(-b-sqrt(di))/(2*a);
        if(s1>=0 || s2>=0)
        cout<<"YES\n";
        else cout<<"YES\n";
        }
        else cout<<"NO\n";
        }
        return 0;
        }
         