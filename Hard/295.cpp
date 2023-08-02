// very impressive solution : Please read below link 
// https://leetcode.com/problems/find-median-from-data-stream/solutions/1330646/c-java-python-minheap-maxheap-solution-picture-explain-clean-concise/
class MedianFinder {
public:

priority_queue<int> maxHeap ;   
priority_queue<int, vector<int>, greater<int>> minHeap; 
// max heap mai top element max hota h 
// min heap mai top element min hota h 
vector<int> v;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

    }
    
    double findMedian() {
     if(maxHeap.size()==minHeap.size())
     return (maxHeap.top()+minHeap.top())/2.0;

     // if max heap ka size jaayda hoga tho max heap ka top element hi mid element hoga
     return maxHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */