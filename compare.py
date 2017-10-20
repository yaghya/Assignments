import sys
import os
time=[]
val=open("time.csv","a")
wr=open('answer.txt','w')
for itr in range(50):
    name=str(itr)+"0000"
    os.system("java -cp frodo2.jar frodo2.algorithms.AgentFactory /home/sanky/ML/Conversion/"+name+".txt_method1.xml /home/sanky/Downloads/frodo2.15/frodo2/agents/DPOP/MB-DPOP/MB-DPOPagent.xml > temp -timeout 0")

    f=open("temp","r")
    for i in f:
        if i.count("Total optimal utility")==1:
            i=i.replace("\n", "");
            a=i.split(' ')
            break
    f.close()
    value_mb=float(a[len(a)-1])

    print "Algo 1 done"

    os.system("java -cp frodo2.jar frodo2.algorithms.AgentFactory /home/sanky/ML/Conversion/"+name+".txt_method1.xml /home/sanky/Downloads/frodo2.15/frodo2/agents/MaxSum/MaxSumAgent.xml > temp1 -timeout 0")
    f=open("temp1","r")
    for i in f:
        if i.count("Total optimal utility")==1:
            i=i.replace("\n", "");
            a=i.split(' ')
            break
    f.close()
    value_max=float(a[len(a)-1])

    print "Algo 2 done"
    wr.write(str(value_mb/value_max))
    wr.write("\n")

wr.close()
