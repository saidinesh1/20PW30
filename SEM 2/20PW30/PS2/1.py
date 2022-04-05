for i in range(1,100):
    if i%3==0 and i%5==0:
           print("FizzBuzz-",format(i))
    elif i%5==0:
           print("buzz-",format(i))
    elif i%3==0:
           print("Fizz-",format(i))
    else:
        print(i)
