// COMMANDS USED IN EXAMPLE
// COMMAND+/+P DOES // BEFORE LINE

// ------------- FILE HEADER -------------
// Author ✅: Olyvia Marie Garcia
// Assignment ✅: 1
// Date ✅: 09/25/2025
// Citations:


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 1
// Participation ✅: 100% 
// Challenge ✅: 100%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 2
// Links (Optional):


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: Done
// B. OUTPUT ✅: Done
// C. CALCULATIONS ✅: Done
// D. LOGIC and ALGORITHMS ✅: Done
//    (Optional) flow chart link or file name:


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:
// (Optional) Additional tests count:


// ------------- CODE -------------
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int employee_id = 0;
    int hours_worked = 0;
    int usd_per_hour = 0;
    int federal_withholding_percent = 0;

    int gross_pay_usd = 0;
    double federal_tax_withholding_usd = 0.0;
    double net_pay_usd = 0.0;

    cout << "Welcome to my Weekly Payroll Program!!" << endl;
 
    cout << "Enter your employee ID number (numbers only): ";
    cin >> employee_id;

    cout << "Enter number of hours worked (whole numbers): "; 
    cin >> hours_worked;

    cout << "Enter the hourly rate: ";
    cin >> usd_per_hour;

    cout << "Enter the federal withholding rate: ";
    cin >> federal_withholding_percent;
    
    // DO CALCULATIONS

    gross_pay_usd = hours_worked * usd_per_hour;
    double decimal_withholding_percentage = federal_withholding_percent / 100.0;
    federal_tax_withholding_usd = gross_pay_usd * decimal_withholding_percentage;
    net_pay_usd = gross_pay_usd - federal_tax_withholding_usd;

    cout << "Your Payroll Summary:" << endl;

    cout << "Total Gross Pay: $" << gross_pay_usd << endl;

    cout << "Federal Tax Withholding: $" << federal_tax_withholding_usd << endl;

    cout << "Net Pay: $" << net_pay_usd << endl;

    cout << "Thank you for using my Weekly Payroll Program!!"
    return 0
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*
Program Name:
Weekly Payroll Program

Design:
A. INPUT
int employee_id = 0;
int hours_worked = 0;
int usd_per_hour = 0;
int federal_withholding_percent = 0;

B. OUTPUT
int gross_pay_usd = 0;
double federal_tax_withholding_usd = 0.0;
double net_pay_usd = 0.0;

C. CALCULATIONS
gross_pay_usd = hours_worked * usd_per_hour;
double decimal_withholding_percentage = federal_withholding_percent / 100.0; 
federal_tax_withholding_usd = gross_pay_usd * decimal_withholding_percentage;
net_pay_usd = gross_pay_usd - federal_tax_withholding_usd;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE "Welcome to my Weekly Payroll Program!!"

PROMPT "Enter your employee ID number (numbers only):"
INPUT employee_id

PROMPT "Enter number of hours worked (whole numbers):"
INPUT hours_worked

PROMPT "Enter the hourly rate:"
INPUT usd_per_hour

PROMPT "Enter the federal withholding rate:"
INPUT federal_withholding_percent

DO CALCULATIONS

MESSGAE "Your Payroll Summary:"

LABEL "Total Gross Pay: $"
DATA gross_pay_usd

LABEL "Federal Tax Withholdings: $"
DATA federal_tax_withholding_usd

LABEL "Net Pay: $"
DATA net_pay_usd

MESSAGE "THank you for using my Weekly Payroll Program!!"

SAMPLE RUNS
Copy from assignment document.

*/

