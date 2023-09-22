#include<iostream>
using namespace std;

int main () {
  float annualSalary ;
  cout << "Enter you annual Salary\n";
  cin >> annualSalary;
  float monthlySalary = annualSalary / 12;

  cout << "Your monthly salary is " << monthlySalary << endl;
  cout << "Your salary in 10 years will be " << annualSalary * 10;
  
  return 0;
}