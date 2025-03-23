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
    cout << "비밀 코드: " << info.secret_code << endl;
    cout << "접선 장소: " << info.meeting_point << endl;
    cout << "시간: " << info.time << endl;

    return 0;
}
