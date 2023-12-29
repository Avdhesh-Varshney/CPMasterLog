// https://leetcode.com/problems/seat-reservation-manager/description/?envType=daily-question&envId=2023-11-06

class SeatManager {
    priority_queue<int, vector<int>, greater<int> > arr;
public:
    SeatManager(int n) {
        for(int i = 0; i < n; i++) arr.push(i+1);
    }
    
    int reserve() {
        int seatNumber = arr.top();
        arr.pop();
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        arr.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */