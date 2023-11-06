class SeatManager {
public:
    int smallest;
    vector<int> seats;
    SeatManager(int n) {
        for(int i=0;i<n;i++) {
            seats.push_back(0);
        }
        smallest=1;
    }
    
    int reserve() {
        seats[smallest-1]=1;
        int ans=smallest;
        if(smallest==seats.size()) {
            smallest=-1;
            return ans;
        }
        int flag=0;
        for(int i=smallest;i<seats.size();i++) {
            if(seats[i]==0) {
                smallest=i+1;
                flag=1;
                break;
            }
        }
        if(!flag) {
            smallest=-1;
        }
        return ans;
    }
    
    void unreserve(int seatNumber) {
        seats[seatNumber-1]=0;
        if(smallest==-1) {
            smallest=seatNumber;
        }else {
            if(seatNumber-1 < smallest-1) {
                smallest=seatNumber;
            }else if(seatNumber==smallest) {
                smallest++;
            }
        }
        
    }
};
