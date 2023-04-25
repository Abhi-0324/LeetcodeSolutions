class SmallestInfiniteSet {
public:
    set<int> s;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        int num=1;
        for(auto it : s)
        {
            if(it!=num){
                s.insert(num);
                return num;
            }
            num++;
        }
        s.insert(num);
        return num;
    }
    
    void addBack(int num) {
        s.erase(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */