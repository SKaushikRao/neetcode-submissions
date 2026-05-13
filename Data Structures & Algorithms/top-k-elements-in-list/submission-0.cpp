class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequencies
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Store frequency-number pairs
        vector<pair<int, int>> arr;

        for (auto& pair : freq) {
            arr.push_back({pair.second, pair.first});
        }

        // Step 3: Sort descending by frequency
        sort(arr.rbegin(), arr.rend());

        // Step 4: Take top k elements
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};