
#include "stdio.h"

const int a = 3;
int * const p;
const int* const p;

const int* add(int &a, int b)


int const add(int a, int b);


class base
{
    int m_a;
    int m_b;
    int badd(){};
};

class drived : public base  
{
    int m_c 
}



void memcpy(int *dst, const int* src, int len)
{

    /**
     * 1.align.
     * 2. long int
     */
    // todo exceeding 
    

    char * tmp_src = src;
    char * tmp_dst = dst;
    int head_len = 8 - (int)src & 0b111; //
    for(int i = 0; i < head_len; i++)
    {
        *tmp_dst++ = *tmp_src++;
    }
    long long *tmp_l_src = src + head_len;
    long long *tmp_l_dst = dst + head_len;
    for(int i = 0; i < (len - head_len - 8); i+=8)
    {
        *tmp_l_dst++ = * tmp_l_src++;
    }
    




}

int main()
{

}
