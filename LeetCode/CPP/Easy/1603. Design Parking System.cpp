// Problem Link
// https://leetcode.com/problems/design-parking-system/

// Solution:
class ParkingSystem {
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    bool addCar(int carType) {
        if(carType == 1) {
            if(b == 0)
                return false;
            b--;
        }
        else if(carType == 2) {
            if(m == 0)
                return false;
            m--;
        }
        else if(carType == 3) {
            if(s == 0)
                return false;
            s--;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */