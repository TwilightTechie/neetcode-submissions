class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int> taskC(26, 0);

        for (auto t : tasks) {
            taskC[t - 'A']++;
        }

        priority_queue<int> pq;

        for (auto task : taskC) {
            if (task > 0)
                pq.push(task);
        }

        int time = 0;

        while (!pq.empty()) {

            vector<int> temp;
            int cycle = 0;

            for (int i = 1; i <= n + 1; i++) {

                if (!pq.empty()) {

                    int freq = pq.top();
                    pq.pop();

                    freq--;
                    cycle++;

                    if (freq > 0)
                        temp.push_back(freq);
                }
            }

            for (auto t : temp) {
                pq.push(t);
            }

            if (pq.empty())
                time += cycle;
            else
                time += n + 1;
        }

        return time;
    }
};