# Some python code to check a c++ implementation of a loop

def main():
    target = 0.00
    increment = 0.05

    while target <= 1:
        print(target)
        target = round(target, 2) + increment
        if target == 1.0:
            break
    if target == 1.0:
        while target >= 0.0:
            print(target)
            target = round(target, 2) - increment
            if target == 0.0:
                break
main()
    