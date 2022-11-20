

#ifndef APT_CUDACW_PERC_CPU_H
#define APT_CUDACW_PERC_CPU_H

// Given an array, state, of size (M+2) x (N+2) with a halo of zeros,
// iteratively perform percolation of the non-zero elements until no
// changes or 4 *max(M, N) iterations.
void percolate_cpu(int M, int N, int* state);

#endif
