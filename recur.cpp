#include <iostream>

using namespace std;

int reverse(int);
int sum = 0, rem = 0;

int main(){
   int num;

   cout << "Enter any number: " << endl;
   cin >> num;

   cout << "The reversed number is: " << reverse(num) << endl;
   return 0;
}


int reverse(int num){
 
   if(num){
      rem = num%10;
      sum = (sum*10) + rem;
      reverse(num/10);
   }
   else
      return sum;
 
}
