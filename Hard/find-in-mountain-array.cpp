class Solution {
public:
    int binarySearch(MountainArray arr, int left,int right,bool flag,int target) {
        int mid=(left+right)/2;
        if(flag) {
            while(left<=right) {
                if(arr.get(mid) == target) {
                    return mid;
                }else if(arr.get(mid) > target) {
                    right=mid-1;
                }else {
                    left=mid+1;
                }
                mid=(left+right)/2;
            }
            return -1;
        }else {
            while(left<=right) {
                if(arr.get(mid) == target) {
                    return mid;
                }else if(arr.get(mid) > target) {
                    left=mid+1;
                }else {
                    right=mid-1;
                }
                mid=(left+right)/2;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &arr) {
       int left=0,right=arr.length()-1;
       int peak;
       int mid=(left+right)/2;
       while(true) {
           if(mid==0) {
               left=mid+1;
               mid=(left+right)/2;
               continue;
           }
           int x=arr.get(mid-1);
           int y=arr.get(mid);
           int z=arr.get(mid+1);
           
           if(x<y && z<y) {
               peak=mid;
               break;
           }else if(x<y && y<z) {
               left=mid+1;
           }else {
               right=mid-1;
           }
           mid=(left+right)/2;
       }
       int a=binarySearch(arr,0,peak,true,target);
       int b=binarySearch(arr,peak+1,arr.length()-1,false,target);
       if(a!=-1) {
           return a;
       }else if(b!=-1) {
           return b;
       }
       return -1;
    }
};
