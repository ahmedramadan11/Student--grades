#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    vector<int>mark;
    while(true)
    {
        cin>>i;

        if (i==-1)
        {
            break;

        }
        mark.push_back(i);
}
        for(int i=0; i<mark.size();i++)
        {
            cout<<mark[i]<<endl;
        }
        sort(mark.begin(),mark.end());

        int c=0;
        for(int i=0;i<mark.size();i++)
        {

            if(mark[i]==mark[i+1])
                continue;
            for(int j=0;j<mark.size();j++)
            {
                if(mark[i]==mark[j])
                {

                }


            }
            cout<<mark[i]<<" "<<c<<endl;
            c=0;


        }





    return 0;
}
