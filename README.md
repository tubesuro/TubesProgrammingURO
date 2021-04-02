Cara menjalankan program : 
1. Buka file C++ di compiler pilihan anda

2. Run file tersebut

3. Saat file di run, program akan menampilkan introduction dari
program perang robot dengan kecoa ini. Program juga akan menamp
ilkan kondisi-kondisi yang ditetapkan.

4. Program menampilkan sebuah peta dengan luas 9 x 9 yang bertindak
sebagai arena perang. Robot akan ditempatkan pada titik (0,0) 
dan kecoa akan ditempatkan secara acak dengan indikasi posisi (x,y)

5. Program menampilkan status robot dan juga status kecoa yang
berupa HP (health point) dan attack power.

6. Program akan meminta anda untuk memasukkan input 1-6 yang akan
menjadi command untuk robot dengan keterangan sebagai berikut :
Command '1' akan membuat robot maju satu langkah
Command '2' akan membuat robot mundur satu langkah
Command '3' akan membuat robot pindah ke kanan satu langkah
Command '4' akan membuat robot pindah ke kiri satu langkah 
Command '5' akan membuat robot menyerang kecoa
Command '6' akan membuat robot menyerah

7. Robot hanya dapat menyerang kecoa dalam jarak yang ditentukan.
Jika jarak terlalu jauh, robot perlu mendekati kecoa. Saat kecoa
diserang, kecoa akan spawn kembali ditempat yang acak. Kecoa tidak
bisa berpindah posisi, namun masih bisa menyerang balik robot.

8. Setelah menyerang kecoa sampai HP nya habis, kecoa akan mati 
dan akan keluar output "Kecoa has been killed", serta output 
"Jumlah kill : " << killcount yang mana killcount akan bertambah
1 setiap kali kecoa terbunuh.

9. Saat robot terbunuh, akan keluar output "Robot has been killed"
dan juga output "Jumlah kill : " << killcount yang menyatakan
seberapa banyak kecoa yang telah terbunuh saat robot masih hidup.
Lalu akan keluar output "GAME OVER!!!" yang menandakan game telah
berakhir
