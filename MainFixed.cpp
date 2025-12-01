#include <iostream>
#include <vector>

using namespace std;

// the fixed implementation of the sudo code given in the Lab13_instruction pdf
bool fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    
    for (int i = 0; i < attendance_records.size(); ++i) {
        absent_count += (attendance_records[i] == 0); 
    }
    return absent_count >= 3;
}

// the same example main which uses the fixed fail lecture function
int main() {
  
    vector<int> student_attendance = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    cout << "1 = Fail, 0 = Pass: " << endl;
    cout << fail_lecture(student_attendance) << endl;
    
    return 0;
}