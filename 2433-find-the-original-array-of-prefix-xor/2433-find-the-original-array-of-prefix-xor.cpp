class Solution {
public:
       vector<int> findArray(vector<int>& A) {
        for (int i = A.size() - 1; i > 0; --i)
            A[i] ^= A[i - 1];
        return A;
    }
};


/*
In C++, the bitwise XOR operator `^` is used to perform the bitwise XOR operation on two operands. It compares the corresponding bits of two integers and produces a new integer where each bit is set to 1 if the corresponding bits in the operands are different, and 0 otherwise.

Here's the syntax for using the bitwise XOR operator in C++:

```cpp
result = operand1 ^ operand2;
```

The `operand1` and `operand2` can be any integer type, such as `int`, `unsigned int`, `char`, etc. The operator `^` acts on each bit position independently.

To understand how the bitwise XOR works, let's consider an example where we perform XOR operation on two integers, 5 (binary: 101) and 3 (binary: 011):

```cpp
int operand1 = 5; // Binary: 101
int operand2 = 3; // Binary: 011
int result = operand1 ^ operand2;
```

The bitwise XOR operation will be performed as follows:

```
   101  (operand1)
^  011  (operand2)
---------
   110  (result)
```

The resulting binary number is 110, which represents the decimal value 6. Therefore, in this example, the value of `result` will be 6.

It's important to note that the bitwise XOR operator `^` can also be used as an assignment operator to perform an in-place XOR operation:

```cpp
operand1 ^= operand2; // Equivalent to: operand1 = operand1 ^ operand2;
```

This is a shorthand notation for performing the XOR operation between `operand1` and `operand2` and storing the result back in `operand1`.

Overall, the bitwise XOR operator `^` in C++ is a useful tool for performing bitwise operations on integers, manipulating individual bits, and comparing bits between two numbers.





*/