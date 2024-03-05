#include <iostream>

using namespace std;

void getMark (int *courses, int numberCourses)
{
    for (int count = 0; count < numberCourses; count++) {
        cout << "Enter the mark of course # " << count << ": ";
        cin >> courses[count];
        }
}

int calculateMark (const int *courses, int numberCourses)
{
    int totalMark = 0;
    for (int count = 0; count < numberCourses; count++)
        totalMark += courses[count];
    return totalMark;
}

int main(int argc, char *argv[])
{
    int numberCourses;
    cout << "Enter the number of courses: ";
    cin >> numberCourses;
    int *courses;
    courses = new int[numberCourses];
    getMark (courses, numberCourses);
    int totalMark = calculateMark (courses, numberCourses);
    cout << "Total mark: " << totalMark << endl;
    delete courses;
    return 0;
}
