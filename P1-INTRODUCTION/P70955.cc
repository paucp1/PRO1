#include <iostream>
using namespace std;

int main () {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    int seg_year = 365*24*60*60;
    int seg_day = 24*60*60;
    int seg_hour = 60*60;
    int seg_minute = 60;
    cout << (y*seg_year)+(d*seg_day)+(h*seg_hour)+(m*seg_minute)+(s) << endl;
}
