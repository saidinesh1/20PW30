list = [5, 12, 17, 18, 24, 32]

def myFunc(x):
  if x > 10:
    return True
  else:
    return False

list1 = filter(myFunc, list)

for x in list1:
  print(x)