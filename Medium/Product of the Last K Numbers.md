> **Problem Number:** 1352 <br>
> **Problem Name:** Product of the Last K Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/product-of-the-last-k-numbers](https://leetcode.com/problems/product-of-the-last-k-numbers) <br>

    class ProductOfNumbers {
    public:
        vector<int> prodArr;
        int prevZero, prevProd;
        ProductOfNumbers() {
            prodArr = {};
            prevProd = 1, prevZero = -1;
        }
        
        void add(int num) {
            prodArr.push_back(prevProd * num);
            if(num == 0) {
                prevProd = 1;
                prevZero = prodArr.size()-1;
            }else {
                prevProd = prodArr.back();
            }
        }
        
        int getProduct(int k) {
            int n = prodArr.size();
            if(prevZero >= n-k) {
                return 0;
            }
            int den = n-k-1 >=0 ? prodArr[n-k-1]:1;
            return prodArr.back()/(den==0? 1:den);
        }
    };