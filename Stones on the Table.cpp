 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string s;
    cin>>a>>s;
    int n=0;

    for(int i=0;i<a;i++)
    {
        if(s[i]== s[i+1])
        {
            n++;
        }
    }
    cout<<n;
}
