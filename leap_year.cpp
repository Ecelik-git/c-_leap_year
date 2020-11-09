#include <iostream>
using namespace std;
int main() {
  int year;
  cout<<"Enter a year: "; //we need to check if it is 4 digit year
  cin>>year;
  if ((year>999) && (year <10000)){
      if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0) {
          cout<<year<<" is a leap year.\n";
      }else{
          cout<<year<<" is not a leap year.\n";
      }
  }else{
      cout<<"Enter a 4 digit year";
  }
}
