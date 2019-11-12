def hmilu(petals):
    new_petals = petals %6
    if new_petals == 0:
        return "Not at all"
    elif new_petals == 1:
        return "I love you"
    elif new_petals == 2:
        return "A little"
    elif new_petals == 3:
        return "A lot"
    elif new_petals == 4:
        return "Passionately"
    else:
        return "Madly"


if __name__ == "__main__":
    petals = int(input("Enter some value to get know how much you love him/her: "))
    result = hmilu(petals)
    print(result)