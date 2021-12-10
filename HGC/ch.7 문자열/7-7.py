number1 = input()
number2 = input()

number1 = int(number1[::-1])
number2 = int(number2[::-1])

if number1 < number2:
    print(number2)
else:
    print(number1)