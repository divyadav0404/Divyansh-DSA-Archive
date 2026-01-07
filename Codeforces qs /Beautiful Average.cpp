/*
You are given an array 𝑎 of length 𝑛.

Your task is to find the maximum possible average value of any subarray∗ of the array 𝑎.

Formally, for any indices 𝑙,𝑟 such that 1≤𝑙≤𝑟≤𝑛, define the average of the subarray 𝑎𝑙,𝑎𝑙+1,…,𝑎𝑟 as the sum of elements divided by the number of elements or:
𝚊𝚟𝚐(𝑙,𝑟)=1𝑟−𝑙+1∑𝑖=𝑙𝑟𝑎𝑖
Output the maximum value of 𝚊𝚟𝚐(𝑙,𝑟) over all choices of 𝑙,𝑟.

∗An array 𝑏 is a subarray of an array 𝑎 if 𝑏 can be obtained from 𝑎 by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end. In particular, an array is a subarray of itself.
*/

sols is -
  #include <bits/stdc++.h>
using namespace std;
int main ()
{
int t;
cin >> t;
while (t--)
{
int n ;
cin>> n ;
int mx = 0;
for ( int i = 0 ;  i < n ; i++)
{
int x ; 
cin >> x;
mx = max ( mx , x ) ;
 
 
}
cout << mx << '\n' ;
}
return 0; //simply return the max single el of array which in itself would be the max avg of subarray.
 
}
