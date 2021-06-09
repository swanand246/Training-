def numberToWord(n, suffix):

    Null = ""

    X = [Null, "One ", "Two ", "Three ", "Four ", "Five ", "Six ",
         "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ",
         "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ",
         "Seventeen ", "Eighteen ", "Nineteen "]

    Y = [Null, Null, "Twenty ", "Thirty ", "Forty ", "Fifty ",
         "Sixty ", "Seventy ", "Eighty ", "Ninety "]

    if n < 0:
        raise IndexError(n , " Not Available!")

    if n == 0:
        return Null
    #logic

    if n > 19:
        return Y[n // 10] + X[n % 10] + suffix
    else:
        return X[n] + suffix

def convert(n):
    if n == 0 :
        return "Zero"

    result = numberToWord(( n // 10000000000000000000) % 100, "Maha Shankh ")

    result =result + numberToWord(( n // 100000000000000000) % 100, "Shankh ")

    result =result + numberToWord(( n // 1000000000000000) % 100, "Padma ")

    result =result + numberToWord(( n // 10000000000000) % 100, "Neel ")

    result =result + numberToWord(( n // 100000000000) % 100, "Kharab ")

    result =result + numberToWord((n // 1000000000) % 100, "Arab ")

    result =result + numberToWord((n // 10000000) % 100, "Crore ")

    result =result + numberToWord(((n // 100000) % 100), "Lakh ")

    result += numberToWord(((n // 1000) % 100), "Thousand ")

    result += numberToWord(((n // 100) % 10), "Hundred ")

    result += numberToWord((n % 100), "")

    return result

if __name__ == "__main__":
	num = int(input("enter a number you want to convert it into words: "))
	numWord = convert(num)
	print(numWord)