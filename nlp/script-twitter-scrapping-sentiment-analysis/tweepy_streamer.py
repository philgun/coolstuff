#!/usr/bin/env python3

'''

In Tweepy, an instance of tweepy.Stream establishes a streaming session and routes messages to StreamListener instance. The on_data method of a stream listener receives all messages and calls functions according to the message type. The default StreamListener can classify most common twitter messages and routes them to appropriately named methods, but these methods are only stubs.
Therefore using the streaming api has three steps.

    1) Create a class, namely StdOutListener which is inheriting StreamListener class
		> put all the methods we want to use from StreamListener under this new StdOutListener
    2) Using that class create a Stream object using "Stream" method imported from tweepy which takes 2 input:
		> authentication
		> class that inherits StreamListener()
    3) Connect to the Twitter API using the Stream.

'''
import numpy as np

#importing tweepy module that listen to the tweets 
from tweepy.streaming import StreamListener

#importing tweepy module that handles authentication
from tweepy import OAuthHandler

#importing a method in tweepy class called Stream that is used to initialise the twitter listener
from tweepy import Stream

#importing twitter credentials and json
import twitter_credentials
import json

#creating a class that inherits StreamListener() class
#~under this class we put all the method we want to pull from API and use it in our tweet streamer
class StdOutListener(StreamListener):
	#initialise variable path to store the output tweet
	def __init__(self,path=None):
		self.path=path
	
	def on_data(self,tweets):
		#take in all the data (listening all tweets) and we can have it ~store it in JSON type of file
		tweet_data = json.loads(tweets)
		#take only the text excluding RT
		text = tweet_data['text']
		if text[0:2] != 'RT':
			print(tweet_data['text'])
		if self.path != None:
			savefile = open(self.path,'a')
			savefile.write(tweet_data['text'])
			savefile.close()
			
		return True
		
	def on_error(self,status):
		#method that are overiding from the streamer when we have an error
		print(status)

if __name__ == "__main__":

	#API Authentication of the application
	auth =  OAuthHandler(twitter_credentials.CONSUMER_KEY,
				twitter_credentials.CONSUMER_SECRET)
	
	auth.set_access_token(twitter_credentials.ACCESS_TOKEN,
				twitter_credentials.ACCESS_TOKEN_SECRET)

	#Create an object for streaming tweet using a class that inherits StreamListener class
	#Stream object takes 2 inputs:
		# 1) authentication api
		# 2) StreamListener instance
	
	stream = Stream(auth,StdOutListener(path="out.txt"))

	#Let's filter the twitter using the list and start the stream using Stream object

	topic_list=["donald trump","hillary clinton","barrack obama","bernie sanders"]
	stream.filter(track=topic_list)






