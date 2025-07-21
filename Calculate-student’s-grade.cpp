// EXPERIMENT - 3B
// PALAK SONI
// 24070123069
// ENTC - A3
//Problem Statement- Write a program to calculate grade of a student based on his/her marks.


#include<iostream>
using namespace std;

int main(){
    int m1, m2, m3, m4, m5;
    float average;

    cout << "Enter marks of subject 1:" << endl;
    cin >> m1;
    cout << "Enter marks of subject 2:" << endl;
    cin >> m2;
    cout << "Enter marks of subject 3:" << endl;
    cin >> m3;
    cout << "Enter marks of subject 4:" << endl;
    cin >> m4;
    cout << "Enter marks of subject 5:" << endl;
    cin >> m5;

    average = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout << "Average: " << average << endl;

    if (average > 90 && average <= 100){
        cout << "The grade is: O" << endl;
    }
    else if (average > 80 && average <= 90){
        cout << "The grade is: A" << endl;
    }
    else if (average > 70 && average <= 80){
        cout << "The grade is: B" << endl;
    }
    else if (average > 60 && average <= 70){
        cout << "The grade is: C" << endl;
    }
    else if (average > 50 && average <= 60){
        cout << "The grade is: D" << endl;
    }
    else if (average > 40 && average <= 50){
        cout << "The grade is: E" << endl;
    }
    else{
        cout << "FAIL" << endl;
    }

    return 0;
}


/*Output - 
SampleOutput Enter marks of subject 1: 56
Enter marks of subject 2: 78
Enter marks of subject 3: 98
Enter marks of subject 4: 65
Enter marks of subject 5: 45
Average: 68.4
The grade is: C
*/
