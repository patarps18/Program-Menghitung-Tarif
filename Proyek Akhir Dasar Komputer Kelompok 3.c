#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char opsi;					//fungsi yang merepresentasikan kondisi yang dipilih oleh pengguna
	int lokasia;				//fungsi yang merepresentasikan lokasi awal
	int lokasib;				//fungsi yang merepresentasikan lokasi tujuan
	char jenis;					//fungsi yang merepresentasikan jenis pilihan kendaraan
	int pilihan;				//fungsi yang merepresentasikan kondisi benar atau salah dari jenis kendaraan yang dipilh
	int pilihan1;				//fungsi yang merepresentasikan kondis exit atau kembali ke menu utama
	int jaraka,jarakb;			//fungsi yang merepresentasikan jumlah jarak yang ada pada lokasi awal dan lokasi akhir
	int harga,jarak,test,coba;
	system("color B0"); 		//Membuat tampilan background berubah warna menjadi warna hijau
	label: 						//fungsi pemanggilan dari goto
	system("cls");  			//fungsi untuk membersihkan tulisan pada perintah sebelumnya
	printf("                                              *****OJEK PAYMENT*****                                              ");
	printf("\n\n                                                    MENU UTAMA                                                    \n\n");
	printf("\n\n[1] Ojek Kampus\n");
	printf("[2] Bantuan\n");
	printf("[3] Keluar\n");
	printf("\nPilihan: ");
	scanf("%s",&opsi);
	system("cls");
	if (opsi=='3'){
		printf("\n\n\n                                           Terima Kasih Telah Menggunakan Program ini                      \n\n\n");
		getch();				//fungsi yang digunakan untuk menahan perintah sebelum menuju ke perintah selanjutnya
		return 0;				//fungsi yang digunakan untuk mengakhiri program
	}
	else if(opsi=='2'){
		printf("                                                   Bantuan                                                   \n");
		printf("Ojek Payment merupakan suatu program yang dimana program ini dapat menentukan harga yang setiap rute perjalan yang kita inginkan.");
		printf("\nProsedur penggunaan program Ojek Payment:");
		printf("\n1. Silahkan pilih menu kode 1 untuk melakukan pemilihan rute perjalanan anda,");
		printf("\n2. Silahkan pilih tempat awal anda atau tempat anda akan dijemput,");
		printf("\n3. Silahkan pilih tujuan dari rute anda,");
		printf("\n4. Silahkan pilih jenis kendaraan yang ingin anda gunakan,");
		printf("\n5. Setelah menekan 'Enter', harga akan muncul pada layar.\n\n");
		printf("Silahkan Tekan apa saja untuk kembali ke menu utama...");
		getch();
		goto label;				//fungsi yang digunakan untuk memanggil fungsi lain yang telah di declare sebelumnya
	}
	else if(opsi=='1'){
		do{
			do{
				printf("Pilih lokasi anda: \n");
				printf("[1] Stasiun UI\n");
				printf("[2] Fakultas Hukum\n");
				printf("[3] Stasiun Pondok Cina\n");
				printf("[4] Rumpun Ilmu Kesehatan\n");
				printf("[5] Fakultas Kesehatan Masyarakat\n");
				printf("[6] Fakultas Matematika dan Ilmu Pengetahuan Alam\n");
				printf("[7] Fakultas Farmasi\n");
				printf("[8] Pusgiwa\n");
				printf("[9] Vokasi\n");
				printf("[10] Fakultas Teknik\n");
				printf("[11] Fakultas Ekonomi dan Bisnis\n");
				printf("[12] Fakultas Ilmu Pengetahuan Budaya\n");
				printf("[13] Fakultas Ilmu Sosial dan Ilmu Politik\n");
				printf("[14] Fakultas Psikologi\n");
				printf("[15] Pusat Studi Jepang\n");
				printf("[16] Fakultas Ilmu Komputer\n");
				printf("[17] Perpustakaan UI\n");
				printf("[18] Masjid UI\n");
				printf("[19] Rektorat\n");
				printf("[20] Markas Menwa\n");
				printf("[21] Asrama\n");
				printf("\nLokasi Anda:");
				test = scanf("%d", &lokasia);
				if (test==0){
   					while (getchar() != '\n');			//loop akan meminta inputan lagi apabila inputan yang dimasukan tidak sesuai
				}
   						switch(lokasia){
  							case 1:
  								jaraka=1.5;				//Mendeclare bahwa disetiap lokasi memiliki besaran masung-masing untuk penentuan harga dari jarak yang telah ditentukan
   								break;
  							case 2:
   								jaraka=2;
   								break;
  							case 3:
   								jaraka=2;
 								break;
  							case 4:
								jaraka=2.5;
   								break;
  							case 5:
								jaraka=2.5;
   								break;
  							case 6:
								jaraka=2.5;
   								break;
  							case 7:
								jaraka=2.5;
   								break;
							case 8:
   								jaraka=4;
      							break;
							case 9:
   								jaraka=4;
								break;
							case 10:
     							jaraka=5;
   								break;
							case 11:
   								jaraka=5;
   								break;
							case 12:
   								jaraka=4;
  								break;
							case 13:
   								jaraka=4;
      							break;
							case 14:   									
   								jaraka=3;
      							break;
   							case 15:   											
     							jaraka=3;
   								break;
   							case 16:
   								jaraka=3;
								break;
   							case 17:
     							jaraka=3;
   								break;
   							case 18:
  								jaraka=2.5;
   								break;
   							case 19:
   								jaraka=2.5;
   								break;
							case 20:
   								jaraka=1;
   								break;
							case 21:
   								jaraka=0;
   								break;
  							default:
  								system("cls");
   								printf("[ERROR]");      //Jika input tidak sesuai error
   								printf("\nSilahkan masukkan input sesuai lokasi yang ada pada daftar\n\n");
   								break;
 						}
			}while(lokasia < 1 || lokasia > 21);     //Loop minta input lagi jika tidak sesuai
 			system("cls");
 			do{
 				printf("Pilih lokasi tujuan anda: \n");
				printf("[1] Stasiun UI\n");
				printf("[2] Fakultas Hukum\n");
				printf("[3] Stasiun Pondok Cina\n");
				printf("[4] Rumpun Ilmu Kesehatan\n");
				printf("[5] Fakultas Kesehatan Masyarakat\n");
				printf("[6] Fakultas Matematika dan Ilmu Pengetahuan Alam\n");
				printf("[7] Fakultas Farmasi\n");
				printf("[8] Pusgiwa\n");
				printf("[9] Vokasi\n");
				printf("[10] Fakultas Teknik\n");
				printf("[11] Fakultas Ekonomi dan Bisnis\n");
				printf("[12] Fakultas Ilmu Pengetahuan Budaya\n");
				printf("[13] Fakultas Ilmu Sosial dan Ilmu Politik\n");
				printf("[14] Fakultas Psikologi\n");
				printf("[15] Pusat Studi Jepang\n");
				printf("[16] Fakultas Ilmu Komputer\n");
				printf("[17] Perpustakaan UI\n");
				printf("[18] Masjid UI\n");
				printf("[19] Rektorat\n");
				printf("[20] Markas Menwa\n");
				printf("[21] Asrama\n");
				printf("\nLokasi Tujuan Anda:");
				test = scanf("%d", &lokasib);
				if (test==0){
   					while (getchar() != '\n');
				}
   						switch(lokasib){
  							case 1:
   								jarakb=1.5;
   								break;
    						case 2:
      							jarakb=2;
    							break;
    						case 3:
      							jarakb=2;
      							break;
     						case 4:
   								jarakb=2.5;
   								break;
 							case 5:
   								jarakb=2.5;
     							break;
     						case 6:
  								jarakb=2.5;
   								break;
     						case 7:
   								jarakb=2.5;
   								break;
      						case 8:
   								jarakb=4;
  								break;
   							case 9:
   								jarakb=4;
   								break;
   							case 10:
   								jarakb=5;
   								break;
   							case 11:
   								jarakb=5;
      							break;
   							case 12:
   								jarakb=4;
   								break;
     						case 13:
	   							jarakb=4;
								break;
							case 14:
								jarakb=3;
								break;
							case 15:
								jarakb=3;
								break;
							case 16:
								jarakb=3;
								break;
							case 17:
								jarakb=3;
								break;
							case 18:
								jarakb=2.5;
								break;
							case 19:
								jarakb=2.5;
								break;
							case 20:
								jarakb=1;
								break;
							case 21:
								jarakb=0;
								break;
							default:
								system("cls");
   								printf("[ERROR]");      //Jika input tidak sesuai error
   								printf("\nSilahkan masukkan input sesuai lokasi yang ada pada daftar\n\n");
   								break;
						}
			}while(lokasib < 1 || lokasib > 21);     //Loop minta input lagi jika input tidak sesuai
 			system ("cls");
			printf("Apakah lokasi yang anda masukkan sudah sesuai dengan keinginan anda?");
				if(lokasia==1){						//kondisi yang digunakan untuk mencetak kembali lokasi awal dan tujuan untuk memastikan benar tidaknya lokasi yang dituju
					printf("\nLokasi Anda: Stasiun UI");
				}
				else if(lokasia==2){
					printf("\nLokasi Anda: Fakultas Hukum");
				}
				else if(lokasia==3){
					printf("\nLokasi Anda: Stasiun Pondok Cina");
				}
				else if(lokasia==4){
					printf("\nLokasi Anda: Rumpun Ilmu Kesehatan");
				}
				else if(lokasia==5){
					printf("\nLokasi Anda: Fakultas Kesehatan Masyarakat");
				}
				else if(lokasia==6){
					printf("\nLokasi Anda: Fakultas Matematika dan Ilmu Pengetahuan Alam");
				}
				else if(lokasia==7){
					printf("\nLokasi Anda: Fakultas Farmasi");
				}
				else if(lokasia==8){
					printf("\nLokasi Anda: Pusgiwa");
				}
				else if(lokasia==9){
					printf("\nLokasi Anda: Vokasi");
				}
				else if(lokasia==10){
					printf("\nLokasi Anda: Fakultas Teknik");
				}
				else if(lokasia==11){
					printf("\nLokasi Anda: Fakultas Ekonomi dan Bisnis");
				}
				else if(lokasia==12){
					printf("\nLokasi Anda: Fakultas Ilmu Pengetahuan Budaya");
				}
				else if(lokasia==13){
					printf("\nLokasi Anda: Fakultas Ilmu Sosial dan Ilmu Politik");
				}
				else if(lokasia==14){
					printf("\nLokasi Anda: Fakultas Psikologi");
				}
				else if(lokasia==15){
					printf("\nLokasi Anda: Pusat Studi Jepang");
				}
				else if(lokasia==16){
					printf("\nLokasi Anda: Fakultas Ilmu Komputer");
				}
				else if(lokasia==17){
					printf("\nLokasi Anda: Perpustakaan UI");
				}
				else if(lokasia==18){
					printf("\nLokasi Anda: Masjid UI");
				}
				else if(lokasia==19){
					printf("\nLokasi Anda: Rektorat");
				}
				else if(lokasia==20){
					printf("\nLokasi Anda: Markas Menwa");
				}
				else if(lokasia==21){
					printf("\nLokasi Anda: Asrama");
				}
		
				if(lokasib==1){
					printf("\nLokasi Tujuan Anda: Stasiun UI");
				}
				else if(lokasib==2){
					printf("\nLokasi Tujuan Anda: Fakultas Hukum");
				}
				else if(lokasib==3){
					printf("\nLokasi Tujuan Anda: Stasiun Pondok Cina");
				}
				else if(lokasib==4){
					printf("\nLokasi Tujuan Anda: Rumpun Ilmu Kesehatan");
				}
				else if(lokasib==5){
					printf("\nLokasi Tujuan Anda: Fakultas Kesehatan Masyarakat");
				}
				else if(lokasib==6){
					printf("\nLokasi Tujuan Anda: Fakultas Matematika dan Ilmu Pengetahuan Alam");
				}
				else if(lokasib==7){
					printf("\nLokasi Tujuan Anda: Fakultas Farmasi");
				}
				else if(lokasib==8){
					printf("\nLokasi Tujuan Anda: Pusgiwa");
				}
				else if(lokasib==9){
					printf("\nLokasi Tujuan Anda: Vokasi");
				}
				else if(lokasib==10){
					printf("\nLokasi Tujuan Anda: Fakultas Teknik");
				}
				else if(lokasib==11){
					printf("\nLokasi Tujuan Anda: Fakultas Ekonomi dan Bisnis");
				}
				else if(lokasib==12){
					printf("\nLokasi Tujuan Anda: Fakultas Ilmu Pengetahuan Budaya");
				}
				else if(lokasib==13){
					printf("\nLokasi Tujuan Anda: Fakultas Ilmu Sosial dan Ilmu Politik");
				}
				else if(lokasib==14){
					printf("\nLokasi Tujuan Anda: Fakultas Psikologi");
				}
				else if(lokasib==15){
					printf("\nLokasi Tujuan Anda: Pusat Studi Jepang");
				}
				else if(lokasib==16){
					printf("\nLokasi Tujuan Anda: Fakultas Ilmu Komputer");
				}
				else if(lokasib==17){
					printf("\nLokasi Tujuan Anda: Perpustakaan UI");
				}
				else if(lokasib==18){
					printf("\nLokasi Tujuan Anda: Masjid UI");
				}
				else if(lokasib==19){
					printf("\nLokasi Tujuan Anda: Rektorat");
				}
				else if(lokasib==20){
					printf("\nLokasi Tujuan Anda: Markas Menwa");
				}
				else if(lokasib==21){
					printf("\nLokasi Tujuan Anda: Asrama");
				}
						
			printf("\n\n  [0]  Benar");
			printf("\n[ELSE] Salah\n");
			printf("\nPilihan Anda:");
			scanf("%d", &pilihan);
			system("cls");
		}while(pilihan!=0|| getchar()!='\n');
		system ("cls");
		do{
			printf("Jenis kendaraan:\n");
			printf("[1] Motor\n");
			printf("[2] Mobil\n");
			printf("\nPilihan anda: ");     //Meminta input jenis kendaraan
			coba = scanf("%d", &jenis);
  			if (coba==0){
   				while (getchar() != '\n');
  			}
				printf("Jenis Kendaraan yang dipilih: \n");
  					switch(jenis){
						case 1:
   							printf("Motor");
   							if(jarakb>=jaraka){			//penentuan apakah jarak b lebih besar dari jarak b
								jarak=jarakb-jaraka;	
							}
							else{
								jarak=jaraka-jarakb;
							}
							if(jarak<=3){
								harga= 8000;
							}
							else if(jarak>3){
								harga= 8000+((jarak-3)*1000);	//melakukan perhitungan jarak sesuai dengan angka yang telah di declare sebelumnya
							}
   							break;
  						case 2:
   							printf("Mobil");
   							if(jarakb>=jaraka){
								jarak=jarakb-jaraka;
							}
							else{
								jarak=jaraka-jarakb;
							}
							if(jarak<=3){
								harga=12000;
							}
							else{
								harga = 12000+((jarak-3)*3000);
							}
   							break;
						default:
							system("cls");
							printf("[ERROR]");      //Jika input tidak sesuai error
							printf("\nSilahkan masukkan input sesuai jenis kendaraan yang ada\n\n");
   							break;
 					}
 		}while(jenis < 1 || jenis > 2);     //Loop minta input lagi jika tidak sesuai
 		system("cls");
 		printf("\n                                    _____________________________________________      ");
 		printf("\n                                    |                                           |      ");
		printf("\n                                    |  Biaya Perjalanan Anda sebesar Rp.%d    |",harga);			//mecentak jumlah harga yang telah dihutung sebelumnya
		printf("\n                                    |___________________________________________|  \n\n");
		printf("Tekan apa saja untuk melanjutkan...");
		getch();
		label2:
		system("cls");
		printf("Apakah anda ingin kembali ke menu utama?\n\n");
		printf(" [1]   YA, Kembali ke menu utama.\n");
		printf("[ELSE] TIDAK, Keluar dari Program.\n\n");
		printf("Pilihan Anda : ");
		scanf("%s", &pilihan1);
			if (pilihan1=='1'){
				goto label;
			}	
			else{											//kondisi apabila program selesai dan ingin berkahir
				system("cls");
				printf("\n\n\n                                 Terima Kasih Telah Menggunakan Program ini                                  \n\n\n");
				getch();
				return 0;
			}
	}
	else{														//kondisi apabila inputan yang dimasukan tidak sesuai
		printf("\nInput yang dimasukkan SALAH\n");
		printf("Tekan apa saja untuk kembali ke Menu Utama");
		getch();
		goto label;
	}		
	return 0;
}
