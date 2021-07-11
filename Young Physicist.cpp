 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int b,c,d;
        cin>>b>>c>>d;
        sum1+=b;
        sum2+=c;
        sum3+=d;

    }

    if(sum1==0 && sum2==0 && sum3==0)
    {
       cout<<"YES";
    }
    else
    {
       cout<<"NO";
    }

}
