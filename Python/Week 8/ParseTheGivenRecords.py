

n = int(input())
inputR = []  #list of input records
lst = []
# subLst = []

for i in range(n):
    inputR.append(input())
    
for i in range(n):
    # print(lst)
    
    line = inputR[i]
    subLst = line.split("^")
    regno = subLst[0]
    
    
    #checking regNum in lst
    isNumPresent = False
    idxRegnum =0
    for sublst in lst:
        if regno in sublst:
            idxRegnum = lst.index(sublst)
            isNumPresent = True
            break
    if(isNumPresent==False):
        #RegNum
        if(line[0]=='7' and line[12]=='^'):
            lst.append([line[0:12],"","",""])
        #name
        for item in subLst:
            if(item[0].isalpha()):
                lst[i][1] = item
                break
        
        #City
        for item in subLst:
            if(item[0]=="#"):
                lst[i][2] = item
                break
              
        #number 
        for char in line[13:]:
            if char.isnumeric():
                lst[i][3] += char
        
    else: #RegNum already present
        #city
        for item in subLst:
            if(item[0]=="#"):
                lst[idxRegnum][2] = item
                break
        #name
        for item in subLst:
            if(item[0].isalpha()):
                lst[idxRegnum][1] = item
                break
        #number
        for char in line[13:]:
            if char.isnumeric():
                lst[idxRegnum][3]+= char

##Validating entries

for i in range(len(lst)):
    record = lst[i]
    flag = 0
    for j in range(4):
        if record[j]=="":
            record[j]="null"
        #validating number
        else:
            if(flag==0):
                number = record[3]
                validFirstDigit = [7,8,9]
                if(len(number)!=10 or number[0]=='5'):
                    record[3] = "null"
                flag = 1

#sort lst
lst.sort(key = lambda x:x[0])

# dispaly lst
for i in range(len(lst)):
    for j in range(4):
        print(lst[i][j], end="    ")
    print()
    


