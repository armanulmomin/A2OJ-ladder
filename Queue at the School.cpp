 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string s;
    cin>>a>>b>>s;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                swap(s[j],s[j-1]);
                j++;
            }
        }
    }
    cout <<s;
}
