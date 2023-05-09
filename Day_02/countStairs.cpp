#include <iostream>
using namespace std;

int countDistanceToStair(long long nstairs)
{

    // base case;
    if (nstairs < 0)
        return 0;

    if (nstairs == 0)
        return 1;

    //  recursive call ;

    int ans = countDistanceToStair(nstairs - 1) + countDistanceToStair(nstairs - 2);

    return ans;
}
int main()
{

    return 0;
}
