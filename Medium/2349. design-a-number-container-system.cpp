class NumberContainers {
public:
    map<int,set<int>> numtoIndices;
    map<int,int> indexToNum;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(indexToNum.count(index)) {
            int num=indexToNum[index];
            numtoIndices[num].erase(index);
        }
        if(numtoIndices.count(number)) {
            numtoIndices[number].insert(index);
        }else {
            numtoIndices[number]={index};
        }
        
        
        indexToNum[index]=number;
    }
    
    int find(int number) {
       if(numtoIndices.count(number) && !numtoIndices[number].empty()) {
           return *(numtoIndices[number].begin());
       }
       return -1;
    }
};
