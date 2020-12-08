#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cases = 0;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        char str[5];
        scanf("%d %s", &n, str);
        if(str[0] == 'A')
        {
            if(n % 3 == 1)
                printf("Case %d: Bob\n", ++cases);
            else
                printf("Case %d: Alice\n", ++cases);
        }
        else
        {
            if(n % 3 == 0)
                printf("Case %d: Alice\n", ++cases);
            else
                printf("Case %d: Bob\n", ++cases);
        }
    }
    return 0;
}
