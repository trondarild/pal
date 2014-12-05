/*
 *Naming:
 */

/*
 *1D functions
 */

/*auto correlation*/
void p_acorrs_32f(int n, float* a, float* y );

/*convolution*/
void p_conv_32f(int n, float* a, float* h, float* y );

/*correlation*/
void p_corr_32f(int n, float* a, float* b, float* y );

/*real fir filter*/
void p_fir_32f(int nx, int nh, float* a, float* h, float* y );

/*decimating fir filter*/
void p_firdec_32f(int nx, int nh, float* a, float* h, float* y );

/*interpolating fir filter*/
void p_firint_32f(int nx, int nh, float* a, float* h, float* y );

/*lattice fir filter*/
void p_firlat_32f(int nx, int nh, float* a, float* h, float* y );

/*iir filter*/
void p_iir_32f(int nx, int nh, float* a, float* h, float* y );

/*histogram*/
void p_hist_32f(int n, float* a, float* y );


