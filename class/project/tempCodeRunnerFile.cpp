#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Order {
    string id;
    double x, y;
    bool visited = false;
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int n;

    cout << "Enter number of orders: ";
    cin >> n;

    vector<Order> orders(n);

    for (int i = 0; i < n; i++) {
        cout << "\nOrder " << i + 1 << endl;

        cout << "ID: ";
        cin >> orders[i].id;

        cout << "X: ";
        cin >> orders[i].x;

        cout << "Y: ";
        cin >> orders[i].y;
    }

    double driverX, driverY;

    cout << "\nDriver starting X: ";
    cin >> driverX;

    cout << "Driver starting Y: ";
    cin >> driverY;

    double totalDistance = 0;

    cout << "\nRoute:\n";

    for (int step = 0; step < n; step++) {

        int nearest = -1;
        double minDist = 1e9;

        for (int i = 0; i < n; i++) {

            if (!orders[i].visited) {

                double d = distance(
                    driverX,
                    driverY,
                    orders[i].x,
                    orders[i].y
                );

                if (d < minDist) {
                    minDist = d;
                    nearest = i;
                }
            }
        }

        orders[nearest].visited = true;

        cout << orders[nearest].id;

        if (step != n - 1)
            cout << " -> ";

        totalDistance += minDist;

        driverX = orders[nearest].x;
        driverY = orders[nearest].y;
    }

    cout << "\n\nTotal Distance = "
         << totalDistance << endl;

    return 0;
}