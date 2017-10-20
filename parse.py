import sys
import os
time=[]
val=open("time.csv","a")
for itr in range(100):
    name="satsvalue"+str(itr)
    os.system("java -cp frodo2.jar frodo2.algorithms.AgentFactory /home/sanky/ML/Conversion/"+name+".txt_method1.xml /home/sanky/Downloads/frodo2.15/frodo2/agents/DPOP/P-DPOP/P1.5-DPOPagent.xml > temp -timeout 6000000000000")
    f=open("temp","r")
    for i in f:
        index=i.find("ms")
        if index!=-1:
            t=i.split(' ')
            test=t[3]
            test=test.split(',')
            test=''.join(test)
            print test
            m=str(itr)+","+test
            val.write(m+"\n")
    f.close()


