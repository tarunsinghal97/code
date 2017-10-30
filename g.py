s = raw_input()
a = len(s)
s1 = []
for i in range(a):
    if s[i]=="a":
        s1.append("z")
    if s[i]=="b":
         s1.append("y")
    if s[i]=="c":
        s1.append("x")
    if s[i]=="d":
        s1.append("w")
    if s[i]=="e":
        s1.append("v")
    if s[i]=="f":
        s1.append("u")
    if s[i]=="g":
        s1.append("t")
    if s[i]=="h":
        s1.append("s")
    if s[i]=="i":
        s1.append("r")
    if s[i]=="j":
        s1.append("q")
    if s[i]=="k":
        s1.append("p")
    if s[i]=="l":
        s1.append("o")
    if s[i]=="m":
        s1.append("n")
    if s[i]=="n":
        s1.append("m")
    if s[i]=="o":
        s1.append("l")
    if s[i]=="p":
        s1.append("k")
    if s[i]=="q":
        s1.append("j")
    if s[i]=="r":
        s1.append("i")
    if s[i]=="s":
        s1.append("h")
    if s[i]=="t":
        s1.append("g")
    if s[i]=="u":
        s1.append("f")
    if s[i]=="v":
        s1.append("e")
    if s[i]=="w":
        s1.append("d")
    if s[i]=="x":
        s1.append("c")
    if s[i]=="y":
        s1.append("b")
    if s[i]=="z":
        s1.append("a")
    else:
        s1.append(s[i])
s1 = ''.join(str(x) for x in s1)
print s1
