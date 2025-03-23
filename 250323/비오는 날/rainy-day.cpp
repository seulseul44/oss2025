#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    // Find the earliest date when it will rain
    string rain_date, rain_day;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (weather[i] == "Rain") {
            if (!found || date[i] < rain_date) {
                rain_date = date[i];
                rain_day = day[i];
                found = true;
            }
        }
    }

    if (found) {
        cout << rain_date << " " << rain_day << " Rain" << endl;
    }

    return 0;
}
