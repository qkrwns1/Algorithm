def main():
    while(True):
        accep = True
        S = input().strip()
        lst = list(S)
        if S == "end":
            break
        val = {'a','e','i','o','u'}
        if not any(v in S for v in val):
            accep = False
        vowel_count = 0
        consonant_count = 0
        for i,ch in enumerate(lst):
            if ch in val:
                vowel_count += 1
                consonant_count = 0
            else:
                vowel_count = 0
                consonant_count += 1
            if vowel_count >= 3 or consonant_count >= 3:
                accep = False
                break
        for i in range(len(lst)-1):
            if(lst[i] == lst[i+1] and lst[i] not in {'e', 'o'}):
                accep = False
        if(accep):
            print(f"<{S}> is acceptable.")
        else:
            print(f"<{S}> is not acceptable.")


if __name__ == '__main__':
    main()