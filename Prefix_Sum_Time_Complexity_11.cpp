#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;



//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y;


int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n+1); //As the array index will start from 1 so the array has to be n+1 as index starts from 0 so if n==3 that means is has idex from 0 to 2;

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> prefix(n+1);

    prefix[1] = v[1];

    for(int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + v[i];
    }



    while(q--) // This loop will run until q==0; q-- [post decrement] means it will run first and than decrease the value; --q [pre decrement] means it will decrease the value first than the loop will execute;
    {
        int l, r;
        cin >> l >> r;

        long long int sum = 0;

        if(l == 1)
        {
            sum = prefix[r];
        }
        else 
        {
            sum = prefix[r] - prefix[l-1];
        }
        

        // for(int i = l; i <= r; i++)
        // {
        //     sum += v[i];
        // }

        cout << sum << endl;
 
    }    

    return 0;
}

