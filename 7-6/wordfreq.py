# Python Program to Count words in a String using Dictionary

string = input("Please enter any String : ")
words = []

words = string.split() # splitting the string
myDict = {}
for key in words:
    myDict[key] = words.count(key)

print("Frequency count  ",  myDict)