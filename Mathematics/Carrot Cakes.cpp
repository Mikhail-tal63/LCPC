#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time_one_oven = ((n + k - 1) / k) * t;

    int cakes_during_build = (d / t) * k;
    if (cakes_during_build >= n) {
        cout << "NO";
        return 0;
    }


    int cakes_left = n - cakes_during_build;

    int batches_needed_after = (cakes_left + 2*k - 1) / (2*k);
    int total_time_two = d + batches_needed_after * t;

    if (total_time_two < time_one_oven) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}