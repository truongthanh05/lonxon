#include <iostream>
                #include<math.h>
                using namespace std;
                
                int main()
                {
                    int x = 16;
                    /*
                    Ta có log2(2^k) = k <=> mình dung ép
                     kiểu số thực vs số int (nguyên ) nếu mà == thì có 2^k. 
                     Ví dụ float x = 3.000; int x = 3 ; => k
    
                    log(b)/log(c) = logc(b)
                    */
                
                    double k = log10((double)x)/ log10(2.0);
                
                    if(k == (int)k)
                    {
                        cout<<"co dang 2^k"<<endl;
                        cout<<"k = "<<k;
                
                    }
                    else
                    {
                        cout<<"Khong co dang 2^k"<<endl;
                    }
               
        }