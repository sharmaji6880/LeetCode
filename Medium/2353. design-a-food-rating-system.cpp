class FoodRatings {
public:
    //This is a comparator which is used to define the strict weak ordering in a set
    struct cmp {
        bool operator() (const pair<string,int> &a, const pair<string,int> &b) const {
            if(a.second != b.second) {
                return a.second > b.second;
            }else {
                return a.first < b.first;
            }
        }
    };

    // These two are the data structures used to store and retrieve the given information efficiently
    map<string,pair<string,int>> m;
    map< string, set<pair<string,int>,cmp> > M;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++) {
            m[foods[i]]={cuisines[i],ratings[i]};
            if(M.count(cuisines[i])) {
                M[cuisines[i]].insert({foods[i],ratings[i]});
            }else {
                M[cuisines[i]]={{foods[i],ratings[i]}};
            }
        }
    }
    
    void changeRating(string food, int newRating) {

        // Get the rating and cuisine of the food item
        int rating= m[food].second;
        string cuisine = m[food].first;

        //Update the rating of the food
        m[food].second=newRating;

        M[cuisine].erase({food,rating});
        M[cuisine].insert({food,newRating}); 
    }
    
    string highestRated(string cuisine) {
        return M[cuisine].begin()->first;
    }
};
