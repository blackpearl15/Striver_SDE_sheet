// SORT WITH RESPECT TO THE END VALUE 
// AND THEN WITH RESPECT TO THE INDEX WITH WHICH IT OCCURED
// AND CHECK THE NUMBER OF COUNT TO MAXIMUM THE LIMIT
// AND BE CAREFUL WITH THE COMPARATOR FUNCTION.

struct meeting{
        long long start;
        long long  end;
        long long  pos;
    };


bool comp(struct meeting m1,struct meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    return false;
}


int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
    int n = start.size();
    int ans {1};

    struct meeting meet[n];

    for(int i=0;i<n;i++){
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i+1;
    }

    sort(meet,meet+n,comp);

    int limit = meet[0].end;
    for(int i=1;i<n;i++){
        if(limit < meet[i].start){
            limit = meet[i].end;
            ans++;
        }
    }

    return ans;

}
