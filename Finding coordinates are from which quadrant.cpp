// EXPERIMENT - 3
// PALAK SONI
// ENTC - A3
// 24070123069
//Problem Statement: Write a program to find the given coordinates belong to which quadrant.


#include <iostream>
using namespace std;
int main(){
   
    int x,y;
    cout<<"Value of x is:"<<endl;
    cin>>x;
    cout<<"Value of y is:"<<endl;
    cin>>y;
    if (x>0 && y>0){
        cout<<"(x,y) is in 1st Quadrant"<<endl;
       }
       else if(x<0 && y>0){
       cout<<"(x,y) is in 2nd Quadrant"<<endl;  
       }
       else if(x<0 && y<0){
       cout<<"(x,y) is in 3rd Quadrant"<<endl;
       }
       else if(x>0 && y<0){
       cout<<"(x,y) is in 4th Quadrant"<<endl;
       }
       else if(x==0 && y==0){
       cout<<"(x,y) is on Origin"<<endl;
       }
       else if( y==0 && x!=0){
       cout<<"(x,y) is on x axis"<<endl;
      } else if( x==0 && y!=0){
       cout<<"(x,y) is on y axis"<<endl; 
}
return 0;
}


/*Output:
Value of x is: -12
Value of y is: -12
(x,y) is in 3rd Quadrant
*/
