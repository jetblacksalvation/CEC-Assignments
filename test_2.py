import random




def monster():
    i = random.randint(0,100)
    if i <=20:
        print("zombie")
    elif i<=30:
        print("witch")
    elif i <=60:
        print("skeleton")
    elif i >=61:
        print("spider")
def avr(val1,val2):
    return (val1+val2)/2

print("how mush do you have?")
num1 = int(input())
if num1 <50:
    print("ILL BU y lumsh")
elif num1 >=50 and num1 <= 100:
    print("do you want to join me for lunsh")

elif num1 > 101:
    print("but me lunch")


#for loop 
for i in range(3,33,5):
    print(i)
for i in range(100,50, -2):
    print(i)


char = 1
while char != 0:
    print("stops if you say q")
    char = int(input())
    
    print(int(char)**2)
monster()
print(avr(int(input()),int(input())))


