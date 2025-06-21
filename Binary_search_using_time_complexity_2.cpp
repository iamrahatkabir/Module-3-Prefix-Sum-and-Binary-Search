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


/*
Z. Binary Search 
time limit per test: 1 second®
memory limit per test: 256 megabytes

Given 2 numbers N and Q, array A of N numbers and Q queries each one contains a number X.
For each query print a single line that contains "found" if the number X exists in array A otherwise, print "not found".

Input
First line contains two numbers N, Q (1 ≤ N, Q ≤ 105).
Second line contains N numbers (1 ≤ A, ≤ 10").
Next Q lines contains X (1 ≤ X ≤ 10").

Output
Print the answer for each query in a single line.


input:
6
10 14 16 18 20 24
20

output:
"Found"

*/



int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int value;
    cin >> value;

    int flag = 0;


    //Array must has to be sorted to implement Binary Search;
    //Binary Search using o(logN);

    sort(a,a+n);

    int l = 0;
    int r = n-1;

    while(l <= r)
    {
        int mid = (l+r)/2; //finding the middle index to do binary search if A[MID] is grater(>) than VALUE we will ignore right hand side values of MID index & if A[MID] is less(<) than value we will ignore the left hand side values of MID index;
        if(a[mid] == value)
        {
            flag = 1;
            break;
        }
        else if(a[mid] > value)
        {
            r = mid-1; //Changing the index of r and moving it backword if a[mid] is grater(>) than Value
        }
        else if(a[mid] < value)
        {
            l = mid+1; //Changing the index of r and moving it forword if a[mid] is less(<) than Value;
        }

    }







    //Using Linear algorithm ;
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] == value)
    //     {
    //         flag = 1;
    //     }
    // }



    if(flag == 1)
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}