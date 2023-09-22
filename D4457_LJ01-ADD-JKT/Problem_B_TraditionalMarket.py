inputNilai=input().split(" ");

harga=[];
for i in range(len(inputNilai)):
    harga.append(int(inputNilai));

daging=harga[0];
sayur=harga[1];
telor=harga[2];
harga.sort(reverse=true);

for i in range(len(harga)):
    if harga[i]==daging:
        print("daging");
    elif harga[i]==sayur:
        print("sayur");
    elif harga[i]==telor:
        print("telur");