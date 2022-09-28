def printPlanDetails(d,e,n):
    costA, costB = 0, 0
    if(d>100):
        costA = float((d-100)*0.25) + float(e*0.15) + float(n*0.20)
    else:
        costA = float(e*0.15) + float(n*0.20)
    
    if(d>250):
        costB = float(d-250)*0.45 + float(e*0.35) + float(n*0.25) 
    else:
        costB = float(e*0.35) + float(n*0.25)
    
    costA, costB = round(costA,2), round(costB,2)
    print("Plan A costs %.2f"%costA)
    print("Plan B costs %.2f"%costB)
    
    if(costA<costB):
        print("Plan A is cheapest")
    elif(costB<costA):
        print("Plan B is cheapest")
    else:
        print("Plan A and B are the same price")


d = int(input())
e = int(input())
n = int(input())

printPlanDetails(d,e,n)
