/*
  m,n >= 0:   dimension of src matrix
  m: number of rows
  n: number of columns

  float* src: source matrix (m-by-n matrix)
  rs_s, cs_s >= 1: row and column stride of source matrix
  rs_s: distance in memory between rows (rs_s = 1 --> column major ordering)
  cs_s: distance in memory between columns (cs_s = 1 --> row major ordering)

  float* dst: destination matrix (n-by-m matrix)
  rs_d, cs_d >= 1: row and column stride of destination matix

  NOTE: This is an out-of-place transposition meaning src and
        dst WILL NOT OVERLAP.
*/

#ifndef FUN_NAME
#define FUN_NAME variant1_transpose
#endif

void FUN_NAME(int m, int n, float *src, int rs_s, int cs_s, float *dst, int rs_d, int cs_d)
{
  int block = 32;
  // If both source and destination are column major
  if ((cs_s == 1) && (cs_d == 1))
  {
    // if m and n are same size, perform square matrix transpose operations
    if (m == n)
    {
    }
    // Otherwise, perform rectangular matrix transpose operations
    else
    {
    }
  }
  // If source is row major and destination is column major
  else if ((rs_s == 1) && (cs_d == 1))
  {
  }
  // If source and destination are row major
  else if ((rs_s == 1) && (rs_d == 1))
  {
  }
  // If source is column major, destination is row major
  else if ((cs_s == 1) && (rs_d == 1))
  {
  }
  for (int i = 0; i < m; i += block)
  {
    for (int j = 0; j < n; ++j)
    {
      for (int b = 0; b < block && i + b < n; b++)
      {

        dst[j * m + i + b] = src[(i + b) * n + j];
      }
    }
  }
}
