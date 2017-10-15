#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    int a[1000][1000];
    int max=0;
    int routes[100]={0};
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        long x;
        long y;
        cin >> n >> m >> x >> y;
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            //making matrix
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(city_1==i && city_2==j)
                    {
                        a[i][j]=1;
                        a[j][i]=1;
                    }
                    else if(a[i][j]!=1)
                    {a[i][j]=0;}
                }
            }
            //no if routes to each city
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(a[i][j]==1)
                    {
                    routes[i]++;
                    }
                }
            }
            //most connected city
            for(int i=0;i<n;i++)
            {
               if(routes[i]>max)
               {
                   max=routes[i];
               }
            }
            //i+1


        }
        //no of connections

        /*for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }*/
    }


    return 0;
}
