class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
       int last_time = 0;
       vector<int> res(n, 0);
       stack<int> stack;
        for(const string& s : logs) {
            int pos1 = s.find(':');
            int id = stoi(s.substr(0, pos1));

            int pos2 = s.find(':', pos1 + 1);
            string action = s.substr(pos1 + 1, pos2 - pos1 - 1);
            
            int pos3 = s.find(':', pos2 + 1);
            int time = stoi(s.substr(pos2 + 1, pos3 - pos2));

            if(action == "start") {
                if(!stack.empty()) {
                    res[stack.top()] += time - last_time;
                }
                stack.push(id);
                last_time = time;
            }
            else if(action == "end") {
                res[stack.top()] += time - last_time + 1;
                stack.pop();
                last_time = time + 1;
            }
        }
    return res;
    }
};