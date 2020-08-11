#!/usr/bin/env python3

import string
from collections import Counter
import nltk

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

punctuation = string.punctuation #--> variable that contains all the punctuations in python
cleaned_text =lower_case.translate(str.maketrans('','',punctuation)) 

'''
What is Tokenisation?
	Fancy way to say on how to break up sentenes into words
	e.g. i love python = ["i","loe","python"]
	We need to break sentences because in sentiment analysis, we analyse WORDS not
	sentences
'''

tokenised_words = cleaned_text.split() #--> splitting the cleaned_text into a list of words by the space

'''
What are stop words?
	Words that don't have any emotional meanings in our text
'''

stop_words = ["i", "me", "my", "myself", "we", "our", "ours", "ourselves", "you", "your", "yours", "yourself","yourselves", "he", "him", "his", "himself", "she", "her", "hers", "herself", "it", "its", "itself","they", "them", "their", "theirs", "themselves", "what", "which", "who", "whom", "this", "that", "these","those", "am", "is", "are", "was", "were", "be", "been", "being", "have", "has", "had", "having", "do", "does", "did", "doing", "a", "an", "the", "and", "but", "if", "or", "because", "as", "until", "while", "of", "at", "by", "for", "with", "about", "against", "between", "into", "through", "during", "before", "after", "above", "below", "to", "from", "up", "down", "in", "out", "on", "off", "over", "under", "again", "further", "then", "once", "here", "there", "when", "where", "why", "how", "all", "any", "both", "each", "few", "more", "most", "other", "some", "such", "no", "nor", "not", "only", "own", "same", "so", "than", "too", "very", "s", "t", "can", "will", "just", "dont", "should", "now","don't"]

final_words=[]
for word in tokenised_words:
	if word not in stop_words:
		final_words.append(word)

'''
NLP Emotions Algorithm
1) Check if the word in the final word list is also present in emotion.txt
	-open emotion.txt
	-loop through each line and clear it
	-extract the word and emotion using split

2) If word is present --> Add the emotion to emotion_list
3) Finally count the emotion in the emotion_list
'''
emotion_list=[]
word_list=[]
f=open('emotions.txt','r')
for line in f:
	'''
	Clearing the emotional txt:
		1) replace space "\n" with nothing ''
		2) replace coma "," with nothing ''
		3) replace singe quote "'" with nothing ''
		4) removing extra space at the front and the back of each line using .strip()
		5) separating word from emotion using split(":")
			> in each line, every word before : will be stored as variable word
			> after : is stored as emotion
	'''
#				    (1)		   (2)		    (3)      (4)
	clear_line=line.replace("\n","").replace(",","").replace("'","").strip()
	word,emotion = clear_line.split(':')
	if word in final_words:
		emotion_list.append(emotion)
w = Counter(emotion_list)

for k,v in w.items():
	print(k,v)
	




