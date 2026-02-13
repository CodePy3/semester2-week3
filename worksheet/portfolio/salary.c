
#include <stdio.h>
#include <math.h>

/*
 * Potrfolio submission
 * Name: Jonathan Monks
 * ID: 201968903
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);
   float salary = 36250;
   float NI = 0.08;
   float Tax = 0.15;

   float NIdeduction = salary*NI;
   float salaryMinusNI = salary-NIdeduction;

   float taxableSalary = (float)salaryMinusNI-12500;
   float taxContribution = taxableSalary*Tax;
   float TakeawaySalary = salaryMinusNI-taxContribution;
   
   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",NIdeduction);
   printf("Tax contribution £%.2f\n",taxContribution);
   printf("Take home salary £%.2f\n",TakeawaySalary);



    return 0;
 }