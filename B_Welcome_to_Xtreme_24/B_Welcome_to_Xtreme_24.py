    
full_string="IEEEXtreme24"

missing_string=input()

for i in range(len(missing_string)):
    if(missing_string[i]=="_"):
        print(full_string[i], end="")