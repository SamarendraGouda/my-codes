def add(a, b):
    return a+b
def subtract(a, b):
    return a-b
def multiply(a, b):
    return a*b
def divide(a, b):
    return a/b
def power(a, b):
    return a**b
def remainder(a, b):
    return a%b

if __name__=="__main__":
    import sys
    arguements = sys.argv
    operations = ["-a", "-m", "-s", "-d", "-p", "-r"]
    if arguements[1] not in operations:
        print("myCalculate.py is a basic calculator for performing add, subtract...")
        print("Usage: python myCalculate.py <operation> <number> <number>")
        print("Available operations:")
        print("-a: add")
        print("-s: subtract")
        print("-m: multiply")
        exit()
        
    if len(arguements)!=4:
        print("Wrong Usage")
        print("Please check the correct usage using:")
        print("python myCalculate.py -h")
        exit()
    
    try:
        arg1 = float(arguements[2])
    except ValueError:
        print("arguements after operation should be real numbers")
        exit()
        
    try:
        arg2 = float(arguements[3])
    except ValueError:
        print("arguements after operation should be real numbers")
        exit()
    
    if arguements[1]=="-a":
        print(add(float(arguements[2]), float(arguements[3])))
    elif arguements[1]=="-m":
        print(multiply(float(arguements[2]), float(arguements[3])))
    elif arguements[1]=="-s":
        print(subtract(float(arguements[2]), float(arguements[3])))
    elif arguements[1]=="-d":
        print(divide(float(arguements[2]), float(arguements[3])))
    elif arguements[1]=="-p":
        print(power(float(arguements[2]), float(arguements[3])))
    elif arguements[1]=="-r":
        print(remainder(float(arguements[2]), float(arguements[3])))    