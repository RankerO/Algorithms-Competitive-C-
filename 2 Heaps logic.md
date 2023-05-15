1.  Find Median from Data Stream
take max heap and min heap , and push minimum elements in max heap and maximum element in min heap, if size of maxh greater than minh.size()+1 pop from maxh and push to minh.push(maxh.top());
