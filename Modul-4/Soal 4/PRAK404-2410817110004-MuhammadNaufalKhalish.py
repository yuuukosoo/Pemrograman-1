while True:
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan=int(input("Masukkan Pilihan :"))

    if 1<=pilihan<=4:
        pertama=float(input("Masukkan nilai pertama :"))
        kedua=float(input("Masukkan nilai kedua:"))

        if pilihan==1 :
            hasil=pertama+kedua
            print(f"Hasil penjumlahan antara {pertama:.2f} dengan {kedua:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan==2 :
            hasil=pertama-kedua
            print(f"Hasil pengurangan antara {pertama:.2f} dengan {kedua:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan==3 :
            hasil=pertama*kedua
            print(f"Hasil perkalian antara {pertama:.2f} dengan {kedua:.2f} adalah {hasil:.2f}\n\n")
        elif pilihan==4 :
            if pertama!=0 | kedua!=0 :
                hasil=pertama/kedua
                print(f"Hasil pembagian antara {pertama:.2f} dengan {kedua:.2f} adalah {hasil:.2f}\n\n")
            else : print("Pembagian dengan nol tidak bisa\n\n")

    elif pilihan==5 :
            print("Terima kasih, telah menggunakan kalkulator MUHAMMAD NAUFAL KHALISH\n\n")
            break
    else :
            print("Input anda salah, silahkan coba lagi\n\n")