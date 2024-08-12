

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate number of combinations (n choose m)
int combinations(int n, int m) {
    if (m > n) {
        return 0; // Invalid input
    }
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int cinema(int n,int m,vector<int>& A, vector<int>& B) {
    // Combine A and B into pairs
    vector<pair<int, int>> people;
    for (int i = 0; i < A.size(); ++i) {
        people.push_back({A[i], B[i]});
    }
    
    // Sort the people based on height
    sort(people.begin(), people.end());
    
    // Find the longest increasing subsequence based on weight
    vector<int> LIS(B.size(), 1); // Initialize LIS for each person
    for (int i = 1; i < people.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (people[i].second > people[j].second) {
                LIS[i] = max(LIS[i], LIS[j] + 1);
            }
        }
    }
    
    // Find the maximum LIS value
    int maxLIS = 0;
    for (int len : LIS) {
        maxLIS = max(maxLIS, len);
    }
    
    return combinations(maxLIS,m)
}