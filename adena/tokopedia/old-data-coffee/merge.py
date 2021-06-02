import json
import glob

result = []

fn ="tokpedData_kwords_coffee.json"

for f in glob.glob("*.json"):
	with open(f, "rb") as infile:
		result.append(json.load(infile))

with open(fn, "wb") as outfile:
	json.dump(result, outfile)

with open(fn) as f:
	data = json.loads(f.read())
print(data)
print(type(data))
print(len(data))


