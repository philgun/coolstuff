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
#Convert letter to lower case
f=open('read.txt',encoding='utf-8')
text=f.read()
lower_case = text.lower() #--> super easy converting from upper to lower case

'''
Removing punctuations with the help of translate(str.maketrans()) function

Using .translate(str.maketrans()) functions. str.maketrans() needs 3 parameters:
	str1 parameters: specifies the list of characters that need to be replaced
	str2 parameters: specifies the list of characters with which the characters need to be 		replaced
	str3 parameters: specifies the list of characters that needs to be deleted
'''
import string
punctuation = string.punctuation #--> variable that contains all the punctuations in python
cleaned_text =lower_case.translate(str.maketrans('','',punctuation)) 
print(cleaned_text) #==>i love python

'''
What is Tokenisation?
	Fancy way to say on how to break up sentenes into words
	e.g. i love python = ["i","loe","python"]
	We need to break sentences because in sentiment analysis, we analyse WORDS not
	sentences
'''

tokenised_words = cleaned_text.split() #--> splitting the cleaned_text into a list of words
print(tokenised_words)

'''
What is Stop words
	Words that doesnt have any emotional meanings in our text
'''

stop_words = ["i", "me", "my", "myself", "we", "our", "ours", "ourselves", "you", "your", "yours", "yourself","yourselves", "he", "him", "his", "himself", "she", "her", "hers", "herself", "it", "its", "itself","they", "them", "their", "theirs", "themselves", "what", "which", "who", "whom", "this", "that", "these","those", "am", "is", "are", "was", "were", "be", "been", "being", "have", "has", "had", "having", "do", "does", "did", "doing", "a", "an", "the", "and", "but", "if", "or", "because", "as", "until", "while", "of", "at", "by", "for", "with", "about", "against", "between", "into", "through", "during", "before", "after", "above", "below", "to", "from", "up", "down", "in", "out", "on", "off", "over", "under", "again", "further", "then", "once", "here", "there", "when", "where", "why", "how", "all", "any", "both", "each", "few", "more", "most", "other", "some", "such", "no", "nor", "not", "only", "own", "same", "so", "than", "too", "very", "s", "t", "can", "will", "just", "dont", "should", "now","don't"]

final_words=[]
for word in tokenised_words:
	if word not in stop_words:
		final_words.append(word)

print(final_words) 





