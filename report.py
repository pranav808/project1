# accept the marks of three subject
a=int(input("Enter marks of physic :-"))
b=int(input("Enter marks of chemistry :- "))
c=int(input("Enter marks of maths :-"))
# check whether it is pass or not
if a<35:print("fail")
elif b<35:print("fail")
elif c<35:print("fail")
else:print("pass")
#
if "pass":
    avg=(a+b+c)/3
    print(avg)