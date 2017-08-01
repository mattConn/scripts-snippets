import json
import os

with open('data.json') as data_file:
    data = json.load(data_file)

for i in data['array']:
    os.system('echo '+i)
