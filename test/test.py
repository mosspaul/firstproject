# Some python code to check a c++ implementation of a loop

def main():
    target = 0
    increment = 5
    doIncrement = True

    while True:
        if doIncrement == True:
            target += increment
            print(target)
            if target == 100:
                doIncrement = False
        if doIncrement == False:
            target -= increment
            print(target)
            if target == 0:
                doIncrement = True
        
main()
    