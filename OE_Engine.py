import numpy as np
import matplotlib.pyplot as plt


#Predetermined password dictionary
data = {'password':1, '12345678QWErtyui!@#':5, 'bBbBbBbBbBbB123!':3,'BadPassword5?':3,'ThisIsThe#1Password':4, 'Elizabeth':2, 'Sam':0}
password = list(data.keys())
score = list(data.values())

fig = plt.figure(figsize = (10, 5))

#Create the bar plot
plt.bar(password, score, color ='purple',
        width = 0.4)

plt.xlabel("Passwords")
plt.ylabel("Strength Score of password")
plt.title("Strength of Various Passwords")
plt.show()

plt.savefig("graph.png")

