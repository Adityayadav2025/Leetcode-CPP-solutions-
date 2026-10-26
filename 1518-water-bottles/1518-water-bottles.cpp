class Solution {
public:
    int numWaterBottles(int n, int m) {
        //3 empty water bottle =1 full bottle ;
        int full =n;
        int drink =full;
        int empty=full;
        full=0;
        while(empty>=m){
            full=empty/m;
            empty=empty%m;

            drink+=full;
            empty+=full;
            full=0;

        }
        return drink;

    }
};