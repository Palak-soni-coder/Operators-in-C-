// EXPERIMENT - 3
// Palak Soni
// 24070123069
// ENTC-A3
//Problem Statement: Write a code to find whether a given number is positve , negative or zero.

#include <iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter a number:"<<endl;
  cin>>number;
  if(number>0){
      cout<<" The number is positive" <<endl;
  } else if (number<0){
      cout<<"The number is negative" << endl;
}else {
    cout<<"The number is 0"<<endl;
}
  return 0;
}


/*Output-
Enter a number: -98
The number is negative
*/
