#!/usr/bin/env python

import subprocess
import sys
import matplotlib.pyplot as plt

def main():
    try:
        nb = int(sys.argv[1])
    except:
        nb = 20
    val = []
    for i in range(nb):
        output = subprocess.check_output(["sh", "test.sh", sys.argv[2]])
        print(output.split('\n')[1])
        val.append(int(output.split('\n')[1].split(' ')[2]))
        del output
    plt.plot(range(1, nb + 1), val, 'r')
    plt.show()
    print("moyenne {}".format(sum(val) / len(val)))
    print("min {}".format(min(val)))
    print("max {}".format(max(val)))

if __name__ == "__main__":
    main()
