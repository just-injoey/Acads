# first year student - pink ticket
# second year student - green ticket
# third year student - Red ticket
# fourth year student - Orange ticket
pinkticket = int(input())
greenticket = int(input())
redticket = int(input())
orangeticket = int(input())
moneyraised = int(input())
count = 0
minimum = 0
for pt in range(0,moneyraised//pinkticket + 1):
    for gt in range(0,moneyraised//greenticket + 1):
        for rt in range(0,moneyraised//redticket + 1):
            for ot in range(0,moneyraised//orangeticket + 1):
                if(((pt*pinkticket)+(gt*greenticket)+(rt*redticket)+(ot*orangeticket))==moneyraised):
                    count+=1
                    if(pt+gt+rt+ot)<minimum or minimum==0:
                        minimum=pt+gt+rt+ot
            
                    print(f"# of PINK is {pt} # of GREEN is {gt} # of RED is {rt} # of ORANGE is {ot}")
print("Total combinations is ",count)
print("Minimum number of tickets to print is ",minimum)
