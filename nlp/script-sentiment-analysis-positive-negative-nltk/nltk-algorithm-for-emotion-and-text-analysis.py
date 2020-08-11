#!/usr/bin/env python3

import string
import matplotlib.pyplot as plt
from collections import Counter

from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.sentiment.vader import SentimentIntensityAnalyzer as sia


'''
				NLP Emotions Algorithm
Data pre processing step :

a) read the data, and make it lower case (no capital)
b) remove the punctuations and symbols
c) tokenisation of the data
d) separating valuable tokenise word from stopwords (meaningless word)

Emotions algorithm:

1) Check if the word in the final word list is also present in emotion.txt
	-open emotion.txt
	-loop through each line and clear it
	-extract the word and emotion using split
2) If word is present --> Add the emotion to emotion_list
3) Finally count the emotion in the emotion_list
'''

#Read the data
'''
What is encoding for?
	sometimes we need to copy and paste texts from the web and paste it in read.txt
	and tell the sentiment. The encoding force the data to have encoding utf-8 type
	most of the text online use utf-8 
'''
f=open('read.txt',encoding='utf-8')
text=f.read()

#Convert data to lower case
lower_case = text.lower() #--> super easy converting from upper to lower case

#Removing punctuations
'''
Removing punctuations with the help of translate(str.maketrans()) function

Using .translate(str.maketrans()) functions. str.maketrans() needs 3 parameters:
	str1 parameters: specifies the list of characters that need to be replaced
	str2 parameters: specifies the list of characters with which the characters need to be 		replaced
	str3 parameters: specifies the list of characters that wants to be deleted
'''

punctuation = string.punctuation #--> variable that contains all the punctuations in python
cleaned_text =lower_case.translate(str.maketrans('','',punctuation)) 

#Data tokenisation
'''
What is Tokenisation?
	Fancy way to say on how to break up sentenes into words
	e.g. i love python = ["i","loVe","python"]
	We need to break sentences because in sentiment analysis, we analyse WORDS not
	sentences

In this script we are using NLTK library which tokenise the word that has been cleaned from any punctuations and upper case. word_tokenize() function takes 3 input:
	1) the words that want to be tokenised
	2) language of the words e.g. 'english'
	3) preserve line (Boolean e.g. False, default False)
'''

tokenised_words = word_tokenize(cleaned_text,"english")

#Removing stop words
'''
What are stop words?
	Words that don't have any emotional meanings in our text

In this script using NLTK library that has collection of stopwords in many corpus (languages, dictionaries) which support multi-languages
'''

#Final step : getting valuable data
final_words=[]
for word in tokenised_words:
	if word not in stopwords.words('english'):
		final_words.append(word)

#Emotions algorithm
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
			> in each line, every word before : will be stored in variable word
			> after : is stored in emotion
	'''
#				     (1)           (2)		  (3)        (4)
	clear_line=line.replace("\n","").replace(",","").replace("'","").strip()
	word,emotion = clear_line.split(':')
	if word in final_words:
		emotion_list.append(emotion)
w = Counter(emotion_list)

#plotting
fig,ax1 =plt.subplots(1)
ax1.bar(w.keys(),w.values())
plt.show()
	
