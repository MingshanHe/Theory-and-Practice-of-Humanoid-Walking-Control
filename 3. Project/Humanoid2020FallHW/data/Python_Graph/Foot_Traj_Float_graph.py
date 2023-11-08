import matplotlib.pyplot as plt 
import csv 
  
x1 = [] 
x2 = []
y1 = []
y2 = []
z1 = []
z2 = [] 
i = []

tmp = 1
# with open('/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/ZMP_graph.csv','r') as csvfile: 
with open('/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/Foot_Traj_Float_.csv','r') as csvfile: 
    plots = csv.reader(csvfile, delimiter = ',') 
      
    for row in plots: 
        if len(row) < 2:
            print(row)
            continue
        else:
            x1.append(round(float(row[0]),3)) 
            y1.append(round(float(row[1]),3)) 
            z1.append(round(float(row[2]),3)) 
            x2.append(round(float(row[3]),3)) 
            y2.append(round(float(row[4]),3)) 
            z2.append(round(float(row[5]),3)) 
            # x.append(round(float(row[0]),3)) 
            # y.append(round(float(row[1]),3)) 
            i.append(tmp/200)
            tmp += 1
            # if tmp == 300:
            #     break
# print(len(i))
# print(len(x))
plt.plot(i, x1,label = "left x") 
plt.plot(i, x2,label = "right x") 
plt.legend() 
plt.show() 

plt.plot(i, y1,label = "left y") 
plt.plot(i, y2,label = "right y") 
plt.legend() 
plt.show() 

plt.plot(i, z1,label = "left z") 
plt.plot(i, z2,label = "right z") 
plt.legend() 
plt.show() 