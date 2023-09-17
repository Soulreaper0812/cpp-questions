#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<ceil(((float)abs(b-a)/(float)(2*c)))<<endl;
    }
}