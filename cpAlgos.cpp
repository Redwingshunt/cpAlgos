#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x) {
    int p1 = 0, p2 = arr.size() - 1;
    pair<int, int> ans = {-1, -1};
    int closest = INT_MIN;

    while (p1 < p2) {
        int sum = arr[p1] + arr[p2];

        if (sum > x) {
            p2--;
        } else {
            if (sum > closest) {
                closest = sum;
                ans = {arr[p1], arr[p2]}; // store the indices of best sum so far
            }
            p1++;
        }
    }

    return ans;
}


int main(){

    vector<int> array1 ={-2, 4,21,23,49, 51,67,89};
    int  value1 = 45;
    pair<int, int> result = closestSum(array1, value1);
    cout << "Pair with closest sum <= " << value1 << " is: ";
    cout << "(" << result.first << ", " << result.second << ")" << endl;
    return 0 ;
}
