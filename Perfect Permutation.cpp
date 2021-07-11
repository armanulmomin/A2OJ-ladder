 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2==1)
    {
        cout<<-1;
    }
    else
    {
        cout<< "2 1";
        for(int i=3;i<a;i+=2)
        {
            cout<<" "<<i+1<<" "<<i;
        }
    }
}
