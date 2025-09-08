#include <bits/stdc++.h>
using namespace std; //TC O(n + nlogn) sc O(1)

double shortestJobFirst(vector<int>& jobs) {
    int n = jobs.size();
    sort(jobs.begin(), jobs.end()); // SJF sorts by burst time
    
    int waitingTime = 0; 
    int totalWaitingTime = 0;

    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime;
        waitingTime += jobs[i];
    }

    return (double)totalWaitingTime / n; // average waiting time
}

int main() {
    vector<int> jobs = {6, 8, 7, 3};  // burst times
    cout << "Average Waiting Time: " << shortestJobFirst(jobs) << endl;
    return 0;
}
