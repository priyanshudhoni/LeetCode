class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    int i;uint32_t reverse=0;int secondmask=0,j=0,flag=0;
        for(i=31;i>=0;i--)
        {
            int mask=1<<i;
            
            
                if((mask&n)>0)
                {
                    secondmask=1<<j;
                    reverse|=secondmask;
                }
                j++;
            

            
        }
        return reverse;
    }
};