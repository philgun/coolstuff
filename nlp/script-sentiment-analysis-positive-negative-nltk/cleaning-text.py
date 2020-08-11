#!/usr/bin/env python3
'''
Cleaning Text Steps:
	1) Create a text file and take text from it
	2) Convert the letter into lowercase (Apple is not equal to apple)
 	3) Remove any punctuations like .. ? ! , : ;

What is encoding for?
	sometimes we need to copy and paste texts from the web and paste it in read.txt
	and tell the sentiment. The encoding force the data to have encoding utf-8 type
	most of the text online use utf-8 
'''

f=open('read.txt',encoding='utf-8')
text=f.read()

#Convert letter to lower case
lower_case = text.lower() #--> super easy converting from upper to lower case
print(text) #==>I @Love Python!
print(lower_case) #==>i @love python!

'''
Removing punctuations with the help of translate(str.maketrans()) function

Using .translate(str.maketrans()) functions. str.maketrans() needs 3 parameters:
	str1 parameters: specifies the list of characters that need to be replaced
	str2 parameters: specifies the list of characters with which the characters need to be 		replaced
	str3 parameters: specifies the list of characters that needs to be deleted
'''
import string
print(string.punctuation)
punctuation = string.punctuation #--> variable that contains all the punctuations in python
cleaned_text =lower_case.translate(str.maketrans('','',punctuation)) 
print(cleaned_text) #==>i love python

first="python"
sec="matlab"
test_text=lower_case.translate(str.maketrans(first,sec,punctuation)) 
print(test_text)
#i lave motlab since p-->m, y-->a t -->t h-->l o--->a n-->b

