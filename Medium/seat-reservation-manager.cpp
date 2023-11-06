class SeatManager {
public:
    set<int> unreserved;
    SeatManager(int n) {
        for(int i=1;i<=n;i++) {
            unreserved.insert(i);
        }
    }
    
    int reserve() {
        int x = *(unreserved.begin());
        unreserved.erase(x);
        return x;
    }
    
    void unreserve(int seatNumber) {
        unreserved.insert(seatNumber);
    }
};
