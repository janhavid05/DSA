// class Solution {
// public:
//     int hammingWeight(int n) {
//         int count=0;
//         while(n>1)
//         {
//             if(n%2==1)
//             {
//                 count++;
//             }
//             n=n/2;
//         }
//         if(n==1)
//         {
//             count++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n>1)
        {
            count=count+(n&1);   //n%2!=0
            n=n>>1;        //n/2
        }
        if(n==1)
        {
            count++;
        }
        return count;
    }
};