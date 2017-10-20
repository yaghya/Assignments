import csv
with open('time.csv') as f:
    r=csv.reader(f)
    for i in r:
        print i[0]
