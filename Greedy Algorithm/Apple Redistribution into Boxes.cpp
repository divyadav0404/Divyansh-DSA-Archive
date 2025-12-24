class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ta= 0 ;
        for (int i = 0 ; i < apple.size();i++ )
        {
            ta += apple[i];
        }
        sort ( capacity.begin() , capacity.end() , greater<int>());
        int uc = 0 ;
        int boxes = 0;
        for ( int i = 0 ; i < capacity.size() ; i++)
        {
            uc+= capacity[i];
            boxes++;
        if ( uc >= ta)
        {
            break ;
        }
        }
        return boxes ;
    } //O(nlogn) //O(1)
};
