import matplotlib.pyplot as plt
import sys
from statistics import variance
import csv
import numpy as np
x=[]
y=[]
with open(sys.argv[1],'rb') as f:
    r=csv.reader(f)
    for i in r:
        x.append(i[0])
        y.append(i[1])

X=np.array(x,dtype=int)
Y=np.array(y,dtype=int)
mean=np.mean(Y)
sd=np.var(Y)**(1/2.0)
# plotting the points
plt.plot(x, y)

# naming the x axis
plt.xlabel('auction instances')
# naming the y axis
plt.ylabel('time (in ms)')

# giving a title to my graph
plt.title('Graph for a 28 bids Auction with MB-DPOP,manually\n Mean='+str(mean)+'\n Standard Deviation= '+str(sd))

# function to show the plot
plt.show()
