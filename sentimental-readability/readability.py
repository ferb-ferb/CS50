from cs50 import get_string


def main():
    text = get_string("Text: ")
    letters = 0
    spaces = 0
    periods = 0
    for c in text:
        if c.isalpha():
            letters += 1
        elif c == " ":
            spaces += 1
        elif c in ["." , "?", "!"]:
            periods += 1
    
main()