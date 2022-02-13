#include "io/io.h"

class Bit
{
public:
    int setBit(int b, int n)
    {
        int res;
        int mask = 1 << n; //left shift 1 ,nth times to create a mask
        res = b | mask;
        return res;
    }
    int clearBit(int b, int n)
    {
        int res;
        int mask = ~(1 << n); //left shift 1 ,nth times to create a mask and negate
        res = b & mask;
        return res;
    }
    int findBit(int b, int n)
    {
        int res;
        int mask = 1 << n; //left shift 1 ,nth times to create a mask
        res = b & mask;

        return res ? 1 : res;
    }

    int findNumsSetBit(int b)
    {
        int count = 0;

        while (b != 0)
        {
            b &= (b - 1);
            count++;
        }

        return count;
    }

    int clearIBits(int n,int i){

        int mask = (~0<<i);
        cerr<<mask;
        return (n&mask);
    }

    int decToBinary(int n){

        int ans = 0;
        int p=1;

        while(n>0){
            int lastbit = (n&1);
            ans += p*lastbit;

            n=(n>>1);
            p*=10;
        }

        return ans;
    }
} b;

int main()
{
    io();

    int bit = 15;  //! 1 1 1 1
    int nth = 3;  //!  0 0 1 1 

    //bit  0 1 0
    //mask 0 1 0
    //     0 1 0
    cout << "finding the " << nth << " bit: " << (b.findBit(bit, nth) == 1 ? "bit is set" : "bit is not set") << endl;

    cout << "setting a bit at nth position:" << b.setBit(bit, nth) << endl;
    cout << "clearing a bit at nth position:" << b.clearBit(b.setBit(bit, nth), nth) << endl;
    cout << "find number of set bits:" << b.findNumsSetBit(bit) << endl;
    cout << "Clear i number of bits:" << b.clearIBits(bit,nth) << endl;
    cout << "Binary of "<<bit<<" is: "<< b.decToBinary(bit) << endl;

    return 0;
}
