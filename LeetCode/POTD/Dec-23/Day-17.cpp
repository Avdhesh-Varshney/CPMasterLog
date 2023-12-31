// https://leetcode.com/problems/design-a-food-rating-system/description/?envType=daily-question&envId=2023-12-17

class FoodRatings {
    unordered_map<string, string> fc;
    unordered_map<string, int> fr;
    unordered_map<string, set<pair<int, string>>> cf;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = foods.size()-1; i >= 0; i--) {
            fr[foods[i]] = ratings[i];
            fc[foods[i]] = cuisines[i];
            cf[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        cf[fc[food]].erase(cf[fc[food]].find({-fr[food], food}));
        fr[food] = newRating;
        cf[fc[food]].insert({-newRating, food});
    }
    
    string highestRated(string cuisine) {
        return cf[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */