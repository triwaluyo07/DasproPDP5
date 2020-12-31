#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
/// Nim : A11.2017.10097
/// Kelas : 4103

int main()
{
    printf("====================================\n");
    printf("Universitas Terbuka Semarang\n");
    printf("Memberikan Beasiswa untuk Mahasiswa\n");
    printf("====================================\n");

    char nama[25];
    char nama_ortu[25] ;
    char pekerjaan1[13]; ///pekerjaan orang tua bapak
    char pekerjaan2[13]; ///pekerjaan orang tua ibu
    char nim [15];
    char alamat [50];
    float ipk;
    int smt; ///semester
    int gaji;

    printf("Nama\t\t\t : ");
    gets(nama);
    printf("Nim\t\t\t : ");
    scanf("%s",&nim);
    fflush(stdin);
    printf("Alamat\t\t\t : ");
    gets(alamat);
    printf("Nama orang tua\t\t : ");
    gets(nama_ortu);
    printf("Pekerjaan Ayah\t\t : ");
    gets(pekerjaan1);
    printf("Pekerjaan ibu\t\t : ");
    gets(pekerjaan2);
    printf("Gaji orang tua per bulan : ");
    scanf("%d",&gaji);
    printf("IPK\t\t\t : ");
    scanf("%f",&ipk);
    fflush(stdin);
    printf("Semester\t\t : ");
    scanf("%d",&smt);
    printf("------------------------------\n");

    if(ipk>=3)
    {
        if((smt>=5) && (gaji<=3000000))
        {
        printf("*********************************************\n");
        printf("Selamat, Anda Berhak Menerima Beasiswa :)\n");
        printf("*********************************************\n");
        }
        else
        {
        printf("*********************************************");
        printf("Maaf Anda Belum Bisa Menerima Beasiswa :(");
        printf("*********************************************");
        }


    }
    else if(ipk<=2.9)
        {
        printf("*********************************************\n");
        printf("Maaf Anda Belum Bisa Menerima Beasiswa :'(\n");
        printf("*********************************************\n");
        }
        else
        {
        printf("*********************************************\n");
        printf("Maaf Anda Belum Bisa Menerima Beasiswa :((\n");
        printf("*********************************************\n");
        }

    return 0;
}
