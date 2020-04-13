// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/new-year-chaos.html .

void minimumBribes(vector<int> q) {
    int res = 0;
    for (int i = 0; i < q.size(); i++) {
        int num = q[i];
        if ((num - 1 - i) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, num - 1 - 2); j < i; j++) {
            if (q[j] > num) {
                res++;
            }
        }
    }
    cout << res << endl;
}
