#!/usr/bin/env python3

import string
import matplotlib.pyplot as plt
from collections import Counter

from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.sentiment.vader import SentimentIntensityAnalyzer as sia


'''
				NLP Positive Negative Analysis
Data pre processing step :

a) read the data, and make it lower case (no capital)
b) remove the punctuations and symbols

Pos-neg analysis:
1) SentimentIntensityAnalyzer
2) parse the cleaned_text (already lower case without punctuations)
'''

def SA(text):
	score = sia().polarity_scores(text)
	print(score)
	neg=score['neg']
	pos=score['pos']
	if neg > pos:
		print("Negative sentiment")
	elif pos > neg:
		print("Positive sentiment")
	else:
		print("Neutral vibe")


#Read the data
f=open('read.txt',encoding='utf-8')
text=f.read()

#Convert data to lower case
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
lower_case = text.lower() #--> super easy converting from upper to lower case

#Removing punctuations
'''
Removing punctuations with the help of translate(str.maketrans()) function

Using .translate(str.maketrans()) functions. str.maketrans() needs 3 parameters:
	str1 parameters: specifies the list of characters that need to be replaced
	str2 parameters: specifies the list of characters with which the characters need to be 		replaced
	str3 parameters: specifies the list of characters that needs to be deleted
'''

punctuation = string.punctuation #--> variable that contains all the punctuations in python
cleaned_text =lower_case.translate(str.maketrans('','',punctuation))

# Positive negative analysis
SA(cleaned_text)

# Tokenised word
tokenised_words = word_tokenize(cleaned_text,"english")

# Removing stopwords from tokenised word
final_words = []
for word in tokenised_words[:]:
	if word not in stopwords.words("english"):
		final_words.append(word)

#Emotions algorithm
emotion_list=[]
word_list=[]
f = open("emotions.txt",'r')
for line in f:
	clear_line = line.replace("\n","").replace(",","").replace("'","").strip()
	word,emotion = clear_line.split(':')
	if word in final_words:
		emotion_list.append(emotion)
w = Counter(emotion_list)

#plotting
fig,ax1 =plt.subplots(1)
ax1.bar(w.keys(),w.values())
plt.show()





