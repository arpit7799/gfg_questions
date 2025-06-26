#User function Template for python3

def fizzBuzz(number):
    # Write your code here.
    a = "FizzBuzz"
    b = "Fizz"
    c =  "Buzz"
    if number%3==0 and number%5==0:
        print(a)
    elif number%3==0:
        print(b)
    elif number%5==0:
        print(c)
    else:
        print(number)