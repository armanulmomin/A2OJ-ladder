 #include <bits/stdc++.h>
using namespace std;
int main()

{
    int arr[5][5];
    int sum=0;
    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            cin>>arr[row][column];
            if(arr[row][column]==1)
            {
                 sum = abs(row-2)+abs(column-2);

            }

        }
    }
    cout<<sum;
}
