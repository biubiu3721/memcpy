# memcpy
## summary
   1. Strategy difference
    * [0, 64B), 
    * [64B, 64K)  // suppose L2 cache is 64K. However, most of time, L1 is 32K, L2 is 256K, L3 is 8M.
    * [64K, +inf)
   2. Lookup jump:
   3. Alignment
   4. Vector Copy
   5. prefetch 
   6. ddr direct write. use movntdq to write ddr to avoid cache pollution.
   * Reference:
    https://www.zhihu.com/question/35172305/answer/77398099
   
   
  
