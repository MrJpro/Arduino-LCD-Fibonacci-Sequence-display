# Arduino-LCD-Fibonacci-Sequence-display
This code will display the Fibonacci sequence up to the 47th term. 
I am using a 4-byte unsigned long to hold the Fibonacci value. This limits the maximum number that can be calculated before it overflows.
In this case 4-bytes can display (2^32) - 1 or 4,294,967,295, while the 48th Fibonacci term is 4,807,526,976.
Therefore, the code resets and loops through the first 47 terms.

___________________________________

This was done using an Arduino Uno Rev3 with a LCD.
![scematic](https://user-images.githubusercontent.com/96927169/210183678-c52b3ead-e104-4d9c-b431-e46a85e28684.png)
![IMG_20230101_121837255](https://user-images.githubusercontent.com/96927169/210183681-02c30871-6d09-4d7c-8256-a834a26a1ddb.jpg)
![IMG_20230101_121854864](https://user-images.githubusercontent.com/96927169/210183683-5a3dbe1c-cff9-4e82-b916-8aec0f24df27.jpg)
