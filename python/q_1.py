def bmi (w,h):
    new_h = h/100
    f_bmi =  w /new_h**2
    
    bmi = round(f_bmi,2)
    if bmi <= 18:
        return bmi, "Underweight"
    elif bmi <= 25:
        return bmi, "Normal"
    elif bmi <= 30:
        return bmi, "Overweight"
    else:
        return  bmi, "Obese"
    
if __name__ == "__main__":
    weight = float(input("Please enter your weight in kg: "))
    height = float(input("Please enter your height in cm: "))
    res = bmi(weight , height)
    print (res)
    