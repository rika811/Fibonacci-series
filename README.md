# Fibonacci series of a number using C

The Fibonacci series is a sequence of numbers in which each can be generated by adding up the previous two numbers. The first six numbers in the Fibonacci series are 0, 1, 1, 2, 3, 5, and 8. 

## Algorithm-

```

Procedure Iterative_Fibonacci(n):
    int f0, f1, fib
    f0 = 0
    f1 = 1
    display f0, f1
    for int i := 1 to n:
        fib := f0 + f1   
        f0 := f1
        f1 := fib
        display fib
    END for loop
END Iterative_Fibonacci

```
