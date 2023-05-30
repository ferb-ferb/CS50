from cs50 import get_string


def main():
    text = get_string("Text: ")
    letters = 0
    words = 1
    periods = 0
    for c in text:
        if c.isalpha():
            letters += 1
        elif c == " ":
            words += 1
        elif c in ["." , "?", "!"]:
            periods += 1
    L = letters/words * 100
    S = periods/words * 100
    cl = 0.0588 * L - 0.296 * S - 15.8
    print(f"Grade: {int(round(cl, 0))}")

main()