Folder data berisi data 1.6.xlsx 1.7 xlsx 1.8 xlsx

Untuk membuat studi, run:

1. 	job.py
	Parameter yang bisa diganti2:
		- whichdata ~> memilih data mana saja yang mau ditelusuri. Contoh untuk memproses semua data
			whichdata = [0,1,2]
		  untuk 1.6.xlsx dan 1,7.xlsx saja maka 
			whichdata = [0,1]
		- pctcombit ~> berapa persen anggota kombinasi titik referensi yang mau dipakai. E.g. pctcombi=0.1 untuk 10% data
		- maxcandidates ~> berapa jumlah data estimasi jarak yang mau ditelusuri
	By default semua hasil triangulation akan ditaruh di folder ./result/ dalam bentuk csv. Satu CSV untuk 1 titik test

2. 	postprocess.py
	Parameter yang bisa diganti:
		- sumfile ~> file name summary (MAEX MAEY untuk semua titik test)

3.	plot.py
	Parameter yang bisa diganti:
		- readdir ~> folder tempat ditaruhnya CSV hasil dari job.py. Default: ./result/

