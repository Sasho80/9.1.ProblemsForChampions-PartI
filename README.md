02.Problem: Magic Dates
Date is given in a "dd-mm-yyyy" format, e.g. 17-04-2018. We calculate the weight of that date by 
taking all of its digits, multiplying each digit with the others after it, and finally summing up all the 
results obtained. In our case, we have 8 digits: 17032007, so the weight is 1*7 + 1*0 + 1*3 + 1*2
+ 1*0 + 1*0 + 1*7 + 7*0 + 7*3 + 7*2 + 7*0 + 7*0 + 7*7 + 0*3 + 0*2 + 0*0 + 0*0 +
0*7 + 3*2 + 3*0 + 3*0 + 3*7 + 2*0 + 2*0 + 2*7 + 0*0 + 0*7 + 0*7 = 144.
Our task is to write a program that finds all the magical dates between two specific years (inclusively) 
corresponding to given weight. Dates must be printed in ascending order (by date) in the format "ddmm-yyyy". We will only use the valid dates in the traditional calendar (the leap years have 29 days in 
February).
Sample Input and Output
![image](https://github.com/Sasho80/9.1.ProblemsForChampions-PartI/assets/7139995/fe3972a6-df6d-45af-b2e3-c8144ce320a1)
Input Data
Input data should be read from the console. It consists of 3 lines:
• The first line contains an integer: start year.
• The second line contains an integer: end year.
• The third line contains an integer: the search weight for the dates.
Input data will always be valid and will always be in the format described. No need to check.
Output Data
The result should be printed on the console as consecutive dates in "dd-mm-yyyy" format, sorted by 
date in ascending order. Each string must be in a separate line. If there are no existing magic dates, 
print "No".
Constraints
• The start and final year are integer numbers in the range [1900 … 2100].
• Magic weight is an integer in the range [1 … 1000].
• Allowed program time: 0.25 seconds.
• Allowed memory: 16 MB.

03.Problem: Five Special Letters
Two numbers are given: start and end. Write a program that generates all combinations of 5 letters, 
each among the sets of {'a', 'b', 'c', 'd', 'e'} so that the weight of these 5 letters is a 
number in the range [start … end], inclusive. Print them in alphabetical order, in a single row, 
separated by a space. The weight of the letters is calculated as follows:
weight('a') = 5;
weight('b') = -12;
weight('c') = 47;
weight('d') = 7;
weight('e') = -32;
The weight of the sequence of the letters c1, c2, …, cn is calculated by removing all the letters 
that are repeated (from right to left) and then calculating the formula:
weight(c1c2…cn) = 1 * weight(c1) + 2 * weight(c2) + … + n * weight(cn)
For example, the weight of bcddc is calculated as follows:
First, we remove the repeating letters and get bcd. Then we apply the formula: 1 * weight('b') +
2 * weight('c') + 3 * weight('d') = 1 * (-12) + 2 * 47 + 3 * 7 = 103.
Another example: weight("cadae") = weight("cade") = 1 * 47 + 2 * 5 + 3 * 7 + 4 *
(-32) = -50.
Input Data
The input data is read from the console. It consists of two numbers:
• The number for start.
• The number for end.
Input data will always be valid and will always be in the format described. No need to check.
Output Data
The result should be printed on the console as a sequence of strings, arranged in alphabetical order. 
Each string must be separated from the next one by a single space. If the weight of any of the 5 letter 
strings does not exist within the specified range, print "No".
Constraints
• Numbers for start and end are integers in the range [-10000 … 10000].
• Allowed program time: 0.25 seconds.
• Allowed memory: 16 MB.
Sample Input and Output
![image](https://github.com/Sasho80/9.1.ProblemsForChampions-PartI/assets/7139995/be389d30-3618-43b0-b833-5f117986a893)


