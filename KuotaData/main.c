#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim : A11.2017.10097
///Kelas : 4103

int main()
{
    int pilihan;
    int operat;///operator
    int harga;
    int menu;
    char nama[25];
    char tanggal[15];

    printf("========================================\n");
    printf("\t   Kuota Data Internet\n");
    printf("========================================\n");
    printf("1.XL\n");
    printf("2.AXIS\n");
    printf("3.THREE\n");
    printf("4.TELKOMSEL\n");
    printf("5.INDOSAT\n");
    printf("==========================\n");
    printf("Nama Pembeli\t\t\t : ");
    gets(nama);
    printf("Tanggal Pembelian\t\t : ");
    gets(tanggal);
    printf("Pilihan Kuota Yang Akan Dibeli   : ");
    scanf("%d",&pilihan);

    switch(pilihan)
    {
        case 1 : printf("--------------------\n");
                 printf("Operator XL dipilih\n");
                 printf("1.Jaringan 3G\n");
                 printf("2.Jaringan 4G\n");
                 printf("Pilih jaringan : ");
                 scanf("%d",&operat);

                 switch (operat)
                 {
                     case 1 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 1GB\n");
                              printf("2. 2GB\n");
                              printf("3. 3GB\n");
                              printf("4. 4GB\n");
                              printf("5. 5GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 12000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 24000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 36000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 48000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 60000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;


                     case 2 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 4GB\n");
                              printf("2. 6GB\n");
                              printf("3. 10GB\n");
                              printf("4. 12GB\n");
                              printf("5. 14GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 59000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 89000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 129000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 179000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 239000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;
                    default :
                    printf("Inputan Kuota Salah\n");
                    break;
                 }
                printf("--------------------\n");
                printf("\tNOTA\n");
                printf("--------------------\n");
                printf("Nama Pembeli\t\t :%s\n", nama);
                printf("Tanggal beli\t\t :%s\n", tanggal);
                printf("Harga yg dibayar\t :%d\n", harga);

                 exit(0);
        case 2 : printf("--------------------\n");
                 printf("Operator Axis dipilih\n");
                 printf("1.Jaringan 3G\n");
                 printf("2.Jaringan 4G\n");
                 printf("Pilih jaringan : ");
                 scanf("%d",&operat);

                 switch (operat)
                 {
                     case 1 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 1GB\n");
                              printf("2. 2GB\n");
                              printf("3. 3GB\n");
                              printf("4. 4GB\n");
                              printf("5. 5GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 11000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 23000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 33000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 45000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 57000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;

                     case 2 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 2GB\n");
                              printf("2. 3GB\n");
                              printf("3. 5GB\n");
                              printf("4. 10GB\n");
                              printf("5. 15GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 29800;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 39800;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 59800;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 89800;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 109800;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;
                    default :
                    printf("Inputan Kuota Salah\n");
                    break;
                 }
                printf("--------------------\n");
                printf("\tNOTA\n");
                printf("--------------------\n");
                printf("Nama Pembeli\t\t :%s\n", nama);
                printf("Tanggal beli\t\t :%s\n", tanggal);
                printf("Harga yg dibayar\t :%d\n", harga);

                 exit(0);
        case 3 : printf("--------------------\n");
                 printf("Operator THREE dipilih\n");
                 printf("1.Jaringan 3G\n");
                 printf("2.Jaringan 4G\n");
                 printf("Pilih jaringan : ");
                 scanf("%d",&operat);

                 switch (operat)
                 {
                     case 1 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 1GB\n");
                              printf("2. 2GB\n");
                              printf("3. 3GB\n");
                              printf("4. 4GB\n");
                              printf("5. 5GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 19000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 35000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 44000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 55000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 63000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;

                     case 2 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 8GB\n");
                              printf("2. 10GB\n");
                              printf("3. 12GB\n");
                              printf("4. 16GB\n");
                              printf("5. 20GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 52000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 66000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 76000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 103000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 125000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;
                    default :
                    printf("Inputan Kuota Salah\n");
                    break;
                 }
                printf("--------------------\n");
                printf("\tNOTA\n");
                printf("--------------------\n");
                printf("Nama Pembeli\t\t :%s\n", nama);
                printf("Tanggal beli\t\t :%s\n", tanggal);
                printf("Harga yg dibayar\t :%d\n", harga);

                 exit(0);
        case 4 : printf("--------------------\n");
                 printf("Operator TELKOMSEL dipilih\n");
                 printf("1.Jaringan 3G\n");
                 printf("2.Jaringan 4G\n");
                 printf("Pilih jaringan : ");
                 scanf("%d",&operat);

                 switch (operat)
                 {
                     case 1 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 1GB\n");
                              printf("2. 2GB\n");
                              printf("3. 3GB\n");
                              printf("4. 4GB\n");
                              printf("5. 5GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 15000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 30000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 40000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 55000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 65000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;

                     case 2 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 6GB\n");
                              printf("2. 8GB\n");
                              printf("3. 10GB\n");
                              printf("4. 12GB\n");
                              printf("5. 15GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 52000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 68000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 76000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 100000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 110000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;
                    default :
                    printf("Inputan Kuota Salah\n");
                    break;
                 }
                printf("--------------------\n");
                printf("\tNOTA\n");
                printf("--------------------\n");
                printf("Nama Pembeli\t\t :%s\n", nama);
                printf("Tanggal beli\t\t :%s\n", tanggal);
                printf("Harga yg dibayar\t :%d\n", harga);

                 exit(0);
        case 5 : printf("--------------------\n");
                 printf("Operator INDOSAT dipilih\n");
                 printf("1.Jaringan 3G\n");
                 printf("2.Jaringan 4G\n");
                 printf("Pilih jaringan : ");
                 scanf("%d",&operat);

                 switch (operat)
                 {
                     case 1 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 1GB\n");
                              printf("2. 2GB\n");
                              printf("3. 3GB\n");
                              printf("4. 4GB\n");
                              printf("5. 5GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 11000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 23000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 33000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 45000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 57000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;

                     case 2 : printf("--------------------\n");
                              printf("Mau Berapa GB?\n");
                              printf("1. 7GB\n");
                              printf("2. 17GB\n");
                              printf("3. 28GB\n");
                              printf("4. 35GB\n");
                              printf("5. 53GB\n");
                              printf("Masukkan pilihan : ");
                              scanf("%d",&menu);

                              switch(menu)
                              {
                                  case 1 : harga = 59000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 2 : harga = 99000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 3 : harga = 149000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 4 : harga = 169000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  case 5 : harga = 199000;
                                  printf("Harga kuota nya adalah = %d\n", harga);
                                  break;
                                  default :
                                  printf("Pilihan Salah\n");
                                  break;
                              }
                    break;
                    default :
                    printf("Inputan Kuota Salah\n");
                    break;
                 }
                printf("--------------------\n");
                printf("\tNOTA\n");
                printf("--------------------\n");
                printf("Nama Pembeli\t\t :%s\n", nama);
                printf("Tanggal beli\t\t :%s\n", tanggal);
                printf("Harga yg dibayar\t :%d\n", harga);

                 exit(0);
    default :
    printf("Inputan Kuota Salah\n");
    break;
    }

    return 0;
}
