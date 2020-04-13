// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/jumping-on-the-clouds-revisited.html .

int jumpingOnClouds(vector<int> c, int k) {
    int res = 100, pos = 0, n = c.size();
    while (true) {
        pos += k;
        pos %= n;
        res--;
        res -= 2 * c[pos];
        if (pos == 0) {
            break;
        }
    }
    return res;
}
