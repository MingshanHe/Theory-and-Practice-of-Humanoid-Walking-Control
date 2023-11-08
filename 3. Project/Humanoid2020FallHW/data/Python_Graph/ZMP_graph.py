import matplotlib.pyplot as plt 
import csv 
  
x = [] 
y = []
i = []

tmp = 1
with open('/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/ZMP_graph.csv','r') as csvfile: 
    plots = csv.reader(csvfile, delimiter = ',') 
      
    for row in plots: 
        if len(row) < 2:
            print(row)
            continue
        else:
            x.append(round(float(row[0]),3)) 
            y.append(round(float(row[1]),3)) 
            i.append(tmp/200)
            tmp += 1
            # if tmp == 300:
            #     break
# print(len(i))
# print(len(x))
plt.plot(i, x,label = "ZMP x") 
plt.legend() 
plt.show() 

plt.plot(i, y,label = "ZMP y") 
plt.legend() 
plt.show() 
