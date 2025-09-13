// hackerrank
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
        long long total = 0;
        for( int val : arr) total += val;
        int min = *min_element(arr.begin(), arr.end());
        int max =  *max_element(arr.begin(), arr.end());
        cout<<total-max<<" "<<total-min;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

