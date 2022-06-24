class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        pair<int,int> a[n+1];
        for(int i=0;i<n;i++){
            a[i].first = end[i];
            a[i].second = i;
        }
        sort(a,a+n);
        
        int finish_time = a[0].first;
        vector<int> m;
        m.push_back(a[0].second+1);
        for(int i=1;i<n;i++){
            if(start[a[i].second] > finish_time){
                m.push_back(a[i].second+1);
                finish_time=a[i].first;
            }
        }
        return  m.size();
        
        
    }
};