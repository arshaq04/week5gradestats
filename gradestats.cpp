#include <iostream>
#include <vector>

using namespace std;

int main() {
     vector<int> grades;
     for (int i = 0; i <= 100; i++) { //assume there is a max of 100 grades
         int x; 
         cout << "Enter grade (or -1 to end): ";
         cin >> x; // read int x intered
         
         if (x == -1) {  // if -1 typed in then exit loop
             break;
         }
         grades.push_back(x); // push one element into the array
     }
     int sum = 0;
     for (int i : grades) {
         sum += i; // int sum to add up all integer elements in the array
     }
     cout << "Average: " << (sum / grades.size()) << endl;
     // to calculate average we can do sum divided by how elements are in the array
    return 0;
}