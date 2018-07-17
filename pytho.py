import sys
print("In PYTHON")
print("File name:       " + str(sys.argv[0]))
print("Number of args:  " + str(len(sys.argv)))
for item in sys.argv:
    print(item)
sys.exit(100)
