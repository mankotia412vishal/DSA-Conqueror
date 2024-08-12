/*

On a web form, users are asked to enter dates
which come in as strings. Before storing them to
the database, they need to be converted to a
standard date format. Write a function to convert
the dates as described
Given a date string in the format. Day Month Year,
where:
• Day a string in the form "Ist, 2nd". 3rd, 21st
Zind, 23rd, 3151 and ef others are the numoe
* th, eg "4th" or *12th*
• Wonth is the first three letters of the trossh
language months, likean for January through
"Dec" for December
• Year is 4 digits ranging from 1900 to 2100
Convert the date string." Day Month Yoar" to the
date string " YVYY-MM-DD" in the format "4 digit
year - 2 digit month - 2 digt day
Example
ISt Mar 1974 - 1974-03.01
• 22nd Jan 2013 - 2013-01-22
• 7th Apr 1904 - 1904-04-07

Function Description
Complete the function preprocessDate in the
below.
preprocessDate has the following parameter(s
string dates(n): an array of date strings in th
format Day Month Year
Returns:
stringinj array of converted date strings
Constraints
• The values of Day: Month, and Year are restrict
the value ranges specified above.
• The given dates are guaranteed to be valid, so ,
error handling is necescary.
• Ians 10'
• Input Format for Custom Testing
• Sample Case 0
Sample Input o
STOIN
Function
10
10
20th Oct 2052
2052",
dates = [*20th Oct
"6th Jun 1933",
*26th May
1960",
*20th Sep 1958", *16th Mar

Sampie input u
STOIN
Function
10
dates 5170 na
10
20th Oct 2052
dates ["20th Oct
2052",
6th Jun 1933", *26th Hav
"bu"
*20th Sep 1958*, "16th, Mar
2868",
25th May 2912, 316th De.
2018",
6th. Jun 1933
- 4th Nov 2030",
"26ch Doc
Doth Jut
1963"
26th Hay 1960
20th Sep 1958
Hoth Har205
Loch May 1912
Joth Doc 2018
Loth Dec Dact
4Ch Noy 2920
28th d190
Sample Output o
4052-10-20
1933-06-06
1960-05-26
1998-09-20
2068-03-16
4912-05-25
401812-16
4001-12-26
2030-11-04
963-07-28

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

vector<string> reformatDate(vector<string> dates) {
    vector<string> outputDate;

    for (string tempStr : dates) {
        stringstream ss(tempStr);
        string day, month, year;
        ss >> day >> month >> year;

        // Remove the suffix from the day
        day = day.substr(0, day.size() - 2);

        // Convert month to numeric format
        string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int monthIndex = 0;
        for (int i = 0; i < 12; ++i) {
            if (months[i] == month) {
                monthIndex = i + 1; // Month index starts from 1
                break;
            }
        }

        // Convert year to numeric format
        year = year.substr(0, 4);

        // Format the date
        stringstream formattedDate;
        formattedDate << year << "-" << setw(2) << setfill('0') << monthIndex << "-" << setw(2) << setfill('0') << day;

        outputDate.push_back(formattedDate.str());
    }

    return outputDate;
}

int main() {
    int datesCount;
    cin >> datesCount;
    cin.ignore(); // Ignore the newline character

    vector<string> dates;
    for (int i = 0; i < datesCount; ++i) {
        string date;
        getline(cin, date);
        dates.push_back(date);
    }

    vector<string> result = reformatDate(dates);

    for (string date : result) {
        cout << date << endl;
    }

    return 0;
}
