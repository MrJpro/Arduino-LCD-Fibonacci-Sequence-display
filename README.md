# Arduino-LCD-Fibonacci-Sequence-display
This code will display the Fibonacci sequence up to the 47th term. 
I am using a 4 byte unsigned long to hold the Fibonacci value. This limits the maximum number that can be calculated before it overflows.
In this case 4-bytes can display 2^32 - 1 or 4,294,967,295, while the 48th Fibonacci term is 4,807,526,976.
Therefore, the code resets and loops through the fisrt 47 terms.
