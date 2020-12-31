#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim : A11.2017.10097
///Kelas : 4103
int main()


{
    printf("=================================\n");
    printf("Percabangan Bersarang Kaleng Cat\n");
    printf("=================================\n");
    printf("-\n");

    int isi_cat=10;
    int kaleng;
    int Luas;
    int Harga_kaleng;
    int Harga_total;
    char Nama [25];
    char Tanggal [20];
    int menu;


    printf("=====================\n");
    printf("Menu Cat\n");
    printf("=====================\n");
    printf("1.Dulux\n");
    printf("2.Catylax\n");
    printf("3.Nippon Paint\n");
    printf("4.Avitex\n");
    printf("5.Mowilex\n");
    printf("---------------------\n");

    printf("Luas dinding\t: ");
    scanf("%d", &Luas);

    fflush(stdin);
    printf("Nama \t\t: ");
    gets(Nama);
    printf("Tanggal \t: ");
    gets(Tanggal);

if (Luas%isi_cat ==0)
            {
            kaleng = (Luas/isi_cat);
            }
            else
            {
            kaleng = (Luas/isi_cat)+1;
            }
    printf("Jumlah kaleng cat : %d\n", kaleng);

    printf("Masukkan pilihan cat: ",menu);
    scanf("%d", &menu);

switch(menu)
{
    case 1 :
    if((kaleng>=1)&&(kaleng<=25))
    {
        Harga_total= kaleng * 24500;
    }
    else if ((kaleng>=26)&&(kaleng<=50))
            {
            Harga_total = kaleng*23000;
            }
        else
            {
            Harga_total = kaleng*22000;
            }
    break;

    case 2 :
    if((kaleng>=1)&&(kaleng<=25))
    {
        Harga_total= kaleng*23500;

    }
    else if ((kaleng>=26)&&(kaleng<=50))
            {
            Harga_total = kaleng*22000;
            }
        else
            {
            Harga_total = kaleng*21000;
            }
    break;

    case 3 :
    if((kaleng>=1)&&(kaleng<=25))
    {
        Harga_total= kaleng*23500;
    }
    else if ((kaleng>=26)&&(kaleng<=50))
            {
            Harga_total = kaleng*22500;
            }
        else
            {
            Harga_total = kaleng*20500;
            }
    break;
    case 4 :
    if((kaleng>=1)&&(kaleng<=25))
    {
        Harga_total= kaleng*20000;
    }
    else if ((kaleng>=26)&&(kaleng<=50))
            {
            Harga_total = kaleng*19000;
            }
        else
            {
            Harga_total = kaleng*17500;
            }
    break;
    case 5 :
    if((kaleng>=1)&&(kaleng<=25))
    {
        Harga_total= kaleng*18500;
    }
    else if ((kaleng>=26)&&(kaleng<=50))
            {
            Harga_total = kaleng*17000;
            }
        else
            {
            Harga_total = kaleng*16000;
            }
    break;

    default :
    printf("Inputan Menu Cat Salah\n");
    break;

}
    printf("=====================\n");
    printf("\tNota\n");
    printf("=====================\n");
    printf("Nama Pelanggan\t\t\t: %s\n", Nama);
    printf("Tanggal Pembelian \t\t: %s\n", Tanggal);
    printf("Jumlah kaleng cat\t\t: %d\n", kaleng);
    printf("Harga Total \t\t\t: %d\n", Harga_total);


    return 0;
}
