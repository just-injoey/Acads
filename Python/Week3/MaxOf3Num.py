# You are using Python
def fun(x,y,z):
    if(x>y and x>z):
        print(x)
        return
    elif(y>z):
        print(y)
        return
    else:
        print(z)
        return
a,b,c = map(int, input().split(','))
fun(a,b,c)
