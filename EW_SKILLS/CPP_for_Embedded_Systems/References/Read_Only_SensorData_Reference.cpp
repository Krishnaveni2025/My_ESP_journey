/*
5. Read-Only SensorData Reference
You are given a struct SensorData containing three integer fields: x, y, and z.

You are also given a global pointer:

const int* ptr = nullptr;
Write a function print_data that:

Accepts a SensorData object without copying it
Enforces read-only access at compile time
Ensures that attempting to modify the object inside the function (e.g. d.x = 99) results in a compilation error
Prints the values in the format:
x y z (space-separated, single line)
Stores the address of x in ptr without violating const-correctness
You must write only the correct function parameter signature and implementation.

 

Example 

Input:

3 4 5
Output:

3 4 5
 

Constraints:

Copying the SensorData struct is not allowed
Read-only access must be enforced by the C++ type system
The following line, if uncommented inside print_data, must not compile:
d.x = 99;
The pointer ptr must point to the original data.x after the function call
 */
