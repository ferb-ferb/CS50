def main():
    while True:
        try:
            height = int(input("Height: "))
            if height > 0 and height < 9:
                break
        except ValueError:
            print("Not an Integer")
    for i in range(height):
        print(" " * (height-i-1) + "#"*(i+1) + "  " + "#"*(i+1))


main()
