import sys
from cs50 import get_string


def main():
    key = int(sys.argv[1])
    firsttext = get_string("firsttext: ")

    print("cryptictext: ", end="")

    for ct in firsttext:
        if not ct.isalpha():
            print(ct, end="")
            continue

        ascii_offset = 65 if ct.isupper() else 97

        fi = ord(ct) - ascii_offset
        ci = (fi + key) % 26

        print(chr(ci + ascii_offset), end="")

    print()

    if len(sys.argv) != 2:
        print("Usage: ./caesar k")
        sys.exit(1)


    

    

    return 0


if __name__ == "__main__":
    main()