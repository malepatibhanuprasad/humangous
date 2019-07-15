a=int(input())
st=input(a)
v="aeiouAEIOU"
string=""
for i in st:
  if i not in v:
    string=string+i
print(string[::-1])
