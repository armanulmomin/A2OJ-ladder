 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>a>>b;
    for(int i=0;i<15;i++)
    {
        if(a==arr[i] && b==arr[i+1])
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"NO";
    }
    else
    {
         cout<<"YES";
    }


}
