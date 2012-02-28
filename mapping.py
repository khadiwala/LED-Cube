
f = open('mapping.txt')
lines = f.readlines()

#out = open('map.c','w')
p = []

for line in lines:
    x = line.split()
    if x[1] in p:
        print x[1]
    p.append(x[1])
    #out.write("if(x==")
    #out.write(y[0])
    #out.write(" && y==")
    #out.write(y[1])
    #out.write(" && z==")
    #out.write(y[2] + "){\n")
    #out.write("\t" + "return " + '\"' + x[0] + '\"')
    #out.write("\n}")


