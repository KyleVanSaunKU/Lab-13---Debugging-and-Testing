#include <iostream>
#include <vector>

using namespace std;

// heres the implementation of the sudo code given in the Lab13_instruction pdf
bool fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    
    for (int i = 1; i < attendance_records.size(); ++i) {
        absent_count += (attendance_records[i] == 0); 
    }
    return absent_count >= 3;
}

// an example main which shows that a student can miss 3 classes but still pass because the first classes attendance doesnt count
int main() {
  
    vector<int> student_attendance = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    cout << "1 = Fail, 0 = Pass: " << endl;
    cout << fail_lecture(student_attendance) << endl;
    
    return 0;
}
