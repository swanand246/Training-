# -*- coding: utf-8 -*-
"""
Created on Tue Jun 15 14:26:19 2021

@author: Swanand
"""
#Program for wildcard string matching
def isMatching(ptn,strr):
    if len(ptn) == 0 and len(strr) == 0:
        return True

    if len(ptn) > 1 and ptn[0] == '*' and len(strr) == 0:
        return False

    if (len(ptn) > 1 and ptn[0] == '?') or (len(ptn) != 0
        and len(strr) !=0 and ptn[0] == strr[0]):
        return isMatching(ptn[1:],strr[1:]);

    if len(ptn) !=0 and ptn[0] == '*':
        return isMatching(ptn[1:],strr) or isMatching(ptn,strr[1:])
    return False

strr = input("Enter The String: ")
ptn = input("Enter The Pattern: ")


if isMatching(ptn, strr):
    print(strr)
else:
    print("No Match found")

