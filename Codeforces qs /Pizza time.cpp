/*A. Pizza Time
time limit per test1 second
memory limit per test256 megabytes

Hao and Alex are good friends. After winning a coding competition together, they received a huge pizza as their prize.

Initially, they are given 𝑛
 slices of pizza. Each day, the following process takes place:

If there are at most 2
 slices remaining, Alex eats all of them.
Otherwise, let 𝑚
 be the current number of slices (𝑚≥3
). Hao splits them into three groups of sizes 𝑚1
, 𝑚2
, and 𝑚3
 such that:
𝑚1+𝑚2+𝑚3=𝑚 and 1≤𝑚1≤𝑚2≤𝑚3. 

Then:

Hao eats 𝑚1
 slices (the smallest group).
Alex eats 𝑚2
 slices (the middle group).
The remaining 𝑚3
 slices (the largest group) are carried over to the next day.
Your task is to determine the maximum total number of slices Hao can eat if he always chooses the partition optimally.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡
 (1≤𝑡≤500
). The description of the test cases follows.

The first and only line of each test case contains a single integer 𝑛
 (3≤𝑛≤109
) — the initial number of pizza slices.

Note that there are no constraints on the sum of 𝑛
 over all test cases.

Output
For each test case, output a single integer representing the maximum total number of slices Hao can eat.

Example
InputCopy
3
8
4
3
OutputCopy
3
1
1
Note
In the first test case, Hao can eat 3
 slices as follows:

Split into 𝑚1=2
, 𝑚2=3
, and 𝑚3=3
. Hao eats 2
 slices, Alex eats 3
 slices, and the remaining 3
 slices are carried over to the next day.
Split into 𝑚1=1
, 𝑚2=1
, and 𝑚3=1
. Hao eats 1
 slice, Alex eats 1
 slice, and the remaining 1
 slice is carried over to the next day.
Only 1
 slice remains, so Alex eats it.
In the second test case, Hao can eat 1
 slice as follows:

Split into 𝑚1=1
, 𝑚2=1
, and 𝑚3=2
. Hao eats 1
 slice, Alex eats 1
 slice, and the remaining 2
 slices are carried over to the next day. */

solution..
  #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (n + 1) / 3 << "\n";
    }
    return 0;
}

Only 2
 slices remain, so Alex eats them all.
