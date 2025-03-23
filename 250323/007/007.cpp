#include <iostream>
#include <string>

using namespace std;

struct MeetingInfo {
    string secret_code;
    char meeting_point;
    int time;
};

int main() {
    MeetingInfo info;

    // 입력받기
    cin >> info.secret_code >> info.meeting_point >> info.time;

    // 출력
    cout << "secret code: " << info.secret_code << endl;
    cout << "meeting point: " << info.meeting_point << endl;
    cout << "time: " << info.time << endl;

    return 0;
}
