# accept the marks of three subject
a=int(input("Enter marks of physic :-"))
b=int(input("Enter marks of chemistry :- "))
c=int(input("Enter marks of maths :-"))
# check whether it is pass or not
res ="None"
if a<35: res="Fail"
elif b<35:res='Fail'
elif c<35:res='Fail'
else:res= 'Pass'
#next proccess
if res == 'Fail':
  print('You are Failed')
  print("***best of luck (for next time)***")
  exit()
elif res == 'Pass':
  avg=(a+b+c)/3
  print(avg)
  name=input('enter your name ')
  print('your name is   ', name)
  print("congratulation ")
#check a suitable  grade
if avg>90:
    print("grade A")
elif avg>70:
    print("grade B")
elif avg>50:
    print("grade C")
