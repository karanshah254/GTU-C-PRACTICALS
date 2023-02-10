/*

Define structure data type called time_struct containing three member’s 
integer hour, integer minute and integer second. Develop a program that would 
assign values to the individual number and display the time in the following format: hour:minute:second



*/

#include <stdio.h> 

struct time_struct 
{ 
    int hour; 
    int minute; 
    int second; 
}; 

int main() 
{ 
    struct time_struct time; 

    // Assigning values to the structure members 
    time.hour = 11; 
    time.minute = 59; 
    time.second = 59; 

    // Displaying the structure members 
    printf("Time is: %d:%d:%d", time.hour, time.minute, time.second); 

    return 0; 
}