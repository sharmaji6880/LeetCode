class ParkingSystem {
public:
    int bigCapacity,mediumCapacity,smallCapacity;
    int bigCount,mediumCount,smallCount;
    ParkingSystem(int big, int medium, int small) {
        bigCapacity=big;
        mediumCapacity=medium;
        smallCapacity=small;

        bigCount=0;
        mediumCount=0;
        smallCount=0;
    }
    
    bool addCar(int carType) {
        if(carType==1 && bigCount < bigCapacity) {
            bigCount++;
            return true;
        }else if(carType==2 && mediumCount < mediumCapacity) {
            mediumCount++;
            return true;
        }else if(carType==3 && smallCount < smallCapacity) {
            smallCount++;
            return true;
        }
        return false;
    }
};