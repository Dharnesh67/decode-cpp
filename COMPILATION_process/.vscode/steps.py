def steps(number):
  if number <=0:
    raise ValueError
  b=0
  while number!=1:
    
    if number%2==0:
      number = number / 2
      b+=1
    else:
      number = (3*(number))+1
      b+=1
    
  return b