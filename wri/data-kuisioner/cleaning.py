import pandas as pd
import numpy as np

df = pd.read_csv("MRT.csv")

names = [
	"Seberapa yakin Anda jika setiap dari kita memiliki kontribusi yang besar dalam krisis iklim yang sedang terjadi?",
	"Seberapa yakin Anda bahwa krisis iklim berdampak negatif pada masyarakat, misalnya menyebabkan bencana alam dan merebaknya penyakit menular?",
	'Seberapa setuju Anda dengan pernyataan berikut : "Saya merasa saya memiliki kewajiban pribadi untuk berpartisipasi dalam upaya  mengurangi dampak negatif krisis iklim."',
	'Seberapa setuju Anda dengan pernyataan berikut: "Upaya  untuk mengurangi dampak negatif krisis iklim merupakan hal yang positif."',
	"Apakah Anda meyakini bahwa Anda mampu melakukan upaya yang dapat mengurangi dampak negatif krisis iklim?",
	"Apakah orang-orang penting di sekitar Anda (contoh: teman, keluarga) meyakini bahwa upaya untuk mengurangi dampak negatif krisis iklim adalah hal yang perlu dilakukan?",
	'Seberapa setuju Anda dengan pernyataan berikut: " Saya berniat untuk melakukan upaya-upaya yang bertujuan untuk mengurangi dampak negatif krisis iklim."',
	"Seberapa yakin Anda bahwa menggunakan MRT sebagai alat transportasi merupakan salah satu solusi untuk mengurangi dampak negatif krisis iklim?",
	'Seberapa setuju Anda dengan pernyataan berikut: "Saya berniat untuk menggunakan MRT secara rutin."'
]


for n in names:
	for i in range(len(df)):
		string = df[n].iloc[i]
		print(n)
		print(i,string)
		if string == "Sangat setuju" or string == "Sangat yakin":
			df[n].iloc[i] = 5
		elif string == "Setuju" or string == "Yakin":
			df[n].iloc[i] = 4
		elif string == "Tidak yakin" or string == "Tidak setuju":
			df[n].iloc[i] = 2
		elif string == "Sangat tidak yakin" or string == "Sangat tidak setuju":
			df[n].iloc[i] = 1
		elif string == "Netral":
			df[n].iloc[i] = 3

df.to_csv("MRT_clean.csv",index=False)
		
