#include <stdio.h>
int main()
{
printf("Nama: Zahratul laily \n");
	printf("NIM : F1B019146 \n");
	printf("Kelompok: 25 \n");

  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);
  printf("Masukkan elemen matrix pertama: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriks1[i][j]);
    }
  }
  printf("Masukkan elemen matrix kedua: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriks2[i][j]);
    }
  }
  printf("hasil penjumlahan matrix: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
  return 0;
}
